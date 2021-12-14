//
// Created by alex on 06.08.21.
//

#include "MultithreadQueue.h"

// TODO: tests
template <typename T>
MultithreadQueue<T>::MultithreadQueue()
	: head(nullptr), tail(nullptr)
{}

template <class T>
void MultithreadQueue<T>::push(T* item)
{
	// TODO: switch to custom objectpool allocator
	auto created_node = new QueueNode {
		.item = item,
		.prev = nullptr
	};
	if (head)
	{
		head->prev = created_node;
		head = created_node;
	}
	else // queue was empty
	{
		head = created_node;
		tail = created_node;
	}
}

template <typename T>
T* MultithreadQueue<T>::pop()
{
	if (!tail) // queue is empty
		return nullptr;
	T* to_return = tail->item;
	if (tail->prev)
	{
		move_tail_back();
	}
	else // there was only one element
	{
		delete tail;
		tail = nullptr;
		head = nullptr;
	}
	return to_return;
}

template <typename T>
void MultithreadQueue<T>::move_tail_back()
{
	auto temp = tail->prev;
	// TODO: switch to custom objectpool allocator
	delete tail;
	tail = temp;
}

template <typename T>
MultithreadQueue<T>::~MultithreadQueue()
{
	if (!tail)
		return;
	while (!tail->prev)
	{
		move_tail_back();
	}
}

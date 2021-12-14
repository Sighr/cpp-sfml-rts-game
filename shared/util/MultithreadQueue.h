//
// Created by alex on 06.08.21.
//

#ifndef GAMESERVER_MULTITHREADQUEUE_H
#define GAMESERVER_MULTITHREADQUEUE_H


#include <vector>

template<typename T>
class MultithreadQueue
{
public:
	MultithreadQueue();
	MultithreadQueue(const MultithreadQueue&) = delete;
	MultithreadQueue(MultithreadQueue&&) = delete;
	MultithreadQueue operator=(const MultithreadQueue&) = delete;
	MultithreadQueue operator=(MultithreadQueue&&) = delete;
	~MultithreadQueue();
	void push(T* item);
	T* pop();
private:
	struct QueueNode
	{
		T* item;
		QueueNode* prev;
	};
	QueueNode* head;
	QueueNode* tail;
	void move_tail_back();
};

#include "MultithreadQueue_impl.h"

#endif //GAMESERVER_MULTITHREADQUEUE_H

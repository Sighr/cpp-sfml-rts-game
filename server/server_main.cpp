#include <iostream>
#include <SFML/Network.hpp>


int main(int argc, char* argv[])
{
	sf::UdpSocket socket;
	if (socket.bind(sf::Socket::AnyPort) != sf::Socket::Done)
	{
		throw std::runtime_error("Cannot bind to any port");
	}
	int port = socket.getLocalPort();
	std::cout << "Server running on port " << port << std::endl;
	sf::Packet received;
	ushort client_port;
	sf::IpAddress client_ip;
	while (true)
	{
		socket.receive(received, client_ip, client_port);
		std::string packet_type;
		received >> packet_type;
		std::cout << "Received: " << packet_type << std::endl;
		if (packet_type == "stop")
		{
			break;
		}
	}
	return 0;
}
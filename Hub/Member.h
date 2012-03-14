#ifndef MEMBER_H
#define MEMBER_H

#include <deque>
#include <string>

class Hub;

class Member {
//		deque<string> sent;
		deque<string> received;
		Hub* hub;
	public:
		void setHub(Hub hub);

		void send(string message);

		void receive(string message);

		void listSent();

		void listReceived();
};

#endif

#ifndef MEMBER_CPP
#define MEMPER_CPP

#include "Hub.h"
#include "Member.h"

#include <iostream>
#include <deque>
#include <string>

using namespace std;


		void Member::setHub(Hub hub) {
			this->hub=&hub;
		}

		void Member::send(string message) {
			hub->send(message);
		}

		void Member::receive(string message) {
			received.push_front(message);
		}

		void Member::listSent() {
		}

		void Member::listReceived() {
			deque<string>::iterator it;
			for(it=received.begin(); it != received.end(); it++) {
				cout << *it << endl;
			}
		}

#endif

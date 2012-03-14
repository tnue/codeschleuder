#ifndef HUB_CPP
#define HUB_CPP

#include "Hub.h"
#include "Member.h"

#include <deque>
#include <string>

using namespace std;


		void Hub::registerMembers(Member member1, Member member2) {
			this->member1=&member1;
			this->member2=&member2;
		}
		
		void Hub::send(string message) {
			member2->receive(message);
		}

#endif

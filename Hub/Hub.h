#ifndef HUB_H
#define HUB_H

#include <string>

using namespace std;

class Member;

class Hub {
		Member* member1;
		Member* member2;
	public:
		void registerMembers(Member member1, Member member2);
		void send(string message);
};

#endif

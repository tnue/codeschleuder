#include "Hub.h"
#include "Member.h"

using namespace std;


int main() {
	Hub hub;
	Member member1, member2;
	hub.registerMembers(member1, member2);
	member1.setHub(hub);
	member2.setHub(hub);
	member1.send("Hallo Welt");
	member2.listReceived();

	return 0;
}

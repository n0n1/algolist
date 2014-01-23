#include <iostream>
#include "ticket.h"

using namespace std;

int main() {
	int N;
	cout << "N: ";
	cin >> N;
	Ticket myTicket(N);
	cout << "Luckly tickets: " << myTicket.count() << '\n'; 
	return 0;
}
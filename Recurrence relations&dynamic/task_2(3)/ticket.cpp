#include "ticket.h"
#include <math.h>

Ticket::Ticket(int N){
	_N = N;
}

Ticket::~Ticket() {
}

bool Ticket::isLuckly(int ticket) {
	 int firstPart = ticket / pow(10,_N);
	 int secondPart = ticket % int(pow(10,_N));
	 //cout << firstPart << " " << secondPart << endl;
	 int sumFirstPart = 0;
	 int sumSecondPart = 0;
	 int tmpFirstPart,tmpSecondPart;
	 for(int i = 0; i < _N; i++) {
	 	tmpFirstPart = firstPart % 10;
	 	firstPart = firstPart / 10;
	 	sumFirstPart += tmpFirstPart;

	 	tmpSecondPart = secondPart % 10;
	 	secondPart = secondPart / 10;
	 	sumSecondPart += tmpSecondPart;
	 } 

	 return (sumFirstPart == sumSecondPart);
}

int Ticket::count() {
	int k = 0;
	for(int i = 0; i < pow(10,2*_N); i++) {
		//cout <<	i << endl;
		if(isLuckly(i)) k++;
	}
	return k;
}
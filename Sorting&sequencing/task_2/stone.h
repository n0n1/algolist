#include <iostream>
#include <list>
using namespace std;

class Stones {
	public:
		explicit Stones(int N);
		~Stones();
        int max(list<int> &_list);
        int sum(list<int> &_list);
        void parts();
        void printPart(list<int> &_list) const;
	private:
		int _N;
        list<int> allStones;
        list<int> partStones_1;
        list<int> partStones_2;
};

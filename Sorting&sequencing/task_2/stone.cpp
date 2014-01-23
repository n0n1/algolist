#include "stone.h"
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

Stones::Stones(int N) {
	_N = N;
	int A;
	for(int i = 0; i < _N; ++i) {
        cout << "A["<< i <<"]=";
		cin >> A;
        allStones.push_back(A);
	}
}

Stones::~Stones() {
}


int Stones::max(list<int> &_list) {
    int max = -1;
    list<int>::iterator it;
    for (it = _list.begin(); it != _list.end(); it++) {
        if(*(it) > max) {
            max = *(it);
        }
//        cout << *(it) <<" ";
//        cout << endl;
    }
    // cout << "max = " << max << endl;
    return max;
}

int Stones::sum(list<int> &_list) {
    int s = -1;
    for(auto it = _list.begin(); it != _list.end(); it++){
        s += *it;
    }
    return s;
}

void Stones::parts()
{
    bool flag = false;
    list<int>::iterator it;
    int maxElem = max(allStones);
    partStones_1 = allStones;
    it = find(partStones_1.begin(),partStones_1.end(),maxElem);
    partStones_1.erase(it);
    partStones_2.push_back(maxElem);

    double difference = -1;
    int const_difference = 2;
    int sumPart_1 = sum(partStones_1);
    int sumPart_2 = sum(partStones_2);

    if( sumPart_1 < (sumPart_2 * 0.5)) {
        cout << "Решений не существует " << endl;
        printPart(partStones_1);
        printPart(partStones_2);
    } else {
        while(!flag){
           if(sumPart_1 < sumPart_2) {
                difference = sumPart_2 / sumPart_1;
                if(difference <= const_difference){
                    flag = true;
                    cout << "куча(2) отличается от кучи(1) не более чем в 2 раза." << endl;
                    printPart(partStones_1);
                    printPart(partStones_2);
                    cout << "difference: " << difference << endl;
                } else {
                    maxElem = max(partStones_1);
                    it = find(partStones_1.begin(),partStones_1.end(),maxElem);
                    partStones_1.erase(it);
                    partStones_2.push_back(maxElem);

                    sumPart_1 = sum(partStones_1);
                    sumPart_2 = sum(partStones_2);
                }
           } else {
                difference = sumPart_1 / sumPart_2;
                if(difference <= const_difference){
                    flag = true;
                    cout << "куча(1) отличается от кучи(2) не более чем в 2 раза." << endl;
                    printPart(partStones_1);
                    printPart(partStones_2);
                    cout << "difference: " << difference << endl;
                } else {
                    maxElem = max(partStones_1);
                    it = find(partStones_1.begin(),partStones_1.end(),maxElem);
                    partStones_1.erase(it);
                    partStones_2.push_back(maxElem);

                    sumPart_1 = sum(partStones_1);
                    sumPart_2 = sum(partStones_2);
                }
           }
        }
    }
}

void Stones::printPart(list<int> &_list) const
{
   for(auto it = _list.begin(); it != _list.end(); it ++)
       cout << *it << " ";
   cout << endl;
}

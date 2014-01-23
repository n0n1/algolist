#include <iostream>
#include <algorithm>

#include "stone.h"
using namespace std;

int main()
{
    int N;
    cout << "N: ";
    cin >> N;
    Stones myStones(N);
    myStones.parts();
    return 0;
}


//============================================================================
// Name        : dynamic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct arr {
private:
    int size;
    int *elems;

public:
    arr(int start, int end) {
        size = end - start + 1;
        elems = new int[size];
        for (int i = 0; i < size; i++)
            *(elems+i) = start + i;
    }

    ~arr() {
        // make sure to include the '[]'
        delete[] elems;
    }

    void printa() {
        for (int i = 0; i < size; i++) {
            cout << *(elems+i) << " ";
        }
        cout << endl;
    }
};
int main() {
	arr newarray(0,9);
	newarray.printa();
}

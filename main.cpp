#include <iostream>

using namespace std;

const int ARR_SIZE = 10;

int main() {
    // basic array review
    int anArray[ARR_SIZE];
    // c-style loop
    for(int n = 0; n < ARR_SIZE; n++){
        anArray[n] = n;
    }
    // range loop
    for (int & n : anArray) {
        cout << n << endl;
    }
    // pointer access
    for(int n = 0; n < ARR_SIZE; n++){
        *(anArray + n) = n;
    }

    return 0;
}

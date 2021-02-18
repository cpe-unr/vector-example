#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> lilu;
    for(int n = 0; n < 10; n++){
        lilu.push_back(n);
    }

    for(int n = 0; n < lilu.size(); n++){
        cout << lilu[n] << endl;
    }

    for(int &n : lilu){
        cout << lilu.at(n); // alias for v[n] that does bounds checking
    }

    cout << endl;
    lilu.erase(lilu.begin() + 5); // erase the fifth element

    // now do a multi-pass on contents
    for(int n = 0; n < lilu.size(); n++ ){
        cout << lilu[n];
    }
    cout << endl;
    for(int n : lilu){ // n starts at 1?
        cout << "index:" << n << " ";
        cout << "value: " << lilu[n] << " " << endl;
    }
    return 0;
}

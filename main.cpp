#include <iostream>
#include <vector>

using namespace std;

class Cat {
    string m_name;
public:
    const string &getName() const {
        return m_name;
    }

    Cat(string name){
        m_name = name;
    }
    Cat(const Cat& cat): m_name(cat.m_name){
        cout << "in the cat copy ctor" << endl;
    }
};


int main() {
    vector<Cat> cats;
    cats.push_back(Cat("Tim"));
    cats.push_back(Cat("Babs"));

    for( Cat c : cats){
       cout << c.getName() << endl;
    }

    // see https://riptutorial.com/cplusplus/example/1678/iterating-over-std--vector
    // for examples of iterators
    for(auto it = begin(cats); it != end(cats); ++it) {
        cout << (*it).getName() << "\n";
    }
    return 0;
}

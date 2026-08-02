#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec(5, 2);

    cout << "Size = " << vec.size() << endl;
    for(int i : vec){
        cout << i << endl;
    }

    vec.push_back(10);
    vec.push_back(20);
    cout << "Size after push_back = " << vec.size() << endl;

    vec.pop_back();
    cout << "Size after pop_back = " << vec.size() << endl;

    cout << "Last element = " << vec.back() << endl;
    cout << "First element = " << vec.front() << endl;
    cout << "Element at index 2 = " << vec.at(2) << endl;
 

    return 0;
}
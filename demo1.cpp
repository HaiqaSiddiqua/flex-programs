#include <iostream>
#include <vector>
#include <map>
#include <cmath>  // for pow, sqrt
#include <algorithm> // for sort

using namespace std;

int main() {
    // Variables
    int a = 5;
    float b = 2.5;
    double c = pow(a, b); // using method
    string str = "Hello, Lexer!";
    char ch = 'x';

    // Containers and Methods
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.pop_back();
    sort(v.begin(), v.end());

    map<string, int> m;
    m["one"] = 1;
    m.erase("one");

    // Control structures and operators
    if (a > b && b != 0) {
        a += 1;
    } else {
        a -= 1;
    }

    // Loop
    for (int i = 0; i < 5; ++i) {
        cout << "i = " << i << endl;
    }

    // Comments
    // This is a single-line comment
    /*
       This is a multi-line comment
       still in comment
    */

    return 0;
}

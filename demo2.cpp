#include <iostream>
#include <vector>
using namespace std;

typedef int myInt;

struct Student {
    string name;
    int age;
};

class Teacher {
public:
    void teach() {
        cout << "Teaching..." << endl;
    }
};

int main() {
    myInt rollNumber = 101;
    Student s1;
    s1.name = "Ali";
    s1.age = 20;

    Teacher t1;
    t1.teach();
    
    vector<int> v;
	v.push_back(44);
	cout<<v[0]<<endl;

    return 0;
}

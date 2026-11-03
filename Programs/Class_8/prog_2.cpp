// Program 2: Multi-level inheritance with constructor initializer lists
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n = "Arya Bhat") : name(n) {}

    void showPerson() {
        cout << "Person Name: " << name << endl;
    }
};

class Student : public Person {
protected:
    string srn;

public:
    Student(string n = "Arya Bhat", string s = "01FE23BEC261") : Person(n), srn(s) {}

    void showStudent() {
        cout << "Student SRN: " << srn << endl;
    }
};

class IT_Student : public Student {
private:
    float cgpa;

public:
    IT_Student(string n, string s, float c) : Student(n, s), cgpa(c) {}

    void showITStudent() {
        cout << "Student CGPA: " << cgpa << endl;
    }
};

int main() {
    IT_Student st("Arya Bhat", "01FE23BEC261", 8.76f);
    st.showPerson();
    st.showStudent();
    st.showITStudent();
    return 0;
}

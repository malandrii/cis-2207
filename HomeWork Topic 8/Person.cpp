#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    string birthday; // format: MM/DD/YYYY

public:
    Person() : name(""), birthday("") {}
    Person(const string& name, const string& birthday) : name(name), birthday(birthday) {}

    string getName() const { return name; }
    string getBirthday() const { return birthday; }

    void setName(const string& newName) { name = newName; }
    void setBirthday(const string& newBirthday) { birthday = newBirthday; }

    bool operator==(const Person& other) const { return name == other.name; }
    bool operator>(const Person& other) const { return name > other.name; }
    bool operator<(const Person& other) const { return name < other.name; }

    friend ostream& operator<<(ostream& os, const Person& person) {
        os << "Name: " << person.name << ", Birthday: " << person.birthday;
        return os;
    }
};
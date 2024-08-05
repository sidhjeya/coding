#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& name, int age) : name(name), age(age) {}

    virtual void displayDetails() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    virtual ~Person() {}
};
class Student : public Person {
private:
    std::string student_id;

public:
    Student(const std::string& name, int age, const std::string& student_id)
        : Person(name, age), student_id(student_id) {}

    void displayDetails() const override {
        std::cout << "Name: " << name << ", Age: " << age << ", Student ID: " << student_id << std::endl;
    }
};
int main() {
    Person* person = new Person("Alice", 30);
    Person* student = new Student("Bob", 20, "S12345");

    person->displayDetails();  // Output: Name: Alice, Age: 30
    student->displayDetails(); // Output: Name: Bob, Age: 20, Student ID: S12345

    delete person;
    delete student;

    return 0;
}

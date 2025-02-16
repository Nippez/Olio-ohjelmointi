#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) : name(n), age(a) {}

    void printStudentInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    int selection = 0;
    vector<Student> studentList;

    do
    {
        cout << endl;
        cout << "Select" << endl;
        cout << "Add students = 0" << endl;
        cout << "Print all students = 1" << endl;
        cout << "Sort and print students Name = 2" << endl;
        cout << "Sort and print students Age = 3" << endl;
        cout << "Find and print student = 4" << endl;
        cin >> selection;

        switch (selection)
        {
        case 0:
        {
            string name;
            int age;
            cout << "Enter student name: ";
            cin >> name;
            cout << "Enter student age: ";
            cin >> age;
            studentList.push_back(Student(name, age));
            break;
        }
        case 1:
        {
            for (const auto& student : studentList)
            {
                student.printStudentInfo();
            }
            break;
        }
        case 2:
        {
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b) {
                return a.name < b.name;
            });
            for (const auto& student : studentList)
            {
                student.printStudentInfo();
            }
            break;
        }
        case 3:
        {
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b) {
                return a.age < b.age;
            });
            for (const auto& student : studentList)
            {
                student.printStudentInfo();
            }
            break;
        }
        case 4:
        {
            string searchName;
            cout << "Enter student search: ";
            cin >> searchName;
            auto it = find_if(studentList.begin(), studentList.end(), [&](const Student& student) {
                return student.name == searchName;
            });
            if (it != studentList.end())
            {
                it->printStudentInfo();
            }
            else
            {
                cout << "Student not found." << endl;
            }
            break;
        }
        default:
            cout << "Wrong selection, stopping..." << endl;
            break;
        }
    } while (selection < 5);

    return 0;
}

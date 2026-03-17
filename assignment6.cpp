#include <iostream>
using namespace std;

class StudentList {
private:
    struct Student {
        string name;
        string birthday; //DD/MM
        Student* next;
        
    Student(const string& name, const string& birthday)
            : name(name), birthday(birthday), next(nullptr) {}
    };

    Student* head;

public:
    StudentList() : head(nullptr) {}

    void insertStudent();
    void deleteStudent();
    void displayBirthdayMessage(const string& today) const;
    void displayStudentList() const;
    void freeMemory();
    ~StudentList();
};

void StudentList::insertStudent() 
{
    string name, birthday;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student birthday (DD/MM): ";
    cin >> birthday;

    Student* newNode = new Student(name, birthday);
    newNode->next = head;
    head = newNode;
    cout << "Student added successfully.\n";
}

void StudentList::deleteStudent() 
{
    if (head == nullptr) 
    {
        cout << "No students in the list.\n";
        return;
    }

    string targetName;
    cout << "Enter the name of the student to delete: ";
    cin >> targetName;
    Student* current = head;
    Student* previous = nullptr;

    while (current != nullptr && current->name != targetName) 
    {
        previous = current;
        current = current->next;
    }

    if (current == nullptr) 
    {
        cout << "Student not found.\n";
        return;
    }

    if (previous == nullptr) 
    {
        head = current->next;
    } 
    else 
    {
        previous->next = current->next;
    }

    delete current;
    cout << "Student deleted successfully.\n";
}

void StudentList::displayBirthdayMessage(const string& today) const {
    const Student* current = head;
    bool found = false;

    while (current != nullptr) {
        if (current->birthday == today) {
            cout << "Happy Birthday, " << current->name << "!\n";
            found = true;
        }
        current = current->next;
    }

    if (!found) {
        cout << "No birthdays today.\n";
    }
}

void StudentList::displayStudentList() const {
    const Student* current = head;
    if (!current) {
        cout << "No students in the list.\n";
        return;
    }

    cout << "Student List:\n";
    while (current != nullptr) {
        cout << "Name: " << current->name << ", Birthday: " << current->birthday << endl;
        current = current->next;
    }
}

void StudentList::freeMemory() {
    while (head != nullptr) {
        Student* temp = head;
        head = head->next;
        delete temp;
    }
}

StudentList::~StudentList() {
    freeMemory();
}

void displayMenu() 
{
    cout << "\nMenu:\n";
    cout << "1. Insert name and birthday of new student\n";
    cout << "2. Delete a student entry\n";
    cout << "3. Display birthday messages for today\n";
    cout << "4. Display list of students with their birthdays\n";
    cout << "5. Exit\n";
}

int main() {
    StudentList list;
    int choice;
    string today;

    cout << "Enter today's date (DD/MM) for birthday checking: ";
    cin >> today;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                list.insertStudent();
                break;
            case 2:
                list.deleteStudent();
                break;
            case 3:
                list.displayBirthdayMessage(today);
                break;
            case 4:
                list.displayStudentList();
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}


/*hp@hp:~/B3_56$ g++ assignment6.cpp
hp@hp:~/B3_56$ ./a.out
Enter today's date (DD/MM) for birthday checking: 08/10

Menu:
1. Insert name and birthday of new student
2. Delete a student entry
3. Display birthday messages for today
4. Display list of students with their birthdays
5. Exit
Enter your choice: 1
Enter student name: komal
Enter student birthday (DD/MM): 07/06
Student added successfully.

Menu:
1. Insert name and birthday of new student
2. Delete a student entry
3. Display birthday messages for today
4. Display list of students with their birthdays
5. Exit
Enter your choice: 1
Enter student name: neha
Enter student birthday (DD/MM): 08/10
Student added successfully.

Menu:
1. Insert name and birthday of new student
2. Delete a student entry
3. Display birthday messages for today
4. Display list of students with their birthdays
5. Exit
Enter your choice: 3
Happy Birthday, neha!

Menu:
1. Insert name and birthday of new student
2. Delete a student entry
3. Display birthday messages for today
4. Display list of students with their birthdays
5. Exit
Enter your choice: 4
Student List:
Name: neha, Birthday: 08/10
Name: komal, Birthday: 07/06

Menu:
1. Insert name and birthday of new student
2. Delete a student entry
3. Display birthday messages for today
4. Display list of students with their birthdays
5. Exit
Enter your choice: 2
Enter the name of the student to delete: neha
Student deleted successfully.

Menu:
1. Insert name and birthday of new student
2. Delete a student entry
3. Display birthday messages for today
4. Display list of students with their birthdays
5. Exit
Enter your choice: 3
No birthdays today.

Menu:
1. Insert name and birthday of new student
2. Delete a student entry
3. Display birthday messages for today
4. Display list of students with their birthdays
5. Exit
Enter your choice: 4
Student List:
Name: komal, Birthday: 07/06

Menu:
1. Insert name and birthday of new student
2. Delete a student entry
3. Display birthday messages for today
4. Display list of students with their birthdays
5. Exit
Enter your choice: 6
Invalid choice. Please try again.

Menu:
1. Insert name and birthday of new student
2. Delete a student entry
3. Display birthday messages for today
4. Display list of students with their birthdays
5. Exit
Enter your choice: 5
Exiting program...
hp@hp:~/B3_56$*/ 








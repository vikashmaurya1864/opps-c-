#include <iostream>

using namespace std;

static int id_counter = 0;

class student
{
private:
    string name;
    unsigned int id;
    unsigned int fee;
    unsigned int paid_amount;

public:
    // student();
    student(string name, unsigned int fee, unsigned int paid_amount);
    int get_paid_amount();
    string get_name();
    int get_fee();
    int get_id();
    ~student();
};

// student::student()
// {
// }

student::student(string name, unsigned int fee, unsigned int paid_amount)
{
    this->id = id_counter;
    this->name = name;
    this->fee = fee;
    this->paid_amount = paid_amount;
    id_counter++;
}

int student::get_id()
{
    return this->id;
}

int student::get_paid_amount()
{
    return this->paid_amount;
}

int student::get_fee()
{
    return this->fee;
}

string student::get_name()
{
    return this->name;
}

student::~student()
{
}

student *arr[10];

void get_student_info_from_user()
{
    string name;
    unsigned int fee;
    unsigned int paid_amount;
    cout << "Enter student name" << endl;
    cin >> name;
    cout << "Enter student fee" << endl;
    cin >> fee;
    cout << "Enter student paid_amount" << endl;
    cin >> paid_amount;
    student *student1 = new student(name, fee, paid_amount);
    arr[student1->get_id()] = student1;
}

void list_student()
{

    for (int i = 0; i < id_counter; i++)
    {
        cout << " Id = " << arr[i]->get_id() << " Name = " << arr[i]->get_name() << " fee = " << arr[i]->get_fee() << endl;
    }
}

void search_by_id()
{
    int id;
    cin >> id;
    if (id < 0 || id > 9)
    {
        cout << "id is out of range." << endl;
    }
    else
    {
        cout << " Id = " << arr[id]->get_id() << " Name = " << arr[id]->get_name() << " fee = " << arr[id]->get_fee() << endl;
    }
}

void start()
{
    while (1)
    {
        cout << "Enter 1 to create student info" << endl;
        cout << "Enter 2 to list students" << endl;
        cout << "Enter 3 to search student by id" << endl;
        cout << "Enter 4 to search student by name" << endl;
        cout << "Enter 5 to exit" << endl;
        int op;
        cin >> op;
        switch (op)
        {
        case 1:
            get_student_info_from_user();
            break;
        case 2:
            /* code */
            list_student();
            break;
        case 3:

            search_by_id();
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            exit(0);
            break;

        default:
            exit(0);
            cout << "Please enter a valid option." << endl;
        }
    }
}

int main()
{

    start();

    return 0;
}
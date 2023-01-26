#include <iostream>
//AdamMindGate

using namespace std;

/*Problem #2: Students grades*/
int main()
{
    string name1, name2;
    int id1, math1, id2, math2;

    cout << "What is student 1 name :";
    cin >> name1;
    cout << "His id: ";
    cin >> id1;
    cout << "His math exam grade: ";
    cin >> math1;
    cout << "What is student 2 name :";
    cin >> name2;
    cout << "His id: ";
    cin >> id2;
    cout << "His math exam grade: ";
    cin >> math2;

    cout << "\n"
         << "Student grades in math" << endl;
    cout << name1 << " (with id " << id1 << ")"
         << " got grade " << math1 << endl;
    cout << name2 << " (with id " << id2 << ")"
         << " got grade " << math2 << endl;
    cout << "Average grade is " << (math1 + math1) / 2;

    return 0;
}

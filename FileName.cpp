#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string name, enrollment;
    int marks;
    char again;

    do 
    {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter enrollment number: ";
        getline(cin, enrollment); 

        // Input marks with validation
        while (true)
        {
            cout << "Enter marks (0-100): ";
            cin >> marks;

            if (marks < 0 || marks > 100)
            {
                cout << "Invalid input. Please enter a valid integer between 0 and 100." << endl;
            }
            else 
            {
                // Determine and display the grade
                char grade;

                if (marks >= 90)
                    grade = 'A';

                else if (marks >= 80) 
                    grade = 'B';

                else if (marks >= 70)
                    grade = 'C';

                else if (marks >= 60)
                    grade = 'D';

                else if (marks >= 50) 
                    grade = 'E';

                else 
                    grade = 'F';

                
                cout << "\nStudent Name: " << name << endl;
                cout << "Enrollment Number: " << enrollment << endl;
                cout << "Marks: " << marks << endl;
                cout << "Grade: " << grade << endl;
                break; 
            }
        }

        cout << "Would you like to find the grade for another student? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "** Thank you for using the Student Marks System **\n";
    return 0;
}

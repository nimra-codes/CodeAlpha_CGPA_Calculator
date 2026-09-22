#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int getCourses()
{
    int courses;

    do
    {
        cout << "Enter number of Courses: ";
        cin >> courses;

        if (courses <= 0)
            cout << "Number of courses must be greater than 0.\n";

    } while (courses <= 0);

    return courses;
}

double getGradePoint(char grade)
{
    if (grade == 'A' || grade == 'a')
        return 4.0;
    else if (grade == 'B' || grade == 'b')
        return 3.0;
    else if (grade == 'C' || grade == 'c')
        return 2.0;
    else if (grade == 'D' || grade == 'd')
        return 1.0;
    else if (grade == 'F' || grade == 'f')
        return 0.0;

    return -1;
}

double getCreditHours()
{
    double credits;

    do
    {
        cout << "Credit Hours: ";
        cin >> credits;

        if (credits <= 0)
            cout << "Credit hours must be greater than 0.\n";

    } while (credits <= 0);

    return credits;
}

void preSemesterData(double &pre_cgpa, double &pre_totalCredits)
{
        int semester;

    cout<<"\nCurrent Semester: ";
    cin>>semester;
    if(semester == 1)
    {
        pre_cgpa = 0;
        pre_totalCredits =0;
    } else {
        do
    {
        cout << "\nEnter your previous CGPA: ";
        cin >> pre_cgpa;

         if (pre_cgpa < 0 || pre_cgpa > 4)
        cout << "CGPA must be between 0 and 4.\n";

} while (pre_cgpa < 0 || pre_cgpa > 4);

 do
        {
            cout << "Enter your previous total credit hours: ";
            cin >> pre_totalCredits;

            if (pre_totalCredits <= 0)
                cout << "Credit hours must be greater than 0.\n";

        } while (pre_totalCredits <= 0);
    }
    }


int main()
{
    cout << "\t\t========================================================\t" << endl;
    cout << "\t\t\t\t GPA & CGPA Calculator \t\t\t" << endl;
    cout << "\t\t========================================================\t" << endl;
    cout << "\n\n";

    string name_ofStu;
    int courses;
    double pre_cgpa;
    double pre_totalCredits;

    cout << "Enter Student's name: ";
    getline(cin, name_ofStu);
    
    courses = getCourses();

    vector<char> grade(courses);
    vector<double> grade_points(courses);
    vector<double> credit_hours(courses);

    double total_grade_points = 0.0;
    double total_credits = 0.0;

    for (int i = 0; i < courses; i++)
    {
        cout << "\nEnter data for Course " << i + 1 << endl;

        // Grade validation
        do
        {
            cout << "Grade (A/B/C/D/F): ";
            cin >> grade[i];

          grade_points[i] = getGradePoint(grade[i]);

    if (grade_points[i] == -1)
        cout << "Invalid grade! Please enter A, B, C, D or F.\n";

} while (grade_points[i] == -1);

        // Credit Hours validation
        credit_hours[i] = getCreditHours();

        // Calculate weighted grade points
        total_grade_points += grade_points[i] * credit_hours[i];

        total_credits += credit_hours[i];
    }

    // Previous Semester data to calaculate 
      preSemesterData(pre_cgpa, pre_totalCredits);

    // Calculate semester GPA
    double gpa = total_grade_points / total_credits;

    // Calculate overall CGPA
    double cgpa =
        ((pre_cgpa * pre_totalCredits) +
         (gpa * total_credits))
        / (pre_totalCredits + total_credits);

    cout << fixed << setprecision(2);

    cout << "\n\t\t========================================================\t" << endl;
    cout << "\t\t\t\t Summary \t\t\t" << endl;
    cout << "\t\t========================================================\t" << endl;

    cout << "\nStudent Name: " << name_ofStu << endl;

    cout << "\nCourse Details:\n";

    for (int i = 0; i < courses; i++)
    {
        cout << "Course " << i + 1
             << " | Grade: " << grade[i]
             << " | Grade Points: " << grade_points[i]
             << " | Credit Hours: " << credit_hours[i]
             << endl;
    }

    cout << "\n---------------------------------------------------------\n";

    cout << "Total Credit Hours: " << total_credits << endl;
    cout << "Total Grade Points: " << total_grade_points << endl;
    cout << "Semester GPA: " << gpa << endl;
    cout << "Overall CGPA: " << cgpa << endl;

    cout << "---------------------------------------------------------\n";

    return 0;
}
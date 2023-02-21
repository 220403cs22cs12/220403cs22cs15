//
//  main.cpp
//  problem_3_1
//
//  Created by Islomov Azamat on 02/12/1401 AP.
//

#include <iostream>
using namespace std;

int main() {
    int num_courses;
       double credits, grade, total_credits = 0, total_grade_points = 0, gpa;

       cout << "Enter the number of courses: ";
       cin >> num_courses;

       for (int i = 1; i <= num_courses; i++) {
           cout << "Enter the number of credits for course " << i << ": ";
           cin >> credits;

           cout << "Enter the grade (0-4) for course " << i << ": ";
           cin >> grade;

           total_credits += credits;
           total_grade_points += credits * grade;
       }

       gpa = total_grade_points / total_credits;

       cout << "Your GPA is " << gpa << endl;

       return 0;
   }

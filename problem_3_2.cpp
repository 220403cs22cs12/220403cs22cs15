//
//  main.cpp
//  problem_3_2
//
//  Created by Islomov Azamat on 02/12/1401 AP.
//

#include <iostream>
using namespace std;

int main() {
    int num_courses, credits;
      char letter_grade;
      double grade_point, total_credits = 0, total_grade_points = 0, gpa;

      cout << "Enter the number of courses: ";
      cin >> num_courses;

      for (int i = 1; i <= num_courses; i++) {
          cout << "Enter the number of credits for course " << i << ": ";
          cin >> credits;
          total_credits += credits;

          cout << "Enter the grade for course " << i << " (A, B, C, D, F): ";
          cin >> letter_grade;

          switch (letter_grade) {
              case 'A':
              case 'a':
                  grade_point = 4.0;
                  break;
              case 'B':
              case 'b':
                  grade_point = 3.0;
                  break;
              case 'C':
              case 'c':
                  grade_point = 2.0;
                  break;
              case 'D':
              case 'd':
                  grade_point = 1.0;
                  break;
              case 'F':
              case 'f':
                  grade_point = 0.0;
                  break;
              default:
                  cout << "Invalid grade entered. Please try again." << endl;
                  i--;
                  continue;
          }

          total_grade_points += credits * grade_point;
      }

      if (total_credits > 0) {
          gpa = total_grade_points / total_credits;
          cout << "Your GPA is " << gpa << endl;
      } else {
          cout << "You did not earn any credits. GPA cannot be calculated." << endl;
      }

      return 0;
  }
   
    


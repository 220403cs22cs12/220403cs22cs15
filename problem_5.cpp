//
//  main.cpp
//  problem_5
//
//  Created by Islomov Azamat on 02/12/1401 AP.
//

#include <iostream>
using namespace std;

int main() {
    int days, years, months, remaining_days, hours;

     std::cout << "Enter number of days: ";
     std::cin >> days;

     years = days / 365;
     days = days % 365;
     months = days / 30;
     days = days % 30;
     hours = days * 24;
     remaining_days = days;

     std::cout << "Years: " << years << std::endl;
     std::cout << "Months: " << months << std::endl;
     std::cout << "Days: " << remaining_days << std::endl;
     std::cout << "Hours: " << hours << std::endl;

     return 0;
 }
   
   


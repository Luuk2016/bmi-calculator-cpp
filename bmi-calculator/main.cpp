//
//  main.cpp
//  bmi-calculator
//
//  Created by Luuk Kenselaar on 10/10/2018.
//  Copyright © 2018 Luuk Kenselaar. All rights reserved.
//

#include <iostream>
#include "BMI.hpp"
using std::string;
using std::cout;
using std::cin;

int main() {
    string name;
    double height;
    double weight;
    
    cout << "Enter your name:" << endl;
    cin >> name;
    
    cout << "Enter your height: (in centimeters, example => 205)" << endl;
    cin >> height;
    
    cout << "Enter your weight: (in kilograms, example => 100)" << endl;
    cin >> weight;
    
    BMI Student_1(name, height, weight);
    
    cout << endl <<
    "Name: " << Student_1.getName() << endl <<
    "Height: " << Student_1.getHeight() << endl <<
    "Weight: " << Student_1.getWeight() << endl <<
    "BMI: " << Student_1.calculateBMI() << endl <<
    "Category: " << Student_1.getCategory(Student_1.calculateBMI()) << endl;
    
    Student_1.~BMI();
    
    return 0;
}

//
//  BMI.cpp
//  bmi-calculator
//
//  Created by Luuk Kenselaar on 10/10/2018.
//  Copyright © 2018 Luuk Kenselaar. All rights reserved.
//

//HEADER ===> Function Definition

#include "BMI.hpp"

//Default constructor
BMI::BMI() {
    newHeight = 0;
    newWeight = 0.0;
}

//Overload constructor
BMI::BMI(string name, double height, double weight) {
    newName = name;
    newHeight = height;
    newWeight = weight;
}

//Deconstructor
BMI::~BMI() {
    
}

string BMI::getName() const {
    return newName;
}

int BMI::getHeight() const {
    return newHeight;
}

double BMI::getWeight() const {
    return newWeight;
}

double BMI::calculateBMI() {
    //FORMULA: bmi = weight(kg) / height^2 (m2)
    return (newWeight / ((newHeight / 100) * (newHeight/ 100)));
}

string BMI::getCategory(double bmi) {
    
    if (bmi < 15) {
        return "Very severly underweight";
        
    } else if (bmi > 15 && bmi < 16) {
        return "Severly underweight";
        
    } else if (bmi > 16 && bmi < 18.5) {
        return "Underweight";
        
    } else if (bmi > 18.5 && bmi < 25) {
        return "Normal (healty weight)";
        
    } else if (bmi > 25 && bmi < 30) {
        return "Overweight";
        
    } else if (bmi > 30 && bmi < 35) {
        return "Moderately obese";
        
    } else if (bmi > 35 && bmi < 40) {
        return "Severely obese";
        
    } else if (bmi > 40) {
        return "Very severly underweight";
    }
    
    return "";
}

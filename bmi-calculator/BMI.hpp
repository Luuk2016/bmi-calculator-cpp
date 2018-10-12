//
//  BMI.hpp
//  bmi-calculator
//
//  Created by Luuk Kenselaar on 10/10/2018.
//  Copyright © 2018 Luuk Kenselaar. All rights reserved.
//

//HEADER ===> Function Declaration

#include <stdio.h>
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

#ifndef BMI_hpp
#define BMI_hpp

class BMI {
public:
    //Default constructor
    BMI();
    
    //Overload constructor
    BMI(string, double, double);
    
    //Destructor
    ~BMI();
    
    //Accesor functions
    string getName() const;
    //Returns the name
    
    int getHeight() const;
    //Returns the height
    
    double getWeight() const;
    //Returns the weight
    
    double calculateBMI();
    //Calculates the student his BMI
    
    string getCategory(double);
    //Gets the category for the BMI
    
private:
    //Member variables
    string newName;
    double newHeight;
    double newWeight;
};

#endif /* BMI_hpp */

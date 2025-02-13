#ifndef VALIDATION_H
#define VALIDATION_H

#include <iostream>
#include <string>
using namespace std ;

class Validation
{
public :
    // Static Methods :
    static bool validationName (string name)
    {
        // Check Size :
        if (name.length() < 5 || name.length() > 20)
        {
            return false ;
        }
        // Check Alphabetic :
        for (int i=0 ; i<name.length() ; i++)
        {
            if (!(name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z'))
            {
                return false ;
            }
        }
        return true ;
    }
    static bool validationAge (int age)
    {
        // Check Age :
        if (age < 20)
        {
            return false ;
        }
        else
        {
            return true ;
        }
    }
    static bool validationGender (string gender)
    {
        // Check Gender :
        if (gender == "male" || gender == "female" || gender == "Male" || gender == "Female" ||
             gender == "MALE"|| gender == "FEMALE")
        {
            return true ;
        }
        else
        {
            return false ;
        }
    }
    static bool validationPassword (string password)
    {
        // Check Size :
        if (password.size() < 8 || password.size() > 20)
        {
            return false ;
        }
        else
        {
            return true ;
        }
    }
    static bool validationBalance (double balance)
    {
        // Check Balance :
        if (balance < 1500)
        {
            return false ;
        }
        else
        {
            return true ;
        }
    }
    static bool validationSalary (double salary)
    {
        // Check Salary :
        if (salary < 5000)
        {
            return false ;
        }
        else
        {
            return true ;
        }
    }
};

#endif // VALIDATION_H

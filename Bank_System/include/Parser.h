#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "Client.h"
#include "Admin.h"
using namespace std ;

class Parser
{
public:
    static vector<string> split(string line)
    {
        vector<string> parts ;
        stringstream ss(line) ;
        string onePart ;
        while (getline(ss,onePart,'#'))
        {
            parts.push_back(onePart) ;
        }
        return parts ;
    }
    static Client parseToClient(string line)
    {
        vector<string> parts = split(line) ;
        Client c ;
        c.setId (stoi(parts[0]) ;
        c.setName (parts[1]) ;
        c.setAge (stoi(parts[2]) ;
        c.setGender (parts[3]) ;
        c.setPassword (parts[4]) ;
        c.setBalance (stod(parts[5]);
        return c ;
    }
    static Employee parseToEmployee(string line)
    {
        vector<string> parts = split(line) ;
        Employee e ;
        e.setId (stoi(parts[0]) ;
        e.setName (parts[1]) ;
        e.setAge (stoi(parts[2]) ;
        e.setGender (parts[3]) ;
        e.setPassword (parts[4]) ;
        e.setSalary (stod(parts[5]) ;
        return e ;
    }
    static Admin parseToAdmin(string line)
    {
        vector<string> parts = split(line) ;
        Admin a ;
        a.setId (stoi(parts[0]) ;
        a.setName (parts[1]) ;
        a.setAge (stoi(parts[2]) ;
        a.setGender (parts[3]) ;
        a.setPassword (parts[4]) ;
        a.setSalary (stod(parts[5]) ;
        return a ;
    }
};

#endif // PARSER_H

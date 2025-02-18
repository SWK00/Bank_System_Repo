#ifndef FILESHELPER_H
#define FILESHELPER_H

#include "Parser.h"

class FilesHelper
{
public:
    static void saveLast(string fileName, int id)
    {
        fstream file (fileName,ios::out) ;
        file << id << endl ;
        file.close() ;
    }
    static int getLast(string fileName)
    {
        string id ;
        fstream file (fileName,ios::in) ;
        getline(file,id);
        file.close() ;
        return stoi(id) ;
    }
    static void saveClient(Client c)
    {
        int id = getLast("ClientLastID.txt") ;
        fstream file ("Client.txt", ios::app);
        file << id+1 << "#" << c.getName() << "#" << c.getAge() << "#"
             << c.getGender() << "#" << c.getBalance() << endl ;
        file.close() ;
        saveLast("ClientLastID.txt",id+1) ;

    }
    static void saveEmployee(Employee e)
    {
        int id = getLast("EmployeeLastID.txt") ;
        fstream file ("Employee.txt", ios::app);
        file << id+1 << "#" << e.getName() << "#" << e.getAge() << "#"
             << e.getGender() << "#" << e.getSalary() << endl ;
        file.close() ;
        saveLast("EmployeeLastID.txt",id+1) ;
    }
    static void saveAdmin(Admin a)
    {
        int id = getLast("AdminLastID.txt") ;
        fstream file ("Admin.txt", ios::app);
        file << id+1 << "#" << a.getName() << "#" << a.getAge() << "#"
             << a.getGender() << "#" << a.getSalary() << endl ;
        file.close() ;
        saveLast("AdminLastID.txt",id+1) ;
    }
    static void getClients()
    {
        string line ;
        fstream file ("Client.txt",ios::in) ;
        while (getline(file,line))
        {
            Client c = Parser::parseToClient(line) ;
            allClients.push_back(c) ;
        }
        file.close();
    }
    static void getEmployees()
    {
        string line ;
        fstream file ("Employee.txt",ios::in) ;
        while (getline(file,line))
        {
            Employee e = Parser::parseToEmployee(line) ;
            allEmployees.push_back(e) ;
        }
        file.close();
    }
    static void getAdmins()
    {
        string line ;
        fstream file ("Admin.txt",ios::in) ;
        while (getline(file,line))
        {
            Admin a = Parser::parseToAdmin(line) ;
            allAdmins.push_back(a) ;
        }
        file.close();
    }
    static void clearFile(string fileName, string lastIdFile)
    {
        fstream file1 , file2 ;
        file1.open (fileName,ios::out) ;
        file1.close();
        file2.open (lastIdFile,ios::out) ;
        file2 << 0 << endl ;
        file2.close() ;
    }
};

#endif // FILESHELPER_H

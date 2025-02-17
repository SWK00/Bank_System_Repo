#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "DataSource.h"
#include "FilesHelper.h"

class FileManager : public DataSource
{
public:
    static void addClient (Client c)
    {
        FilesHelper::saveClient(c);
    }
    static void addEmployee (Employee e)
    {
        FilesHelper::saveEmployee(e);
    }
    static void addAdmin (Admin a)
    {
        FilesHelper::saveAdmin(a);
    }
    static void getAllClients ()
    {
        FilesHelper::getClients();
    }
    static void getAllEmployees()
    {
        FilesHelper::getEmployees();
    }
    static void getAllAdmins()
    {
        FilesHelper::getAdmins();
    }
    static void removeAllClients()
    {
        int id = FileHelper::getLast("Client.txt");
        FilesHelper::clearFile("Client.txt","ClientLastID.txt");
    }
    static void removeAllEmployees()
    {
        FilesHelper::clearFile("Employee.txt","EmployeeLastID.txt");
    }
    static void removeAllAdmins()
    {
        FilesHelper::clearFile("Admin.txt","AdminLastID.txt");
    }
    static void allData ()
    {
        getAllClients();
        getAllEmployees();
        getAllAdmins();
    }
};

#endif // FILEMANAGER_H

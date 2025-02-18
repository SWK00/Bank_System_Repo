#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "DataSource.h"
#include "FilesHelper.h"

class FileManager : public DataSource
{
private :
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
public :
    static void allData ()
    {
        getAllClients();
        getAllEmployees();
        getAllAdmins();
    }
    static void updateClientFile ()
    {
        removeAllClients();
        for (client_It=allClients.begin() ; client_It != allClients.begin() ; client_It++ )
        {
            addClient(*client_It) ;
        }
    }
    static void updateEmployeeFile ()
    {
        removeAllEmployees();
        for (employee_It=allEmployees.begin() ; employee_It != allEmployees.begin() ; employee_It++ )
        {
            addEmployee(*employee_It) ;
        }
    }
    static void updateAdminFile ()
    {
        removeAllAdmins();
        for (admins_It=allAdmins.begin() ; admins_It != allAdmins.begin() ; admins_It++ )
        {
            addAdmin(*admins_It) ;
        }
    }
};

#endif // FILEMANAGER_H

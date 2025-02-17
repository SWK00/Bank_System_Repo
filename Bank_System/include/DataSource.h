#ifndef DATASOURCE_H
#define DATASOURCE_H


class DataSource
{
public:
    virtual void addClient(Client) = 0 ;
    virtual void addEmployee(Employee) = 0 ;
    virtual void addAdmin(Admin) = 0 ;
    virtual void getAllClients() = 0 ;
    virtual void getAllEmployees() = 0 ;
    virtual void getAllAdmins() = 0 ;
    virtual void removeAllClients() = 0 ;
    virtual void removeAllEmployees() = 0 ;
    virtual void removeAllAdmins() = 0 ;
};

#endif // DATASOURCE_H

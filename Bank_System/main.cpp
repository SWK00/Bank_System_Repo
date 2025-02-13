#include <iostream>
#include <string>
#include "Validation.h"
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Admin.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "Welcome to project\n" ;

    Admin c (5,"shehab",10,"male","05585569",00) ;

    c.display () ;

    return 0;
}

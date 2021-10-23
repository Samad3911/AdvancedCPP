#include <iostream>
#include <string>

using namespace std;

class Employee
{
    string m_Name;
    int m_Id;
    double m_Salary;

    public:

    Employee(string name, int id, double salary):m_Name(name),m_Id(id),m_Salary(salary)
    {

    }
};

class Contact
{
    string m_Name;
    string m_PhoneNumber;
    string m_Address;
    string m_Email;

    public:

    Contact(string name, string phoneNumber, string address, string email):m_Name(name), m_PhoneNumber(phoneNumber), m_Address(address), m_Email(email)
    {

    }
};

template<typename T, typename...Params>
T* CreateObject(Params&&... args){
    return new T(forward<Params>(args)...);
}

int main()
{
    int *p1 = CreateObject<int>(5) ;
 
    std::string *s = CreateObject<std::string>() ;//Default construction
 
    Employee * emp = CreateObject<Employee>(
    "Bob",    //Name
    101,      //Id
    1000) ;   //Salary
 
    Contact *p = CreateObject<Contact>(
    "Joey",                //Name
    "987654321",             //Phone number
    "Boulevard Road, Sgr", //Address
    "joey@poash.com") ;    //Email

}
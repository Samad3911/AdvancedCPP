#include <iostream>
#include <memory>

using namespace std;

class Project;

class Employee{

    public:

   shared_ptr<Project> m_prj;

   Employee(){
       cout<<"Employee() constructor called" << endl;
   }

   ~Employee(){
       cout<<"Employee() destructor called" << endl;
   }

};

class Project{

    public:

    weak_ptr<Employee> m_emp;

    Project(){
        cout<<"Project() constructor called" << endl;
    }

    ~Project(){
        cout<<"Project() destructor called" << endl;
    }

};

int main()
{

    shared_ptr<Employee> emp(new Employee());
    shared_ptr<Project> prj(new Project());

    cout<<"Reference count is: "<< emp.use_count()<<endl;
    cout<<"Reference count is: "<< prj.use_count()<<endl;

    emp->m_prj = prj;
    prj->m_emp = emp;

    cout<<"Reference count is: "<< emp.use_count()<<endl;
    cout<<"Reference count is: "<< prj.use_count()<<endl;

    return 0;
}
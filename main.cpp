#include <iostream>
#include <Employee.h>
using namespace std;
int main()
{
    Employee employee1(1,"Amin",5);
    employee1.setId(10);
    std::cout << employee1.getId() << std::endl;
    
    Employee *employee2 = new Employee{};
    employee2->setId(10);
    std::cout << employee2->getId() << std::endl;
	return 0;
}

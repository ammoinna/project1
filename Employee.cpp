#include "Employee.h"
#include <iostream>

Employee::Employee(){
    
}

Employee::Employee(int id, std::string name, int m_length):id{id},name{name},m_length{m_length}
{
    std::cout << "Constructed Called\n";
     marks = new int[static_cast<std::size_t>(m_length)]{};
}


void Employee::setId(int a){
    id = a;
}

int Employee::getId(){
    return id;
}

Employee::~Employee()
{
    delete[] marks;
    std::cout << "Destructor Called\n";
}
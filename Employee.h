#ifndef Employee_H
#define Employee_H
#include<string>
class Employee
{
private:
    int id{};
    std::string name{};
    int m_length{};
    int *marks{};
    
public:
    Employee();
    Employee(int id, std::string name, int m_length);
    void setId(int);
    int getId();
    ~Employee();

};

#endif // Employee_H
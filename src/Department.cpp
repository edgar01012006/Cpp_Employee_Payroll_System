#include "../include/Department.hpp"

void Department::addEmployee(Employee* employee) {
    m_employees.push_back(employee);
}

void Department::calculateAllSalary() {
    for (Employee* const employee: m_employees)
        employee->setSalary(employee->calculateSalary());
}

void Department::printAllInfo() const {
    std::cout << "\tAll Employees info\n";
    for (const Employee* const employee: m_employees)
        employee->printInfo();
}
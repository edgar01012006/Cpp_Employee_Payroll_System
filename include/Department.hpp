#ifndef DEPARMENT_HPP
#define DEPARMENT_HPP

#include <vector>
#include "../include/Employee.hpp"
#include "../include/Roles.hpp"

class Department {
    public:
        //~Department(); // Department shouldn't worry about cleanup of Employees
        void addEmployee(Employee* employee);
        void calculateAllSalary();
        void printAllInfo() const;
    private:
        std::vector<Employee*> m_employees;    
};

#endif /* DEPARMENT_HPP */
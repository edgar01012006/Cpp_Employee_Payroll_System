#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
#include <string>

enum class Role {
    QA, DESIGNER, DEV_OPS, SOFTWARE_ENGINEER, SECURITY_SPECIALIST, PROJECT_MANAGER
};

class Employee { 
    public:
        Employee(const std::string& name, int experience, int projects, Role role);
        void setSalary(int salary) { m_salary = salary; }
        std::string getName() const { return m_name; }
        virtual ~Employee() { /* empty */ }
        virtual void printInfo() const;
        virtual size_t calculateSalary() { return 0; };
        Employee(const Employee& src) = default;
        Employee& operator=(const Employee& rhs) = default;
        Employee(Employee&& src) = default;
        Employee& operator=(Employee&& rhs) = default;
    protected:
        int m_id;
        std::string m_name;
        int m_experience;
        int m_projects;
        Role m_role;
        size_t m_salary;
    private:
        std::string roleToString(Role role) const;
        static int m_nextId;
};

#endif /* EMPLOYEE_HPP */
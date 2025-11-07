#ifndef ROLES_HPP
#define ROLES_HPP

#include "../include/Employee.hpp"
#include <vector>

class Intern : public Employee {
    public:
        Intern(const std::string& name, int experience, int projects, Role role, Employee* mentor);
        void printInfo() const override;
        size_t calculateSalary() override;
    private:
        Employee* m_mentor;
};

class Junior : public Employee {
    public:
        Junior(const std::string& name, int experience, int projects, Role role, Employee* teamLead);
        void printInfo() const override;
        size_t calculateSalary() override;
    private:
        Employee* m_teamLead;
};

class Middle : public Employee {
    public:
        Middle(const std::string& name, int experience, int projects, Role role, Employee* teamLead);
        void printInfo() const override;
        size_t calculateSalary() override;
    private:
        Employee* m_teamLead;
};

class Senior : public Employee {
    public:
        Senior(const std::string& name, int experience, int projects, Role role, std::vector<Employee*> subOrindates);
        void printInfo() const override;
        size_t calculateSalary() override;
    private:
        std::vector<Employee*> m_subOrindates;
};

#endif /* ROLES_HPP */
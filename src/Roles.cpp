#include "../include/Roles.hpp"


// Intern methods
Intern::Intern(const std::string& name, int experience, int projects, Role role, Employee* mentor)
    : Employee { name, experience, projects, role }, m_mentor { mentor } {}

void Intern::printInfo() const {
    std::cout << "\tIntern Info\n";
    Employee::printInfo();
    std::cout << "Mentor name: " << m_mentor->getName() << std::endl;
}

size_t Intern::calculateSalary() { return 100000; }


//Junior methods
Junior::Junior(const std::string& name, int experience, int projects, Role role, Employee* teamLead)
    : Employee { name, experience, projects, role }, m_teamLead { teamLead } {}

void Junior::printInfo() const {
    std::cout << "\tJunior info\n";
    Employee::printInfo();
    std::cout << "Team Lead name: " << m_teamLead->getName() << std::endl;
}

size_t Junior::calculateSalary() { return m_projects * 100000; }


//Middle methods
Middle::Middle(const std::string& name, int experience, int projects, Role role, Employee* teamLead)
    : Employee { name, experience, projects, role }, m_teamLead { teamLead } {}

void Middle::printInfo() const {
    std::cout << "\t Middle info\n";
    Employee::printInfo();
    std::cout << "Team Lead name: " << m_teamLead->getName() << std::endl;
}

size_t Middle::calculateSalary() { return (m_experience * 20000) + (m_projects * 100000); }


//Senior methods
Senior::Senior(const std::string& name, int experience, int projects, Role role, std::vector<Employee*> subOrindates)
    : Employee { name, experience, projects, role }, m_subOrindates { subOrindates } {}

void Senior::printInfo() const {
    std::cout << "\t Senior info\n";
    Employee::printInfo();
    std::cout << "SubOrindates names: ";
    for (const Employee* const employee: m_subOrindates)
        std::cout << employee->getName() << " ";
    std::cout << std::endl;
}

size_t Senior::calculateSalary() { 
    return (m_subOrindates.size() * 10000) + (m_experience * 20000) + (m_projects * 100000); 
};
#include "../include/Employee.hpp"

int Employee::m_nextId = 0;
 
std::string Employee::roleToString(Role role) const {
    switch (role) {
        case Role::QA: return "QA";
        case Role::DESIGNER: return "Designer";
        case Role::DEV_OPS: return "Dev Ops";
        case Role::SOFTWARE_ENGINEER: return "Software Engineer";
        case Role::SECURITY_SPECIALIST: return "Security Specialist";
        case Role::PROJECT_MANAGER: return "Project Manager";
        default: break;
    }
    return "None";
}   

Employee::Employee(const std::string& name, int experience, int projects, Role role)
    : m_id { ++m_nextId }, m_name { name }, m_experience { experience }, m_projects { projects },
    m_role { role }, m_salary { 0 } {}

void Employee::printInfo() const {
    std::cout << "Id: " << m_id << "\n";
    std::cout << "Name: " << m_name << "\n";
    std::cout << "Experience: " << m_experience << "\n";
    std::cout << "Projects Done: " << m_projects << "\n";
    std::cout << "Role: " << roleToString(m_role) << "\n";
    std::cout << "Salary: " << m_salary << "\n";
}
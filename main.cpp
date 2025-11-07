/* my written main
#include "include/Employee.hpp"
#include "include/Department.hpp"
#include "include/Roles.hpp"

int main() {
    Employee John("John", 7, 20, Role::SOFTWARE_ENGINEER);
    Intern Ethan("Ethan", 1, 2, Role::DEV_OPS, &John);
    Employee Lucas("Lucas", 9, 35, Role::SECURITY_SPECIALIST);
    Junior Noah("Noah", 3, 4, Role::DESIGNER, &Lucas);
    Middle Oliver("Oliver", 6, 9, Role::QA, &Lucas);
    std::vector<Employee*> employees;
    employees.push_back(&Ethan);
    employees.push_back(&Noah);
    employees.push_back(&Oliver);
    Senior Marcus("Marcus", 15, 16, Role::PROJECT_MANAGER, employees);
    employees.push_back(&Marcus);
    Department department;
    department.addEmployee(&Ethan);
    department.addEmployee(&Noah);
    department.addEmployee(&Oliver);
    department.addEmployee(&Marcus);
    department.calculateAllSalary();
    department.printAllInfo();
}
*/

/* chatgpt's */
#include "include/Employee.hpp"
#include "include/Department.hpp"
#include "include/Roles.hpp"
#include <vector>
#include <iostream>

int main() {
    // Create base employees
    Employee John("John", 7, 20, Role::SOFTWARE_ENGINEER);
    Employee Lucas("Lucas", 9, 35, Role::SECURITY_SPECIALIST);
    Employee Emma("Emma", 5, 12, Role::DEV_OPS);

    // Create Interns with mentors
    Intern Ethan("Ethan", 1, 2, Role::DEV_OPS, &John);
    Intern Mia("Mia", 0, 1, Role::QA, &Emma);

    // Create Junior employees with team leads
    Junior Noah("Noah", 3, 4, Role::DESIGNER, &Lucas);
    Junior Ava("Ava", 2, 3, Role::SOFTWARE_ENGINEER, &John);

    // Create Middle employees with team leads
    Middle Oliver("Oliver", 6, 9, Role::QA, &Lucas);
    Middle Sophia("Sophia", 4, 6, Role::DEV_OPS, &Emma);

    // Create Senior employees with subordinates
    std::vector<Employee*> seniorTeam1 { &Ethan, &Noah, &Oliver };
    Senior Marcus("Marcus", 15, 16, Role::PROJECT_MANAGER, seniorTeam1);

    std::vector<Employee*> seniorTeam2 { &Mia, &Ava, &Sophia };
    Senior Isabella("Isabella", 12, 14, Role::PROJECT_MANAGER, seniorTeam2);

    // Create department and add all employees
    Department department;
    department.addEmployee(&John);
    department.addEmployee(&Lucas);
    department.addEmployee(&Emma);
    department.addEmployee(&Ethan);
    department.addEmployee(&Mia);
    department.addEmployee(&Noah);
    department.addEmployee(&Ava);
    department.addEmployee(&Oliver);
    department.addEmployee(&Sophia);
    department.addEmployee(&Marcus);
    department.addEmployee(&Isabella);

    // Calculate salaries
    department.calculateAllSalary();

    // Print all employee info
    std::cout << "\n================= Department Employees =================\n";
    department.printAllInfo();
    std::cout << "========================================================\n";

    return 0;
}
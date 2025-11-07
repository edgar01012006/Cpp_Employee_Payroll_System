# 🧾 Employee Payroll System — Object-Oriented Design Practice

A C++ project demonstrating **dynamic polymorphism**, **virtual functions**, **virtual destructors**, and relationships between employees of different roles and seniority.

---

## 📂 Project Structure

├── main.cpp  
├── include/  
│   ├── Roles.hpp  
│   ├── Employee.hpp  
│   └── Department.hpp  
├── src/  
│   ├── Roles.cpp  
│   ├── Employee.cpp  
│   └── Department.cpp  
└── README.md

---

## ⚙️ Build & Run

Compile and execute with **g++ (C++17)**:

```bash
g++ -std=c++17 -Iinclude src/Department.cpp src/Employee.cpp src/Roles.cpp main.cpp -o program
./program

# 42 C++ Piscine (CPP00 - CPP09)

![42 School](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Grade](https://img.shields.io/badge/Grade-Completed-success?style=flat-square)

## 📖 About

This repository contains all my solutions for the **C++ Piscine** at 42 School. The C++ modules are designed to introduce fundamental and advanced concepts of Object-Oriented Programming in C++98 standard.

Each module progressively builds upon previous knowledge, covering everything from basic C++ syntax to advanced template metaprogramming and STL containers.

## 🎯 Learning Objectives

Throughout these 10 modules, I gained expertise in:

- **Object-Oriented Programming (OOP)** principles
- **Memory management** in C++
- **Polymorphism** and **inheritance**
- **Operator overloading**
- **Exception handling**
- **Templates** and generic programming
- **STL containers** and algorithms
- **Type casting** in C++
- **Design patterns** and best practices

## 📚 Module Overview

### [CPP Module 00](./cpp00) - Basics
**Topics:** Namespaces, classes, member functions, stdio streams, initialization lists, static, const

**Key Exercises:**
- Megaphone (string manipulation)
- PhoneBook (class design, encapsulation)
- Account class (static members)

**Skills Learned:**
- Basic C++ syntax and structure
- Class design and encapsulation
- Static members and methods
- Input/output streams

---

### [CPP Module 01](./cpp01) - Memory Allocation
**Topics:** Memory allocation, pointers to members, references, switch statement

**Key Exercises:**
- Zombie class (stack vs heap allocation)
- References and pointers
- File manipulation
- String replacement

**Skills Learned:**
- Dynamic memory allocation (new/delete)
- References vs pointers
- File I/O operations
- Memory management best practices

---

### [CPP Module 02](./cpp02) - Ad-hoc Polymorphism
**Topics:** Orthodox Canonical Form, operator overloading, fixed-point numbers

**Key Exercises:**
- Fixed-point number class
- Operator overloading (+, -, *, /, ++, --)
- Comparison operators
- Stream insertion operator

**Skills Learned:**
- Orthodox Canonical Form (OCF)
- Operator overloading
- Copy constructors and assignment operators
- Fixed-point arithmetic

---

### [CPP Module 03](./cpp03) - Inheritance
**Topics:** Inheritance, access specifiers, multiple inheritance

**Key Exercises:**
- ClapTrap base class
- ScavTrap and FragTrap derived classes
- DiamondTrap (multiple inheritance)

**Skills Learned:**
- Single and multiple inheritance
- Protected and private inheritance
- Virtual inheritance (diamond problem)
- Constructor/destructor order

---

### [CPP Module 04](./cpp04) - Subtype Polymorphism
**Topics:** Virtual functions, abstract classes, interfaces

**Key Exercises:**
- Animal abstract class
- Polymorphic behavior
- Deep copy vs shallow copy
- Interface implementation

**Skills Learned:**
- Virtual functions and pure virtual functions
- Abstract classes and interfaces
- Polymorphism in action
- Deep copy with polymorphic classes

---

### [CPP Module 05](./cpp05) - Exceptions
**Topics:** Try/catch blocks, exception classes, exception safety

**Key Exercises:**
- Bureaucrat class
- Form class with signing and execution
- Exception hierarchy
- Grade validation

**Skills Learned:**
- Exception handling (try/catch/throw)
- Custom exception classes
- Exception safety guarantees
- Resource management with exceptions

---

### [CPP Module 06](./cpp06) - C++ Casts
**Topics:** Static cast, dynamic cast, reinterpret cast, const cast

**Key Exercises:**
- Scalar type conversion
- Type identification
- Serialization/deserialization
- Safe downcasting

**Skills Learned:**
- Static_cast, dynamic_cast, reinterpret_cast, const_cast
- Type conversion and casting safety
- RTTI (Run-Time Type Information)
- Serialization techniques

---

### [CPP Module 07](./cpp07) - Templates
**Topics:** Function templates, class templates, template specialization

**Key Exercises:**
- Generic swap, min, max functions
- Array template class
- Template specialization
- Iterator implementation

**Skills Learned:**
- Function templates
- Class templates
- Template specialization
- Generic programming concepts

---

### [CPP Module 08](./cpp08) - Templated Containers
**Topics:** STL containers, iterators, algorithms

**Key Exercises:**
- Easy find algorithm
- Span class (using containers)
- MutantStack (stack with iterators)

**Skills Learned:**
- STL containers (vector, list, stack, deque)
- Iterators and their usage
- Algorithm design with templates
- Container adapters

---

### [CPP Module 09](./cpp09) - STL Containers & Algorithms
**Topics:** Advanced STL usage, performance optimization, algorithm complexity

**Key Exercises:**
- Bitcoin exchange (map container)
- RPN calculator (stack container)
- PmergeMe (merge-insert sort with vector and deque)

**Skills Learned:**
- Map, stack, vector, deque usage
- Algorithm complexity analysis
- Performance comparison
- Real-world STL applications

---

## 🛠️ Compilation

All projects are compiled with:
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

Each module contains a Makefile for easy compilation:
```bash
cd cpp0X/exXX
make
./program_name
```

## 📋 Requirements

- **Compiler:** c++ (clang++ or g++)
- **Standard:** C++98
- **Flags:** -Wall -Wextra -Werror
- **No external libraries** (except standard C++98 library)
- **Memory leaks:** Not tolerated (tested with valgrind)

## 🧪 Testing

Each exercise was tested with:
- **Valgrind** for memory leak detection
- **GDB** for debugging
- Custom test cases
- Edge cases and error handling

```bash
# Memory leak check
valgrind --leak-check=full ./program_name

# Debugging
gdb ./program_name
```

## 📝 Key Concepts Mastered

### Object-Oriented Programming
✅ Encapsulation, inheritance, polymorphism  
✅ Abstract classes and interfaces  
✅ Virtual functions and pure virtual functions  

### Memory Management
✅ Stack vs heap allocation  
✅ RAII (Resource Acquisition Is Initialization)  
✅ Rule of Three (destructor, copy constructor, assignment operator)  
✅ Deep copy vs shallow copy  

### Advanced C++ Features
✅ Operator overloading  
✅ Exception handling  
✅ Templates and generic programming  
✅ STL containers and algorithms  
✅ Type casting (static, dynamic, reinterpret, const)  

### Best Practices
✅ Orthodox Canonical Form  
✅ Const correctness  
✅ Exception safety  
✅ Code modularity and reusability  

## 🎓 Skills Developed

- **Problem Solving:** Complex algorithmic challenges
- **Code Quality:** Clean, maintainable, and efficient code
- **Debugging:** Using GDB and Valgrind effectively
- **Documentation:** Clear code comments and structure
- **Software Design:** Design patterns and architecture

## 📈 Progress

| Module | Status | Grade | Key Topics |
|--------|--------|-------|------------|
| CPP00  | ✅ Completed | 100/100 | Classes, I/O streams |
| CPP01  | ✅ Completed | 100/100 | Memory, references |
| CPP02  | ✅ Completed | 100/100 | Operator overloading |
| CPP03  | ✅ Completed | 100/100 | Inheritance |
| CPP04  | ✅ Completed | 100/100 | Polymorphism |
| CPP05  | ✅ Completed | 100/100 | Exceptions |
| CPP06  | ✅ Completed | 100/100 | Casts |
| CPP07  | ✅ Completed | 100/100 | Templates |
| CPP08  | ✅ Completed | 100/100 | STL containers |
| CPP09  | ✅ Completed | 100/100 | Advanced STL |

## 🔗 Related Projects

- [ft_irc](https://github.com/yourusername/ft_irc) - IRC Server in C++
- [webserv](https://github.com/yourusername/webserv) - HTTP Server in C++
- [ft_containers](https://github.com/yourusername/ft_containers) - STL Containers Recreation

## 📚 Resources

- [C++ Reference](https://en.cppreference.com/)
- [Learn C++](https://www.learncpp.com/)
- [CPlusPlus.com](http://www.cplusplus.com/)
- [Effective C++](https://www.aristeia.com/books.html) by Scott Meyers

## 👤 Author

**Ismail AIT BOUGNSA**

## 📄 License

This project is part of the 42 School curriculum. Feel free to use it for learning purposes, but please don't copy it for your own 42 projects.

---

⭐ If you found this helpful, consider giving it a star!

**Made with ☕ at 42 School - 1337 Ben Guerir**

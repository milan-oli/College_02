# Lab 05 — DMA, this Pointer and Const members

This lab covers four core OOP concepts in C++: dynamic memory allocation, the `this` pointer, static members, and constant member functions.

---

## Problem 01 — Dynamic Memory Allocation (`01_DML.cpp`)

**Topic:** Dynamically allocating single objects and object arrays using `new` and `delete`.

### What it does
- Creates a `Rectangle` class with private `float length` and `width`
- Dynamically allocates a single `Rectangle` object using `new`
- Takes dimensions as input in `main()` and passes them to `set(float l, float w)`
- Displays the dimensions via `display()`
- Dynamically allocates an array of `Rectangle` objects using `new Rectangle[n]`
- Iterates through the array to set and display each rectangle's dimensions
- Frees memory using `delete` and `delete[]`

### Key Concepts
- `new` allocates memory on the heap; `delete` / `delete[]` frees it
- Input is collected in `main()` and passed to the class — the class only manages data
- Array subscript `R[i].set()` is used instead of pointer arithmetic for readability

---

## Problem 02 — `this` Pointer (`02_pointer_this.cpp`)

**Topic:** Using the `this` pointer to disambiguate member variables and print object addresses.

### What it does
- Creates a `pointThis` class with `int age` and `string name`
- Uses `this->age = age` and `this->name = name` in the constructor to resolve naming conflicts between parameters and members
- Prints the address of the current object using `this` inside `display()`
- Prints the address of the object from `main()` using `&T` to confirm they match

### Key Concepts
- `this` is an implicit pointer to the calling object inside any member function
- `this->member` is used when a parameter shares the same name as a member variable
- `this` and `&object` always point to the same address

---

## Problem 03 — Static Members (`03_bankSystem.cpp`)

**Topic:** Using static member variables and static member functions to track shared state across all objects.

### What it does
- Creates a `BankAccount` class with `accountNumber`, `balance`, and a static `totalAccount` counter
- Both constructors increment `totalAccount` so every account creation is tracked
- `deposit(double)` validates the amount (rejects `<= 0`) and adds to balance
- `withdraw(double)` validates the amount and checks sufficient balance before subtracting
- `getTotalAccounts()` is a static function defined outside the class using `::` scope resolution
- Called in `main()` as `BankAccount::getTotalAccounts()` without any object

### Key Concepts
- `static` member variables are shared across all instances — one copy exists for the whole class
- Static members must be defined outside the class: `int BankAccount::totalAccount = 0`
- Static functions can only access static members — they have no `this` pointer
- Input validation guards prevent invalid deposits and withdrawals

---

## Problem 04 — Constant Member Functions (`04_student.cpp`)

**Topic:** Defining `const` member functions and creating `const` objects.

### What it does
- Creates a `Student` class with private `string name` and `char grade`
- Constructor takes `const string &name` and `const char &grade` to avoid unnecessary copies
- `getName() const` and `getGrade() const` are marked `const` — they promise not to modify the object
- A `const Student` object `s1` is created in `main()`
- `getName()` and `getGrade()` are called on `s1` — only `const` functions can be called on a `const` object

### Key Concepts
- A `const` member function cannot modify any member variable
- A `const` object can only call `const` member functions
- `const string &` parameters avoid copying — `const` allows binding to temporary values like string literals
- Return types must match the member type (`char getGrade()` not `float`)

---

## Compilation

```bash
g++ 01_DML.cpp -o DML && ./DML
g++ 02_pointer_this.cpp -o pointer_this && ./pointer_this
g++ 03_bankSystem.cpp -o bankSystem && ./bankSystem
g++ 04_student.cpp -o student && ./student
```

---

## Concepts Summary

| Lab | Concept                   | Key Syntax                            |
|---- |---------                  |------------                           |
| 01  | Dynamic Memory Allocation | `new`, `delete`, `delete[]`           |
| 02  | `this` Pointer            | `this->member`, `&object`             |
| 03  | Static Members            | `static`, `ClassName::function()`     |
| 04  | Const Functions & Objects | `func() const`, `const ClassName obj` |

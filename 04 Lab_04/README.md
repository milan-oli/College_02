# Lab 04 — Introduction to OOP (Classes & Objects)

Small exercises completed as part of coursework, covering classes, constructors, destructors, encapsulation, and objects interacting with each other.

| File     || Topic    |
|---       ||---       |
| `01_BankAccount.cpp` || `BankAccount` class with private data members, default and parameterized constructors, a `display()` method, and a method that returns an updated object with 5% interest applied |

| `02_destructor.cpp` || Constructor and destructor behavior — demonstrates when a destructor is automatically called |

| `03_array_of_obj.cpp` || An array of `student` objects — reads name/age for each, calculates the average age, and finds the oldest student |

| `04_calc_distance.cpp` || A `Distance` class (kilometers/meters) with functions to add and subtract two `Distance` objects, handling unit carry/borrow correctly |

## How to Compile and Run

```bash
g++ 01_BankAccount.cpp -o 01_BankAccount
./01_BankAccount
```

(Replace the filename for each exercise; on Windows, run the generated `.exe` instead)

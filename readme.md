# CPP Module 01 — Memory, References & Pointers to Members

![C++](https://img.shields.io/badge/C%2B%2B-98-00599C?style=flat&logo=cplusplus&logoColor=white)
![42](https://img.shields.io/badge/42-School-000000?style=flat)
![Status](https://img.shields.io/badge/status-complete-success?style=flat)

> Part of the 42 School C++ Piscine. Dynamic memory allocation, references, pointers to member functions, and switch statements.

---

## Overview

This module digs into how C++ manages memory and gives references — a safer alternative to pointers — their first real workout. It covers when to allocate on the stack versus the heap, how to avoid memory leaks with `new`/`delete`, and introduces two idioms that feel alien at first: **pointers to member functions** and the **switch fallthrough**.

All code compiles under the C++98 standard with no external libraries.

---

## Concepts Covered

| Concept | Description |
|---------|-------------|
| `new` / `delete` | Dynamic allocation with constructor/destructor calls |
| `new[]` / `delete[]` | Allocating and freeing arrays |
| Stack vs heap | Automatic vs manual object lifetime |
| References (`&`) | Aliases that can't be null or reseated |
| Pointers vs references | Choosing the right tool per situation |
| Pass by reference | Letting a function modify the caller's variable |
| Pointers to member functions | Dispatching without if/else chains |
| File streams | `<fstream>` for reading and writing files |
| `switch` statement | Including fallthrough behavior |

---

## Exercises

### ex00 — BraiiiiiiinnnzzzZ

A `Zombie` class demonstrating the **stack vs heap** decision:

- `newZombie()` allocates on the **heap** so the zombie outlives the function
- `randomChump()` allocates on the **stack** for a short-lived zombie

Focus: `new`/`delete`, object lifetime, choosing where to allocate.

### ex01 — Moar brainz!

`zombieHorde()` allocates **N zombies in a single allocation** (`new Zombie[N]`), names each one, and returns a pointer to the first. Freed with `delete[]` and verified leak-free.

Focus: array allocation, default constructors, `delete[]`.

### ex02 — HI THIS IS BRAIN

A short demonstration that **references are just another syntax for address manipulation**. Prints the address and value of a string via the variable itself, a pointer, and a reference — all three match.

Focus: demystifying references against pointers.

### ex03 — Unnecessary violence

A `Weapon` class plus two wielders:

- `HumanA` — always armed, so it holds a **reference** to its weapon
- `HumanB` — may be unarmed, so it holds a **pointer** (which can be null)

Changing the weapon's type is reflected in later attacks, proving the reference/pointer points to the same object.

Focus: reference vs pointer as a design choice.

### ex04 — Sed is for losers

A mini `sed`: takes a filename and two strings, then copies the file into `<filename>.replace` with every occurrence of `s1` swapped for `s2`. Uses only `std::string` methods (no `replace`, no C file functions) and handles errors like missing files or an empty search string.

Focus: `<fstream>`, string searching with `find`/`substr`, error handling.

### ex05 — Harl 2.0

A complaint generator with four levels (DEBUG, INFO, WARNING, ERROR). The `complain()` method dispatches to the right function using an **array of pointers to member functions** — no forest of if/else.

Focus: pointers to member functions.

### ex06 — Harl filter

Reads a log level and prints every message **at that level and above**, using a `switch` statement with intentional **fallthrough**.

Focus: the switch statement and fallthrough.

---

## Build & Run

Each exercise is self-contained in its own directory.

```bash
cd ex00
make
./zombie          # executable name may differ per exercise
```

Available Makefile rules:

```bash
make        # compile
make clean  # remove object files
make fclean # remove object files and executable
make re     # rebuild from scratch
```

### Compilation flags

```
c++ -Wall -Wextra -Werror -std=c++98
```

---

## Key Takeaways

- **Every `new` needs a matching `delete`** (and `new[]` a matching `delete[]`) — the heap is manual, the stack is automatic.
- A **reference** can't be null and can't be reseated, which makes it the right choice when an object must always exist; a **pointer** is right when it might not.
- Both **pointers to member functions** and the **switch fallthrough** exist to replace long if/else chains with something more direct.

---

## Author

**memillet** — 42 School
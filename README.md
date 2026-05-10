## CPP Module 01
 
> **Memory allocation, pointers to members, references and switch statements**
 
### Exercices
 
| Exercice | Nom | Description |
|----------|-----|-------------|
| ex00 | **BraiiiiiiinnnzzzZ** | Stack vs Heap avec une classe Zombie |
| ex01 | **Moar brainz!** | Allocation d'un tableau de zombies |
| ex02 | **HI THIS IS BRAIN** | Pointeurs vs références |
| ex03 | **Unnecessary violence** | Références et pointeurs sur objets |
| ex04 | **Sed is for losers** | Manipulation de fichiers avec fstream |
| ex05 | **Harl 2.0** | Pointeurs sur fonctions membres |
| ex06 | **Harl filter** | Switch statement avec fallthrough |
 
### Concepts appris
 
- **`new` / `delete`** : allocation dynamique en C++
- **`new[]` / `delete[]`** : allocation de tableaux
- **Stack vs Heap** : quand utiliser l'un ou l'autre
- **Références** (`&`) : alternative sûre aux pointeurs
- **Pointeurs sur fonctions membres** : `void (Class::*ptr)(void)`
- **`std::fstream`** : lecture/écriture de fichiers
- **`switch` avec fallthrough** : sans `break` entre les cases
- **Liste d'initialisation** dans les constructeurs
### ex00 — BraiiiiiiinnnzzzZ
 
```bash
./zombie
# Foo: BraiiiiiiinnnzzzZ...
# Foo destroyed
```
 
- `newZombie()` → alloue sur le **heap** (`new`) → survit hors de la fonction
- `randomChump()` → alloue sur la **stack** → détruit automatiquement
### ex01 — Moar brainz!
 
```cpp
Zombie *horde = zombieHorde(5, "test");
// Alloue 5 zombies en une seule allocation
delete[] horde;
```
 
### ex02 — HI THIS IS BRAIN
 
```
adress variable : 0x7ffd...
adress pointer  : 0x7ffd...   // même adresse
adress reference: 0x7ffd...   // même adresse
 
value variable : HI THIS IS BRAIN
value pointer  : HI THIS IS BRAIN
value reference: HI THIS IS BRAIN
```
 
### ex03 — Unnecessary violence
 
```cpp
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);   // référence : toujours armé
bob.attack();
// Bob attacks with their crude spiked club
 
HumanB jim("Jim");         // pointeur : peut être sans arme
jim.setWeapon(club);
jim.attack();
// Jim attacks with their crude spiked club
```
 
### ex04 — Sed is for losers
 
```bash
./sed_is_for_losers fichier.txt "hello" "world"
# Crée fichier.txt.replace avec toutes les occurrences de "hello" remplacées par "world"
```
 
### ex05 — Harl 2.0
 
```bash
./harl
# 1: DEBUG  | 2: ERROR  | 3: INFO  | 4: WARNING
1
# I love having extra bacon...
```
 
Utilise des **pointeurs sur fonctions membres** sans if/else :
```cpp
void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
```
 
### ex06 — Harl filter
 
```bash
./harlFilter "WARNING"
# [ WARNING ]
# I think I deserve to have some extra bacon for free...
#
# [ ERROR ]
# This is unacceptable! I want to speak to the manager now.
```
 
---
 
## Règles générales
 
| Règle | Détail |
|-------|--------|
| ❌ Interdit | `printf()`, `malloc()`, `free()` |
| ❌ Interdit | `using namespace std` |
| ❌ Interdit | `friend` keyword |
| ❌ Interdit | STL avant module 08 |
| ❌ Interdit | `#pragma once` |
| ✅ Obligatoire | Include guards dans chaque header |
| ✅ Obligatoire | Un `.hpp` et `.cpp` par classe |
| ✅ Obligatoire | Noms de classes en UpperCamelCase |
 
---
 
## Compilation
 
```bash
# Compiler un module
cd CPP00/ex01
make
 
# Nettoyer les objets
make clean
 
# Tout recompiler
make re
```
 
Flags utilisés :
```
c++ -Wall -Wextra -Werror -std=c++98
```
 
---
 
*42 School — memillet*
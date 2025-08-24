# Optimus-Prime vs Megatron

**Epic C++ showdown simulation** of two legendary Transformers rivals: Optimus Prime and Megatron. This project models their characteristics, weapons, and battle logic in a structured, object-oriented C++ program.

---

##  Table of Contents
- [About](#about)  
- [Project Structure](#project-structure)  
- [Building & Running](#building--running)  
- [Usage Example](#usage-example)  
- [Design & Architecture](#design--architecture)  


---

## About
This program simulates a battle between Optimus Prime and Megatron using C++ classes and logic. 
---

## Project Structure

1. # main.cpp : 
 Entry point – runs the battle simulation
2. # characters.h :
 Character class declarations  and Robot class declaration
3. # characters.cpp : 
Character class implementations
4. # robots.cpp :
Robot-specific logic 
5. # weapon.h :
 Weapon class declaration
6. # weapon.cpp :
 Weapon class implementation
7. # README.md : 
Project documentation


## Building & Running:
To run the source file:
`` bash 
g++ main.cpp characters.cpp Robots.cpp Weopon.cpp -o main
./main
`` bash

## Usage Example: 
```
Welcome to the battle between Optimus Prime and Megatron!
Each robot has 3 weopons to choose from:
Optimus Primes Weopons:
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
-----------------------------------------------
Optimus Primes Weopons:
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
-----------------------------------------------
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3): 
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
3
Shot successful! Megatron takes 45 damage.
Megatron's turn.
Megatron's health: 55
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
2
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
3
Shot successful! Megatron takes 45 damage.
Megatron's turn.
Megatron's health: 55
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
2
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
Megatron's turn.
Megatron's health: 55
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
2
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
3
Shot missed!
Megatron's turn.
Megatron's health: 55
 Choose a weopon (1-3): 
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
3
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3): 
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
1
Shot successful! Megatron takes 6 damage.
Megatron's turn.
Megatron's health: 49
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
2
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
3
Shot missed!
Megatron's turn.
Megatron's health: 49
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
3
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
3
Shot missed!
Megatron's turn.
Megatron's health: 49
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
2
Shot missed!
Optimus Prime's turn.
Optimus Prime's health: 100
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
1
Shot successful! Megatron takes 6 damage.
Megatron's turn.
Megatron's health: 43
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
3
Shot successful! Optimus Prime takes 18 damage.
Optimus Prime's turn.
Optimus Prime's health: 82
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
2
Shot successful! Megatron takes 12 damage.
Megatron's turn.
Megatron's health: 31
 Choose a weopon (1-3):
Megatron's Weopons:
1. Fusion cannon (Damage: 9, Accuracy: 90%)
2. Tank Mode (Damage: 60, Accuracy: 15%)
3. Fusion Sword (Damage: 18, Accuracy: 70%)
1
Shot successful! Optimus Prime takes 9 damage.
Optimus Prime's turn.
Optimus Prime's health: 73
 Choose a weopon (1-3):
Optimus Prime's Weopons:
1. Ion rifl (Damage: 6, Accuracy: 100%)
2. Energon swords (Damage: 12, Accuracy: 80%)
3. Shoulder canon (Damage: 45, Accuracy: 25%)
3
Shot successful! Megatron takes 45 damage.
Megatron has been defeated!
Optimus Prime wins the battle!

```


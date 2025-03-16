# Showdown-GUI-
SHOWDOWN GUI based Semester project where using C++ and Data structures Concept i have created this basic GUI 

# Showdown Scheduler GUI
# Project Overview
The Showdown Scheduler GUI is an interactive application developed in C++, utilizing Object-Oriented Programming (OOP) principles and various Data Structures to efficiently manage and simulate a showdown-style tournament. The project implements a 16-team elimination format, where teams are randomly paired against each other, and winners progress through successive rounds until a final showdown determines the top two teams.

The core functionality of this project is designed to automate the scheduling and execution of matches through randomized team pairings and match outcomes, ensuring unpredictability and fairness in the competition. The GUI interface allows users to visualize matchups, track progress, and view results in a structured manner.

# Project Features
1. Tournament Structure
Round of 16 → 8 Winners Advance
Quarterfinals (Round of 8) → 4 Winners Advance
Semifinals (Round of 4) → 2 Winners Advance
Final Showdown (2 Teams) → Random Selection of Two Winners
Each round follows a knockout format, ensuring that only the winning teams proceed further in the competition.

# 2. Implementation of Randomization
Random Pairing: Teams are assigned to matches using the rand() function, ensuring unique and fair matchups in each round.
Random Match Outcomes: The winners of each match are selected randomly, making every showdown unpredictable.
Final Round Special Rule: Instead of selecting a single winner in the final round, two teams are chosen as winners, highlighting the theme of a "Showdown" where two competitors emerge victorious.

# 3. Object-Oriented Programming (OOP) Principles Used
# Class-Based Design : 
Teams, Matches, and Tournament are implemented as separate classes, ensuring modularity and reusability.
# Encapsulation: 
Data members (such as team names, match results) are kept private and accessed through getter and setter functions.
# Inheritance & Polymorphism: 
A base Match class can be extended for different types of matches if needed, with overridden functions for flexibility.
# Dynamic Memory Allocation: 
Utilized to handle dynamic team storage, match tracking, and result updates efficiently.

# 4. Data Structures Utilized
# Arrays/Vectors: 
Store team information and match pairings.
# Queues: 
Used for managing progression in knockout rounds.
# Linked Lists: 
Track match history dynamically.
# Stacks:
Could be used for undo/redo operations if a match needs to be re-simulated.

# 5. Graphical User Interface (GUI) Features
Visual Representation of Matches: A structured bracket system showing which teams are competing.
Live Match Updates: Display of ongoing matches and results as they are decided.
Interactive Controls: Users can initiate match rounds, view team progress, and reset the tournament.

# ScreenShots
![Screenshot 2025-03-17 002618](https://github.com/user-attachments/assets/8cd58242-55a2-486d-a69c-99f93e27f053)
![Screenshot 2025-03-17 002649](https://github.com/user-attachments/assets/a17e0681-dec0-49d9-8d51-3d35a07b60ed)
![Screenshot 2025-03-17 002633](https://github.com/user-attachments/assets/bf4e4662-2ea5-4279-b009-db93d1707ea2)

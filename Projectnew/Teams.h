#pragma once

#include <string>
using namespace std;

// Team Class
class Team {
private:
    string name;
    string members; // Members as a single string (e.g., "Alice, Rabia")
    int rank;

public:
    Team();
    Team(string name, string members, int rank);
    string getName() const;
    string getMembers() const;
    int getRank() const;
};

// Node Class for Linked List
class Node {
public:
    Team team;
    Node* next;

    Node(const Team& team) : team(team), next(nullptr) {}
};

// TeamManager Class using Linked List
class TeamManager {
private:
    Node* head;
    Node* tail;
    int teamCount;

public:
    TeamManager();
    ~TeamManager();

    bool loadFromFile(const string& fileName);
    int getTeamCount() const;
    const Team* getTeam(int index) const; // Return pointer to avoid copying
};

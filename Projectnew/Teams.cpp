#include "Teams.h"
#include <fstream>
#include <sstream>

// Team Class Implementation
Team::Team() : name(""), members(""), rank(0) {}

Team::Team(string name, string members, int rank)
    : name(name), members(members), rank(rank) {}

string Team::getName() const {
    return name;
}

string Team::getMembers() const {
    return members;
}

int Team::getRank() const {
    return rank;
}

// TeamManager Class Implementation
TeamManager::TeamManager() : head(nullptr), tail(nullptr), teamCount(0) {}

TeamManager::~TeamManager() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

bool TeamManager::loadFromFile(const string& fileName) {
    ifstream file(fileName);
    if (!file.is_open()) {
        return false; // File failed to open
    }

    string line;
    teamCount = 0;

    while (getline(file, line)) {
        if (teamCount >= 16) {
            break; // Limit to 16 teams
        }

        size_t firstDelimiter = line.find('|');
        size_t secondDelimiter = line.find('|', firstDelimiter + 1);

        if (firstDelimiter == string::npos || secondDelimiter == string::npos) {
            continue; // Skip malformed lines
        }

        string name = line.substr(0, firstDelimiter);
        string members = line.substr(firstDelimiter + 1, secondDelimiter - firstDelimiter - 1);
        int rank = stoi(line.substr(secondDelimiter + 1));

        Node* newNode = new Node(Team(name, members, rank));
        if (!head) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }

        teamCount++;
    }

    file.close();
    return true;
}

int TeamManager::getTeamCount() const {
    return teamCount;
}

const Team* TeamManager::getTeam(int index) const {
    Node* current = head;
    int counter = 0;
    while (current) {
        if (counter == index) {
            return &current->team;
        }
        current = current->next;
        counter++;
    }
    return nullptr; // Invalid index
}

#include "Schedule.h"
#include "Match.h"
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

Schedule::Schedule() : matchCount(0), front(-1), rear(-1) {
    srand(time(0)); // Seed for random results
}

void Schedule::readTeamsFromFile(const string& filePath, string groupA[], string groupB[], int& groupSize) {
    ifstream file(filePath);
    if (!file.is_open()) throw runtime_error("Unable to open file.");

    string line;
    int count = 0;

    while (getline(file, line) && count < 16) {
        size_t delimiterPos = line.find('|');
        if (delimiterPos != string::npos) {
            string teamName = line.substr(0, delimiterPos);
            teamName.erase(teamName.find_last_not_of(" \t") + 1);

            if (count < 8) groupA[count] = teamName;
            else groupB[count - 8] = teamName;

            count++;
        }
    }

    groupSize = 8;
    file.close();
}

void Schedule::generateMatches(string groupA[], int sizeA, string groupB[], int sizeB) {
    matchCount = 0;
    for (int i = 0; i < sizeA && i < sizeB; i++) {
        matches[matchCount] = { matchCount + 1, groupA[i], groupB[i], "12:00 PM", "01/01/2024" };
        matchCount++;
    }
}

Match* Schedule::getMatches(int& count) {
    count = matchCount;
    return matches;
}

void Schedule::simulateResults() {
    for (int i = 0; i < matchCount; i++) {
        string winner = rand() % 2 == 0 ? matches[i].teamA : matches[i].teamB;
        matches[i].updateResult(winner);
        enqueue(winner);
    }
}

void Schedule::simulateRound2Matches(string winners[], int winnerCount, Match round2Matches[], int& round2MatchCount) {
    round2MatchCount = 0;
    for (int i = 0; i < winnerCount / 2; i++) {
        round2Matches[i] = { round2MatchCount + 1, winners[i * 2], winners[i * 2 + 1], "02:00 PM", "01/02/2024" };
        round2MatchCount++;
    }
}

void Schedule::readWinnersFromFile(const string& filePath, string winners[], int& winnerCount) {
    // Open the file for reading
    ifstream file(filePath);
    if (!file.is_open()) throw runtime_error("Unable to open results file.");

    winnerCount = 0; // Initialize winner count
    string line;
    // Read each line from the file and store in the winners array
    while (getline(file, line)) {
        winners[winnerCount++] = line;
    }
    file.close(); // Close the file after reading
}

void Schedule::enqueue(const string& winner) {
    // Check for queue overflow condition
    if ((rear + 1) % 16 == front) throw runtime_error("Queue overflow.");
    if (front == -1) front = 0; // Initialize front if queue was empty
    rear = (rear + 1) % 16; // Move rear pointer to the next position
    queue[rear] = winner; // Add the winner to the queue
}

string Schedule::dequeue() {
    // Check if the queue is empty
    if (isQueueEmpty()) throw runtime_error("Queue underflow.");
    string winner = queue[front]; // Retrieve the winner at the front of the queue

    // Reset or move the front pointer
    if (front == rear) {
        front = -1; // Queue is now empty
        rear = -1;
    }
    else {
        front = (front + 1) % 16; // Move front pointer to the next position
    }
    return winner; // Return the dequeued winner
}

bool Schedule::isQueueEmpty() {
    // Return true if the queue is empty, otherwise false
    return front == -1;
}

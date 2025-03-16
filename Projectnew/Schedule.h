#pragma once
#include <string>
#include "Match.h"

using namespace std;

class Schedule {
private:
    Match matches[16];   // Array to store matches for both rounds
    int matchCount;      // Match count for the current round
    string queue[16];    // Manual queue for winners
    int front, rear;     // Indices for the queue

public:
    Schedule();
    void readTeamsFromFile(const string& filePath, string groupA[], string groupB[], int& groupSize);
    void generateMatches(string groupA[], int sizeA, string groupB[], int sizeB);
    Match* getMatches(int& count);
    void simulateResults();
    void simulateRound2Matches(string winners[], int winnerCount, Match round2Matches[], int& round2MatchCount);
    void readWinnersFromFile(const string& filePath, string winners[], int& winnerCount);

    void enqueue(const string& winner);
    string dequeue();
    bool isQueueEmpty();
};

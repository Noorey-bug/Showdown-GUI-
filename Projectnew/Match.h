#pragma once
#include <string>

using namespace std;

class Match {
public:
    int matchNo;      // Match number
    string teamA;     // Name of Team A
    string teamB;     // Name of Team B
    string time;      // Match time
    string date;      // Match date
    string status;    // Match status ("Pending", "Completed", etc.)
    string result;    // Match result (winning team)

    Match()
        : matchNo(0), teamA(""), teamB(""), time(""), date(""), status("Scheduled"), result("Pending") {}

    Match(int matchNo, string teamA, string teamB, string time, string date)
        : matchNo(matchNo), teamA(teamA), teamB(teamB), time(time), date(date), status("Scheduled"), result("Pending") {}

    void updateResult(string winningTeam) {
        result = winningTeam;
        status = "Completed";
    }
};

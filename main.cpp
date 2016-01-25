#include <iostream>
#include <string>

#include "TeamStats.h"

using namespace std;

int main() {

    TeamStats *ts = new TeamStats("My team", 5, 1.0, 3, 4, 1.5, 5.1, 6.2, 2, 10, 7, 12, 11, 33, 100, 56, "Top", 5, 11, 11);

    ts->toString();

    delete ts;

    return 0;
}
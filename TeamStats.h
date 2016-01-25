//
// Created by Jonathan Cahal on 1/22/16.
//

#ifndef PROJECTONE_TEAMSTATS_H
#define PROJECTONE_TEAMSTATS_H

#include <string>

using namespace std;

class TeamStats {
private:
    string team_name; // Name of NFL team
    int games; // Number of games played in the season
    float pts_per_game; // Points per game
    int total_points; // Total points
    int scrimmage_plays; // Scrimmage plays
    float yds_per_game; // Yards per game
    float yds_per_play; // Yards per play
    float first_per_game; // First downs per game
    int third_md; // Third down conversions
    int third_att; // Third down attempts
    int third_pct; // Third down percentage
    int fourth_md; // Fourth down conversions
    int fourth_att; // Fourth down attempts
    int fourth_pct; // Fourth down percentage
    int penalties; // Number of penalties
    int pen_yds; // Penalty yards
    string top_per_game; // Time of possession per game
    int fum; // Number of fumbles
    int lost; // Fumbles lost
    int to; // Turnover ratio

public:
    TeamStats(); //Default constructor

    //Parametrized constructor
    TeamStats(string team_name, int games, float pts_per_game, int total_points, int scrimmage_plays,
              float yds_per_game, float yds_per_play, float first_per_game, int third_md, int third_att,
              int third_pct, int fourth_md, int fourth_att, int fourth_pct, int penalties, int pen_yds,
              string top_per_game, int fum, int lost, int to);

    ~TeamStats(); //Destructor

    void setTeamStat(string team_name, int games, float pts_per_game, int total_points, int scrimmage_plays,
                     float yds_per_game, float yds_per_play, float first_per_game, int third_md, int third_att,
                     int third_pct, int fourth_md, int fourth_att, int fourth_pct, int penalties, int pen_yds,
                     string top_per_game, int fum, int lost, int to);

    //For printing to screen
    void toString();

    /*
    string getTeamName();
    int getGames();
    float getPointsPerGame();
    int getTotalPoints();

    //need prototypes for the rest of these
    int scrimmage_plays; // Scrimmage plays
    float yds_per_game; // Yards per game
    float yds_per_play; // Yards per play
    float first_per_game; // First downs per game
    int third_md; // Third down conversions
    int third_att; // Third down attempts
    int third_pct; // Third down percentage
    int fourth_md; // Fourth down conversions
    int fourth_att; // Fourth down attempts
    int fourth_pct; // Fourth down percentage
    int penalties; // Number of penalties
    int pen_yds; // Penalty yards
    string top_per_game; // Time of possession per game
    int fum; // Number of fumbles
    int lost; // Fumbles lost
    int to; // Turnover ratio
    */

    //Insertion Operator
    // - will require the implementation of get methods for all the attributes above.
    //friend ostream& operator << (ostream& out, const TeamStats& teamStats);
};


#endif //PROJECTONE_TEAMSTATS_H

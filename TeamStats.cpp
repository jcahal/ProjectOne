//
// Created by Jonathan Cahal on 1/22/16.
//

#include <iostream>
#include <string>
#include "TeamStats.h"

//Default Constructor
TeamStats::TeamStats() {
    TeamStats::setTeamStat("Foo" , 0, 0.0, 0, 0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, "Bar", 0, 0, 0);
}

//Parametrized Constructor
TeamStats::TeamStats(string team_name, int games, float pts_per_game, int total_points, int scrimmage_plays,
                     float yds_per_game, float yds_per_play, float first_per_game, int third_md, int third_att,
                     int third_pct, int fourth_md, int fourth_att, int fourth_pct, int penalties, int pen_yds,
                     string top_per_game, int fum, int lost, int to) {

    TeamStats::setTeamStat(team_name, games, pts_per_game, total_points, scrimmage_plays,
                yds_per_game, yds_per_play, first_per_game, third_md, third_att,
                third_pct, fourth_md, fourth_att, fourth_pct, penalties, pen_yds,
                top_per_game, fum, lost, to);

}

//Destructor
TeamStats::~TeamStats() {

    cout << "Team Stat destroyed" << endl;

}


//Set Team Stats
void TeamStats::setTeamStat(string team_name, int games, float pts_per_game, int total_points, int scrimmage_plays,
                            float yds_per_game, float yds_per_play, float first_per_game, int third_md, int third_att,
                            int third_pct, int fourth_md, int fourth_att, int fourth_pct, int penalties, int pen_yds,
                            string top_per_game, int fum, int lost, int to) {

    this->team_name = team_name; // Name of NFL team
    this->games = games; // Number of games played in the season
    this->pts_per_game = pts_per_game; // Points per game
    this->total_points = total_points; // Total points
    this->scrimmage_plays = scrimmage_plays; // Scrimmage plays
    this->yds_per_game = yds_per_game; // Yards per game
    this->yds_per_play = yds_per_play; // Yards per play
    this->first_per_game = first_per_game; // First downs per game
    this->third_md = third_md; // Third down conversions
    this->third_att = third_att; // Third down attempts
    this->third_pct = third_pct; // Third down percentage
    this->fourth_md = fourth_md; // Fourth down conversions
    this->fourth_att = fourth_att; // Fourth down attempts
    this->fourth_pct = fourth_pct; // Fourth down percentage
    this->penalties = penalties; // Number of penalties
    this->pen_yds = pen_yds; // Penalty yards
    this->top_per_game = top_per_game; // Time of possession per game
    this->fum = fum; // Number of fumbles
    this->lost = lost; // Fumbles lost
    this->to = to; // Turnover ratio
}

void TeamStats::toString() {
    cout << this->team_name << endl;
}

/*
ostream &operator << (ostream &out, TeamStats &teamStats) {

    return out << teamStats.team_name << teamStats.games << teamStats.pts_per_game << teamStats.total_points
    << teamStats.scrimmage_plays << teamStats.yds_per_game << teamStats.yds_per_play
    << teamStats.first_per_game << teamStats.third_md << teamStats.third_att << teamStats.third_pct
    << teamStats.fourth_md << teamStats.fourth_att << teamStats.fourth_pct << teamStats.penalties
    << teamStats.pen_yds << teamStats.top_per_game << teamStats.fum << teamStats.lost << teamStats.to;

}
*/
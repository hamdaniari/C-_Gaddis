// This program calculates the number of soccer teams
// that a youth league may create from the number of
// available players. Input validation is demonstrated
// with while loops.

#include <iostream>
using namespace  std;

int main()
{
  //constant for minimum and maximum players
  const int MIN_PLAYERS = 9,
            MAX_PLAYERS = 15;
  //Variables
  int players,    //number of available players
      teamPlayers,//number of desired players per team
      numTeams,   //number of numTeams
      leftOver;   //number of players left leftOver

  //get the number of players per team.
  cout << "How many players do you wish per team? ";
  cin >> teamPlayers;

  //validate the Input
  while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
  {
    //Explain the error
    cout << "You should have at least " << MIN_PLAYERS << " but no more than "
         << MAX_PLAYERS << " per team.\n";

    //Get the input again
    cout << "How many players do you wish per team? ";
    cin >> teamPlayers;
  }

  //Get the number of player available.
  cout << "How many players are available? ";
  cin >> players;

  //validate the input.
  while (players <= 0)
  {
    //get the input again
    cout << "Please enter 0 or greater: ";
    cin >> players;
  }

  //calculate the number of numTeams
  numTeams = players / teamPlayers;

  //calculate the number of leftover players.
  leftOver = players % teamPlayers;

  //display the results.
  cout << "There will be " << numTeams << " teams with " << leftOver
       << " players left over.\n";
  return 0;
}

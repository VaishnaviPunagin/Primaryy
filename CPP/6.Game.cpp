#include<iostream>
using namespace std;

class Game{
  int score, winnerId;
public:
  void readGameDetails();
  Game getFinalScore(Game, Game);
  void display();
};

void Game::readGameDetails()
{
  cout<<"Enter game score and Winning team id please ::  ";
  cin>>score>>winnerId;
}

void Game::display()
{
  cout<<"Winner Team!\nTotal Score :: "<<score<<"\nTeam Id :: "<<winnerId<<"\n\n";
}

Game getFinalScore(Game one, Game two)
{
  return one.score>two.score? one : two;
}


int main()
{
  Game game1,game2,game3;
  cout<<"Game 1 ::  \n";
  game1.readGameDetails();
  cout<<"Game 2 ::  \n";
  game2.readGameDetails();
  cout<<"Final scores and result of Game 3 based on entered Game1 and Game 2 data is : ";
  game3.getFinalScore(game1,game2);
  game3.display();
  return 0;
}

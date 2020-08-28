#include<iostream>
using namespace std;

class Game{
  int score;
  char winnerId;
public:
  void readGameDetails();
  void getFinalScore(Game, Game);
  void display();
};

void Game::readGameDetails()
{
  cout<<"Enter game score and Winning team id please ::  ";
  cin>>score>>winnerId;
}

void Game::display()
{
  cout<<"\nWinner Team!\nTotal Score :: "<<score<<"\nTeam Id :: "<<winnerId<<"\n\n";
}

void Game::getFinalScore(Game one, Game two)
{
  //cout<<one.score<<" and "<<two.score<<"\n";
  if(one.score>two.score)
  {
      score=one.score;
      winnerId=one.winnerId;
  }
  else
  {
      score=two.score;
      winnerId=two.winnerId;
  }
}


int main()
{
  Game game1,game2,game3;
  cout<<"Game 1 ::  \n";
  game1.readGameDetails();
  //game1.display();
  cout<<"Game 2 ::  \n";
  game2.readGameDetails();
  cout<<"\n\nFinal scores and result of Game 3 based on entered Game1 and Game 2 data is : ";
  game3.getFinalScore(game1,game2);
  game3.display();
  return 0;
}

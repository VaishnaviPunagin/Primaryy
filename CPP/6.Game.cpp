#include<iostream>
using namespace std;

class Game{
  int score;
  char winnerId;
public:
  void readGameDetails();
  Game getFinalScore(Game, Game);
  void display();
  Game(Game &game){
    score=game.score;
    winnnerId=game.winnerId;
  }
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

Game Game::getFinalScore(Game one, Game two)
{
  cout<<one.score<<" and "<<two.score<<"\n";
  if(one.score>two.score)
    Game temp(one);
  else
    Game temp(two);
  temp.display();
  return temp;
}


int main()
{
  Game game1,game2,game3;
  cout<<"Game 1 ::  \n";
  game1.readGameDetails();
  game1.display();
  cout<<"Game 2 ::  \n";
  game2.readGameDetails();
  cout<<"Final scores and result of Game 3 based on entered Game1 and Game 2 data is : ";
  game3.getFinalScore(game1,game2);
  game3.display();
  return 0;
}

#include<iostream>
using namespace std;

class student{
  string name,usn;
  static int count;
public:
  student(){
    count++;
  }
  student(string n, string number)
  {
    name = n;
    usn = number;
    count++;
  }
  student(string n)
  {
    name = n;
    count++;
  }
  static void howMany(void)
  {
    cout<<"Number of students : "<<count<<"."<<endl;
  }
  void display()
  {
    cout<<"Name : "<<name<<endl<<"USN : "<<usn<<endl<<"--------------"<<endl;
  }
};

int student::count;

int main()
{
  student a("Percy Jackson","Cabin3"),b("Annabeth Chase","Cabin6"),c("Katniss Everdeen","District13"),d("Harry Potter","Gryffindor"),h("Four - Tobias Eaton");
  student Divergent, TheMortalInstruments, TheNightCircus;
  student who("WhoAreYou");
  cout<<"All the data that has been entered :"<<endl<<"a-Percy Jackson,Cabin3     b-Annabeth Chase,Cabin6     c-Katniss Everdeen,District13     d-Harry Potter,Gryffindor     h-Four-Tobias Eaton      Divergent       TheMortalInstruments      TheNightCircus        who-WhoAreYou "<<endl<<endl;
  student::howMany();
  return 0;
}

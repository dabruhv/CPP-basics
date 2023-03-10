#include <iostream>
using namespace std;

//class definition///////////////////////////////////////////////
class goomba{

  private: //can only be seen by class members
  //class variables (are often private)
  bool isAlive;
  int xPos;
  int yPos;
  char color;
  string name;

  public: //can be seen by everything
  //class functions (are often public)

  //constructors initalize your class objects
  goomba(); //default constructor
  goomba(int x, int y, string n); //parameratized constructor
  goomba(string f, int x);

  //other functions
  void printInfo();
  void die();
  void walk();
};
class koopa{

  private:
  bool isAlive;
  int xPos;
  int yPos;
  char color;
  string name;

  public:

  koopa();
  koopa(int x, int y, string g);
  koopa(int y, string l);

  void printInfo();
  void shell();
  void walk();
};

////////////////////////////////////////////////////////////////


int main() {//*****************************************
  
  //instantiate (stamp) objects from the class template
  goomba g1; //initalized with default constructor
  goomba g2(20, 100, "Bruh"); //initalized with second constructor
  goomba g3("Fred", 30);
  koopa k1;
  koopa k2(450, 40, "Lamar");
  koopa k3(150, "Franklin");

  cout<<"----------printing goomba/koopa information:-----------"<<endl;
  g1.printInfo(); //the period is a "dot operator", and it tells you which goomba you're printing
  g2.printInfo();
  g3.printInfo();
  k1.printInfo();
  k2.printInfo();
  k3.printInfo();

  cout<<"-------------changing goomba/koopa variables.------------"<<endl;
  g1.die();
  g2.walk();
  g3.die();
  k1.shell();
  k2.walk();
  k3.shell();
  cout<<"--------printing goomba/koopa information again:----------"<<endl;
  g1.printInfo();
  g2.printInfo();
  g3.printInfo();
  k1.printInfo();
  k2.printInfo();
  k3.printInfo();
}//end main************************************************

//class function definitions
goomba::goomba(){
  isAlive = true;
  xPos = 100;
  yPos = 100;
  color = 'b';
  name = "BOB";
}
goomba::goomba(int x, int y, string n){
  isAlive = true;
  xPos = x;
  yPos = y;
  color = 'b';
  name = "Bruh";
}
goomba::goomba(string f, int x){
  isAlive = true;
  xPos = x;
  yPos = 300;
  color = 'b';
  name = "Fred";
}
koopa::koopa(){
  isAlive = true;
  xPos = 100;
  yPos = 100;
  color = 'b';
  name = "BOBBY";
}
koopa::koopa(int x, int y, string g){
  isAlive = true;
  xPos = x;
  yPos = y;
  color = 'b';
  name = "Lamar";
}
koopa::koopa(int y, string l){
  isAlive = true;
  xPos = 100;
  yPos = y;
  color = 'b';
  name = "Franklin";
}

void goomba::printInfo(){ //the :: is a "scope resolution operator, and it tells you what class this function belongs to"
  cout<<endl<<"hello my name is "<<name<<"."<<endl;
  if(isAlive == true)
    cout<<"I am alive, and my position is "<<xPos<<" , "<<yPos<<endl;
  else 
    cout<<"I am dead"<<endl;

  cout<<endl;
}

  void goomba::die(){ isAlive = false;}
  void goomba::walk(){ xPos++; }
void koopa::printInfo(){ //the :: is a "scope resolution operator, and it tells you what class this function belongs to"
  cout<<endl<<"hello my name is "<<name<<"."<<endl;
  if(isAlive == true)
    cout<<"I am alive, and my position is "<<xPos<<" , "<<yPos<<endl;
  else 
    cout<<"I am in my shell"<<endl;

  cout<<endl;
}

  void koopa::shell(){ isAlive = false;}
  void koopa::walk(){ xPos+=5; }

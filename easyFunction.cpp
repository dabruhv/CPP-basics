#include <iostream>
#include <ctime>
using namespace std;

void monster(); //declaration


int main() {
  srand(time(NULL));//creates the RNG
  char input;
  while(1){//game loop
    monster();//call
    cin>>input;
  }
}

  
void monster(){//definition
     int roll = rand() % 100 + 1;
      if(roll < 20)//20%
       cout<<"a spider spawned"<<endl;
     else if(roll >= 20 && roll < 50)//30%
       cout<<"a creeper spawned"<<endl;
     else if (roll >=50 && roll <90 )//40%
       cout<<"a skeleton spawned"<<endl;
     else if (roll >= 90 && roll <= 100)//10%
        cout<<"a witch spawned"<<endl;
    
  
}

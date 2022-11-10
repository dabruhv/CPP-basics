#include <iostream>
#include <ctime>
using namespace std;
int main() {
  srand(time(NULL));//creates the RNG
  char input;
  int roll;
  do{
    roll = rand() % 100 + 1;
    if(roll < 20)//20%
      cout<<"a spider spawned"<<endl;
    else if(roll >= 20 && roll < 50)//30%
      cout<<"a creeper spawned"<<endl;
    else if (roll >=50 && roll <90 )//40%
      cout<<"a skeleton spawned"<<endl;
    else if (roll >= 90 && roll <= 100)//10%
        cout<<"a witch spawned"<<endl;

    cout<<"press q to quit, any key to continue"<<endl;
    cin>>input;    
  }while(input !='q');
}

#include <iostream>
using namespace std;
int main() {
  char n1,n2,n3,n4,n5;
  int room = 1;
  char input;
  cout << "enter name"<<endl;
  cin>>n1;
  cin>>n2;
  cin>>n3;
  cin>>n4;
  cin>>n5;
  cout<<"you are cursed "<<n1<<n2<<n3<<n4<<n5<<endl;
  cout<<"you must repent your sins and go on a quest "<<n1<<n2<<n3<<n4<<n5<<endl;
  cout<<"Bring me the relics to free yourself of this curse"<<endl;
  cout<<"If you fail the quest you will be trapped in a corrupt form of your world"<<endl;
  cout<<"However if you can find these items "<<n1<<n2<<n3<<n4<<n5<<" you will be granted power and riches beyond imagination"<<endl;

  while(input !='q'){
    switch(room){
      case 1: //start
        cout<<"you're in the cafeteria. you can go (e)ast or (w)est"<<endl;
        cin>>input;
        if (input == 'e')
          room = 3;
        else if(input == 'w')
          room = 2;
        else 
          cout<<"bruh"<<endl;
        break;
      case 2: //weapons
        cout<<"you're in the weapons room. you can go (e)ast or (s)outh"<<endl;
        cin>>input;
        if (input == 'e')
          room = 1;
        else if(input == 's')
          room = 4;
        else 
          cout<<"bruh"<<endl;
        break;
      case 3: //teleporter B
        cout<<"you're in teleporter room B. you can go (w)est or (s)outh"<<endl;
        cin>>input;
        if (input == 's')
          room = 5;
        else if(input == 'w')
          room = 1;
        else 
          cout<<"bruh"<<endl;
        break;
      case 4: //teleporter A
        cout<<"you're in teleporter room A. you can go (n)orth"<<endl;
        cin>>input;
        if(input == 'n')
          room = 2;
        else 
          cout<<"bruh"<<endl;
        break;
      case 5: //staff
        cout<<"you're in a room with a fire staff. you can go (n)orth"<<endl;
        cin>>input;
        if (input == 'n')
          room = 3;
        else 
          cout<<"bruh"<<endl;
        break;
    }
  }  
}

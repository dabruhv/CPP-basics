#include <iostream>
using namespace std;
int main() {
  int health;//ints hol numbers(no decimals)
  bool isChild;//bools hold a true or false value(0 or 1)
  char firstInitial;//chars hold letters and symbols
 char  secondInitial;
  double money;//doubles and floats hold decimals and big numbers

  cout<<"enter health"<<endl;
  cin>>health;//cin recieves inputs from the keyboard
  cout<<"enter 0 for child, 1 for adult"<<endl;
  cin>>isChild;
  cout<<"enter initials"<<endl;
  cin>>firstInitial;
  cin>>secondInitial;
  cout<<"enter money"<<endl;
  cin>>money;
 //to print out variables contents,dont put the quotes
  cout<<"your initials are "<<firstInitial<<"  " <<secondInitial<<endl;
  cout<<"your health is "<<health<<" and your starting money is $"<<money<<endl;
}

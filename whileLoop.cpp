#include <iostream>
using namespace std;
int main() {
  char input;
  int c = 500;
  while(c != 0){
  cout<<"your balance is $"<<c<<endl;
  cout<<"a) buy stuff"<<endl;
  cout<<"b) buy more stuff"<<endl;
  cout<<"c) buy all stuff"<<endl;
  cout<<"d) work for stuff co."<<endl;
  cout<<"e) work overtime at stuff co."<<endl;
  cin>>input;
 if(input == 'a'){
   cout<<"You bought stuff"<<endl;
   c-=50;}
  if(input == 'b'){
    cout<<"You bought more stuff"<<endl;
    c-=150;}
  if(input == 'c'){
    cout<<"You bought all stuff"<<endl;
    c-=500;}
  if(input == 'd'){
    cout<<"Good job, heres $150"<<endl;
    c+=150;}
  if(input == 'e'){
    cout<<"Good job, heres $500"<<endl;
    c+=500;}
  }
}

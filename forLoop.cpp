#include <iostream>
using namespace std;
int main() {
  char input;
  cout << "Choose!"<<endl;
  cout<<"a) op1 b) op2"<<endl;
  cout<<"c) op3 d)op4"<<endl;
  cin>>input;
  if(input == 'a')
   for(int a = 1;a<101;a++)
    cout<<a<<" "<<endl;
  if(input == 'b')
    for(int b = 100;b>=0;b--)
    cout<<b<<" "<<endl;
  if(input =='c')
    for(int c = 1;c<201;c++)
    cout<<"meep"<<endl;
  if(input == 'd')
    for(int d = 0;d<7;d++){
      for(int i = 0;i<4;i++)
        cout<<"*";
      cout<<endl;
    }
}

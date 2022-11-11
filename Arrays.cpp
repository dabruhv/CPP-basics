#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int scores[8];//declares a 8-slot int array, nothing in it yet
  cout<<"enter your best 8 scores"<<endl;
  //get input into array
  
  for(int j = 0; j<8; j++)
  cin>>scores[j];//arrays start at 0
  

  //use for loop to print array contents
  cout<<"here are your scores:"<<endl;
  for(int i = 0;i<8; i++)
    cout<<scores[i]<<endl;
  cout<<endl<<endl;

//function call
  sort(scores,scores + 8);//sort is a <algorithm> function

  cout<<"here are your scores in order:"<<endl;
  for(int i = 0;i<8; i++)
    cout<<scores[i]<<endl;
  cout<<endl<<endl;

  cout<<"your top score is "<<scores[7]<<endl;
}

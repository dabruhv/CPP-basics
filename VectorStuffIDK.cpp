#include <iostream>
#include <vector>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;


int main() {
  vector<string> names;
  vector<int> score;
  string input;
  int input2;
  vector<string>:: iterator iter;
  vector<int>:: iterator iter2;
  

  cout<<"Give me 10 names"<<endl<<endl;
  for(int i = 0;i<=10;i++){
    cin>>input;
    names.push_back(input);
  }
  

  cout<<"Give me 10 scores!"<<endl<<endl;
  for(int j = 0;j<=10;j++){
    cin>>input2;
    score.push_back(input2);
  }

  
  cout<<"sorted:"<<endl;
  sort(names.begin(), names.end());
  cout<<"    "<<endl<<endl;

cout<<"sorted:"<<endl;
  //printing the sorted STRING vector
  for(iter = names.begin(); iter != names.end(); ++iter)
    cout<<*iter<<endl;


  sort(score.begin(), score.end());
  cout<<"    "<<endl<<endl;
  for(iter2 = score.begin(); iter2 != score.end(); ++iter2)
    cout<<*iter2<<endl<<endl;

  cout<<"Shuffling begins under here--------------------------------"<<endl<<endl;

  random_shuffle(names.begin(), names.end());
  cout<<"    "<<endl<<endl;

  random_shuffle(score.begin(), score.end());
  cout<<"    "<<endl<<endl;
  
  cout<<"shuffled:"<<endl;
  for(iter = names.begin(); iter != names.end(); ++iter)
    cout<<*iter<<endl;
   for(iter2 = score.begin(); iter2 != score.end(); ++iter2)
    cout<<*iter2<<endl<<endl;
}

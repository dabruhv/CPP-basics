#include <iostream>
#include<vector>
#include<string>
#include "animal class.h"
#include "cat.h"
#include "dog.h"
#include "snake.h"
using namespace std;





//////////////////////////////////////////////////////////////
int main() {

  //instantiate a few animals
  cat c1;
  cat c2;
  dog d1("Gauss");
  dog d2("BB");
  snake s1("Bruv");
  snake s2("Scales");
  snake s3("Orochimaru");
  snake s4("Dababy");
//create a vector to store animals 
  vector<animal> petShop;
  vector<animal>::iterator iter; //iterators let you walk through vectors

//put the animals into the vector
  petShop.push_back(c1);
  petShop.push_back(d1);
  petShop.push_back(c2);
  petShop.push_back(d2);
  petShop.push_back(s1);
  petShop.push_back(s2);
  petShop.push_back(s3);
  petShop.push_back(s4);

//update and print info for each animal in the vector
  for(iter = petShop.begin(); iter != petShop.end(); ++iter){
    (*iter).update();
    (*iter).printInfo();
  }
/*remember, "*" is the dereference operator- it tells the functions to update/print what the iterator is pointing to, not the memory address of the iterator itself!*/

  cout<<"goodbye."<<endl;
}//end of main

////////////////////////////////////////////////////////////////

//default constuctor for cat


//default constructor for dog
dog::dog(){
  name = "dog";
  hunger = 0;
  boredom = 0;
  bathroom = 0; 
  size = rand()%3;
}

//paramaterized constructor for dog
dog::dog(string n){
  name = n;
  hunger = 0;
  boredom = 0;
  bathroom = 0; 
  size = rand()%3;
}

void animal::printInfo(){
  cout<<name<<" has boredom "<<boredom<<", and bathroom of "<<bathroom<<", and hunger level of "<<hunger<<". "<<endl;
}
void animal::update(){
  hunger+=rand()%10;
  boredom+=rand()%5;
  bathroom+=rand()%3;
}

void bark(int woofs){

  for (int i = 0;i<10;i++)
   woofs++;



}

snake::snake(string n){
  name = n;
  hunger = 0;
  boredom = 0;
  bathroom = 0; 
  fangs = false;
}

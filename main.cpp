 #include <cmath> 
#include <cstdlib>
#include <ctime>
#include "dice.h" 
#include <iostream>
using namespace std; 

int main(){
srand(time(0)); 

  Dice dice2; 
  Dice dice3(3); 
  Dice dice6(6); 

cout <<dice2.total() <<endl; 
cout <<dice3.total() <<endl;
cout <<dice6.total() <<endl;

cout <<dice2.str() << " " << dice2.total() <<endl; 
cout <<dice3.str() << " " << dice3.total() <<endl; 
cout <<dice6.str() << " " << dice6.total() <<endl; 

for (int i=0; i<6; i++){
  dice6.roll(i);
  cout << dice6.str() <<endl; 
}

return 0; 
}
#include "dice.h"
#include <cmath> 
#include <cstdlib>
#include <ctime>

using namespace std; 

Dice::Dice () {
  n_dice =2; 
  dice[0]= rand()%6 +1; 
  dice[1]= rand()%6 +1; 
}

Dice::Dice (int n){ 
  n_dice=n; 
  for( int i=0; i<n_dice; i++)
    dice[i]= rand()%6+1; 
}

int Dice::total() const{
  int sum=0; 
  for (int i=0; i<n_dice; i++){
    sum=sum+dice[i]; 
  }
  return sum; 
}

int Dice::count (int value) const{ 
  int cnt =0; 
   for(int i=0; i< n_dice; i++ ){
     if (dice[i]==value)
      cnt++; 
  }
  return cnt; 
} 

int Dice::die (int index) const{
  return dice[index]; 
}

void Dice::roll (){ 
  for (int i=0; i<n_dice; i++){
      dice[i]= rand()%6+1; 
  }
}

void Dice::roll(int index) {
  dice[index]= rand()%6 +1; 
}

string Dice:: str() const{ 
  int sum=0; 
  string s; 
  for (int i=0; i < n_dice ; i++){
   if (i>0)
    s = s + "-";
  s += to_string(dice[i]); } 
return s; 
}
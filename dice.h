#pragma once 

#include <string> 
using namespace std; 

class Dice{ 
private :  
  int dice[6]; 
  int n_dice; 

public :
  Dice (); 
  Dice(int n); 
  void roll(); 
  void roll(int index); 
  
  int total() const; 
  int die( int index) const;
  int count (int value) const; 
  string str () const; 

}; 
#include<bits/stdc++.h>
using namespace std;

int main(){
//--------bitset---------
  //int --> 16 bits
  //char --> 8 bits
  //bitset --> 1 bit
  bitset<5> bt;
  cin>>bt;

  // functions --> all any count flip none set reset size test
  cout<<bt.all(); // if all the bits are set(1)--> prints true
  cout<<bt.any(); //if any of the bit is set(1)--> prints true
  cout<<bt.count(); //prints the number of set bits
  bt.flip(2); //bt.flip(index)--> inverts the bit at the specified index
  cout<<bt.none(); //if none of the bits are set(1)--> prints true
  bt.set(); //sets every bit as 1 irrespective of the bit allocated
  bt.set(2); //sets bit as 1 at specified index
  bt.set(2,0); //sets 0 at specified index

  bt.reset(); //sets every bit as 0 irrespective of the bit allocated
  bt.reset(2); //sets bit as 0 at specified index

  cout<<bt.size(); //prints the size of the bitset

  cout<<bt.test(1); //checks if the bit is set or not at specified index --> returns boolean value







//--------bitset---------
  return 0;
}
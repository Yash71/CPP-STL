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

//-----algorithms------
  //-----sorting------

  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i!=n;i++){
    cin>>arr[i];
  }
  //takes nlogn time
  sort(arr,arr+n); //sorts the array in increasing order

  vector<int>vec(5,0);
  for(int i=0;i!=n;i++){
    cin>>vec[i];
  }
  sort(vec.begin(),vec.end()); //sorts the vector increasing order

  //---------------------------
  //vec-->{1,6,2,7,4}
  //sort it within the index range of 1 to 3
  //final vec -->{1,2,6,7,4}
  sort(vec.begin()+1,vec.begin()+4);
  //----------------------------

  //Reverse
  reverse(arr,arr+n);
  reverse(vec.begin(),vec.end());
  return 0;

  // maximum/minumum elements in any index range

    //basic working
    int i,j;
    int max=INT_MIN;
    for(int k=i;k<=j;k++){
      if(arr[k]>max){
        max=arr[k];
      }
    }
    //basic working

    int el_max=*max_element(arr,arr+n); //gives the max element
    int el_min=*min_element(arr,arr+n); //gives the minimum element

    int eli_max=*max_element(vec.begin(),vec.end());
    int eli_min=*min_element(vec.begin(),vec.end());
  
  //print the sum within the given range
    //basic implementation
      int sum=0;
      for(int k=i;k<=j;k++){
        sum+=arr[k];
      }
    //basic implementation

    //accumulate(start,end,<inital value of sum)
    int summ=accumulate(arr,arr+n,0);
    int su=accumulate(vec.begin(),vec.end(),0);

  //occurence of an element in the array
    //basic implementation
      int cont=0;
      int x; //element 
      for(int i=0;i!=n;i++){  //time complexity--> O(n)
        if(arr[i]==x){
          cont++;
        }
      }
      cout<<cont;
    //basic implementation

    //count(start,end,x) x--> element
    int cnt=count(arr,arr+n,1);
    int cn=count(vec.begin(),vec.end(),1);

  //first occurence of an element
    //basic implementation
      int in=-1;
      for(int i=0;i<n;i++){
        if(arr[i]==x){
          in=i;
          break;
        }
      }
      cout<<in;

      auto it=find(arr,arr+n,2); //returns an itterator pointing to the first instance of the element

      //"it" always returns the memory address of the element, to get the index of the element subtract begin() from it

      int ind= it-arr;

      auto itt=find(vec.begin(),vec.end(),2);
      int indx=itt-vec.begin();
      



}
#include<bits/stdc++.h>
using namespace std;

int main(){
// ordered set
  //given n elements, tell the number of unique elements
    array<int,6> arr={2,3,5,6,4,5}; //5 unique elements ->{2,3,4,5, 6}

    set<int> st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      st.insert(x); //time complexity of insert operation -> O  (logn);  n is size of set
    }
  //one cannot access the set elements by st[0] or st[1] but by using *st.begin() 
  //set stores the data in ascending order

  //st->{2,3,4,5,6}
    st.erase(st.begin()); // st->{3,4,5,6}
    st.erase(st.begin(),st.begin()+2); // st->{4,5,6}
    st.erase(5); // st.erase(key) st->{2,3,4,6}

  //declaration of set is very similar to vector
  set<int> st={1,2,3};

  auto it=st.find(2); // O(logn) returns the itterator of 7
  auto it=st.find(4); // it=st.end();

  st.emplace(4); //st.insert(4); //emplace is bit faster than insert

  st.erase(st.begin(),st.end()); //erase the entire set

  //to print the set
    for(auto it=st.begin();it!=st.end();it++){
      cout<<*it<<", ";
    }
      //---OR-----
    for(auto it: st){
      cout<<it<<", ";
    }

// ordered set

//unordered set
  unordered_set<int> st;
  st.insert(2);
  st.insert(3);
  st.insert(1);
  //all the functionalites are similar to ordered set
  //average time complexity is O(1)
//unordered set

//multiset
  multiset<int> ms;
  ms.insert(1);
  ms.insert(1);
  ms.insert(2);
  ms.insert(2);
  ms.insert(3);
  ms.insert(4);
  //ms->{1,1,2,2,3,4}
  
  ms.erase(2); // all the instances of 2 will be erased.
  ms.clear(); //deletes the entire set
  ms.erase(ms.begin(),ms.end()); //deletes the entire set
  ms.erase(ms.find(2)); //deletes the first instance of 2  
  //print the multiset
      for(auto it=ms.begin();it!=ms.end();it++){
        cout<<*it<<", ";
      }
        //---OR---
      for(auto it:ms){
        cout<<it<<endl;
      }
//multiset


return 0;
}

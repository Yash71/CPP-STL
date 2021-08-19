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

  ms.count(2); //finds the number of instances of 2
  //print the multiset
      for(auto it=ms.begin();it!=ms.end();it++){
        cout<<*it<<", ";
      }
        //---OR---
      for(auto it:ms){
        cout<<it<<endl;
      }
//multiset

//key value
//map
  //yash -->2
  //arshi --> 3
  //prem --> 5
  
  map<string,int>mpp;
  mpp["yash"]=2;
  mpp["arshi"]=3;
  mpp["prem"]=5;
  //a map is always sorted according to the keys
  //a map only stores unique keys

  mpp.emplace("yash",2); // mpp.["yash"]=2;
  mpp.erase("yash"); //mpp.erase(key)
  mpp.erase(mpp.begin()); //erases the first element in map
  mpp.clear(); //empties the whole map
  auto it=mpp.find("yash");// points to where yash is located
  
  // to check if the map is empty of not
  if(mpp.empty()){
    cout<<"yes, it is empty";
  }
  mpp.count("yash"); //always return 1 as it stores unique keys

  //printing map
    for(auto it:mpp){
      cout<<it.first<<" "<<it.second<<endl; //it.first prints the key and it.second prints the value 
    }
    for(auto it=mpp.begin();it!=mpp.end();it++){
      cout<<it->first<<" "<<it->second<<endl;
    }
//map

//unordered map
  unordered_map<int,int>mpp;
  //O(1) in almost all cases
  //O(n) in the worst case, where n is the container size

//unordered map

//Pair Class
  pair<int,int> pr={1,2};
  pair<pair<int,int>,int> pr1 ={{1,2},2};
  cout<<pr1.first.second<<endl; // prints 2

  pair<pair<int,int>,pair<int,int>>pr2={{1,2},{2,5}};
  cout<<pr2.first.first<<endl; //prints 1
  cout<<pr2.second.second<<endl; //prints 5

  vector<pair<int,int>> vec;
  set<pair<int,int>> st;
  map<pair<int,int>,int> mpp;
//Pair Class

//summary
//map-> sorted, unique keys
//unorderd map-> unsorted, unique keys
//multimap-> sorted, multiple keys

//stack
  stack<int> st; //LIFO (last in, first out)
  st.push(2);
  st.push(4);
  st.push(3);
  st.push(1);

  cout<<st.top() //prints 1
  st.pop(); //deletes the last entered element (1)
  cout<<st.top(); //prints 3
  st.pop(); //deletes (3)
  cout<<st.top(); //prints 4

  bool flag=st.empty(); //returns true if stack is empty

  //deletes the entire stack
    while(!st.empty()){
      st.pop();
    }
  cout<<st.size()<<endl; //prints the number of elements in the stack

  stack<int> sk;
  cout<<sk.top()<<endl; //throws an error
  // to avoid errors, use an if statement before calling "top" function
  if(!st.empty()){
    cout<<sk.top()<<endl;
  }
//stack
//queue
  queue<int> q; //First in First Out (FIFO)
  q.push(1);
  q.push(2);
  q.push(8);
  q.push(3);
  q.push(6);

  cout<<q.front(); //prints 1
  q.pop();
  cout<<q.front(); //prints 5

  // to delete entire queue
    while(!q.empty()){
      q.pop();
    }
  //every operation is O(1) but deletion takes linear time
//queue
//priority_queue
  //stores all the elements in sorted order(descending) in O(logn) time

//priority_queue
  priority_queue<int> pq;
  pq.push(1);
  pq.push(5);
  pq.push(2);
  pq.push(7);
  // {7,5,2,1}
  cout<<pq.top(); //prints 7
  pq.pop();
  cout<<pq.top(); //prints 5

  priority_queue<pair<int,int>> pq;
  pq.push(1,5);
  pq.push(1,6);
  pq.push(1,7);
  //{(1,7),(1,6),(1,5)}

  //minimum priority queue with int data type
  priority_queue<int,vector<int>,greater<int>>> pq;
  // for any other data type, replace every int with the desired data type in the above decalaration
  pq.push(1)
  pq.push(4)
  pq.push(3)
  pq.push(5)
   cout<<pq.top()<<endl; //prints 1
//priority_queue
//dequeue
  dequeue<int> dq;
    //push_front()
    //push_back()
    //pop_front()
    //pop_back()
    //begin, end, rbegin, rend
    //size
    //clear
    //empty
    //at
//dequeue
//list
  list<int> ls;
  //push_front()
    //push_back()
    //pop_front()
    //pop_back()
    //begin, end, rbegin, rend
    //size
    //clear
    //empty
    //at
    //remove --> O(1)
    ls.push_front(1);
    ls.push_front(2);
    ls.remove(2); // takes O(1)
//list

//--------Home Work---------
// Given n elements, print the elements that occurs maximum number fo times

//input
//5
//1 3 3 3 2

//output
//3

int n;
cin>>n;
map<int,int> mp;
int max=0;
for(int i=0;i<n;i++){
  int x;
  cin>>x;
  mpp[x]++;
  if(mpp[x]>mpp[max]){
    max=x;
  }
}
cout<<max<<endl;

//given n elements, print all elements in sorted order
//input
//n=6
// 5 6 3 2 3 5
//output
//2 3 3 5 6 6

int n;
cin>>n;
multiset<int> ms;
for(int i=0;i<n;i++){
  int xl
  cin>>x;
  ms.insert(x);
}
for(auto it:ms){
  cout<<it<<endl;
}
//--------Home Work---------
return 0;
}



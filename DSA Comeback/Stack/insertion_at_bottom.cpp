// we have to inert a elememt  at bottom of stack

#include<iostream>
#include<stack>
using namespace std ;

class insertAtBottom{
    stack <int> s ;
    


  public:
    void push(int x){
        s.push(x);
    }

  void insert( int x){
    stack <int> s2 ;
    while(!s.empty()){
        s2.push(s.top()) ;
        s.pop() ;
    }
     s.push(x) ;

    while(!s2.empty()){
        s.push(s2.top());
        s2.pop() ; 
    }
  }

};

int main(){
    insertAtBottom ib ;
    ib.push(10) ;
    ib.push(10) ;
    ib.push(10) ;
    ib.push(10) ;
    ib.push(10) ;
    ib.push(10) ;
    ib.push(10) ;



}















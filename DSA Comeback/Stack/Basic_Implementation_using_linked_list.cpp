#include<iostream>
using namespace std ;

class Node{
    public: 

    int data ;
    Node *next;

    Node(int val){
        data = val ;
        next = NULL ;
    }
} ;

class Stack {

    Node *Top ;
    int size ;
    public:

    Stack(){
        Top = NULL ;
        size = 0 ;


    }
    void push(int val){
        Node* temp = new Node(val) ;
        if(temp ==NULL){
            cout<<"Stack  overflow" ; 
        }
        temp ->next = Top ;
         Top = temp ;
         size++ ;

    }

    void pop(){

        if(Top == NULL){
            cout<<  "Stack underflow" ;
        }
        else{
        Node *temp = Top ;
        Top = Top -> next ;
        delete temp ;
        size--  ;
    }
    }

    int peek(){
        if(Top ==NULL){
            cout << "Stack empty " <<endl ;
            return -1 ;
        }
        else{
            return Top->data ;
        }
    }

    //isEmpty 

    bool isEmpty() {
        return Top==NULL ;
    }

    int isSize() {
        return size ;
    }

} ;

int main(){
    Stack S ;
    S.push(6) ;
    S.push(7) ;
    S.push(8) ;
   cout<<S.isEmpty() ;
    S.push(9) ;
    S.push(16) ;
    cout<<S.isEmpty() ;
    S.push(17) ;
    S.push(3) ;
   cout<<S.peek() ;
    S.push(2) ;
    
    S.pop();
    S.pop();
    S.pop();
    cout<<S.isEmpty() ;
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    cout<<S.isEmpty() ;




}

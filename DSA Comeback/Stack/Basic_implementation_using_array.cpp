#include<iostream>
using namespace std ;
//implement it with array
class Stacker {
    
    int size , top , *arr ;
    
    public:
        Stacker(int s){
            size=s ;
            top = -1;
            arr = new int [s] ;

        }

        // push 
        void push(int value){
            if (top == size- 1) {
                cout<<"Stack overflow" <<endl ;
                return ;
            }
            else{
                top++ ;
                arr[top] = value ;
            }
        }

        //pop
        void pop (){
            if(top == -1){
                cout <<" Stack underflow"<<endl ;
                return ;
            }
            else{
                top--;
            }
        }

        //peek
        int peek(){
            if( top == -1)    {
             cout<<"Stack underflow"<<endl ;
           
        }
        else{
            cout<<arr[top]<<endl ;
            return arr[top] ;
        }
        }

        //empty
        bool isEmpty(){
            if(top == -1){
                cout<< true ;
                // return true ;
            }
            else{
                return false ;
            }
        }

        //size

        int isSize(){
            cout<< top+1 ;
            return top +1;
        }

};

        //isSize


int main(){
    Stacker S(5);
    S.push(4);
    S.isEmpty();
    S.push(2);
    S.push(6);
    cout<<S.peek();
    S.push(9);
    S.push(10);
    S.push(8);
     cout<<S.peek();
    S.push(6);
    S.push(3);
    S.push(4);
    S.pop();
    S.pop();
    S.pop();
     cout<<S.peek();
    S.pop();
    S.pop();
    S.pop();
     cout<<S.peek();
    S.pop();
    S.pop();
    S.isEmpty() ;
    S.isSize() ;
}
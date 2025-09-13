
#include<iostream>
#include<stack>
using namespace std ;

class MakeArrayBeautiful
{
private:
    /* data */


public:
    stack <int> s;

    ArrayBeautiful(  ){
        for(int i =  0 ; i<arr.size() ;i++){
            if( (arr[i] >=0 && s.top()> 0 )|| (arr[i] < 0 && s.top()< 0)  ) {
                s.push(arr[i]);
            }else{
                s.pop() ;
            }
        
    }
    }
};




int main(){


MakeArrayBeautiful mb ;
mb




}
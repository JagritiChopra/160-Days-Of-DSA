// REVERSE AN ARRAY 
#include<iostream>
#include<stack>

using namespace std ;

class reverse_array
{
private:
    /* data */
public:
   void reverse(/* args */int arr[] , int n){
    stack<char>S ;

    for(int i = 0 ;i<n;i++){
        S.push(arr[i]) ;
    }
    for (int i = 0; i < n; i++) {
            arr[i] = S.top();
            S.pop();
        }

   }
  
};



int main()
{
    /* code */
   int arr[10] = { 1,2 ,2 ,2 ,35, 6, 7,8 ,9 ,10 } ;
   int n  = 10; 
   // int arr[10] = [1,2 ,2 ,2 ,3 5, 6, 7,8 ,9 ,10 ] ;
   reverse_array obj ;
    obj.reverse(arr , n) ;

    for(int i = 0 ; i<10 ;i++)
{
    cout<<arr[i]<<endl ; 
}
    return 0;
}

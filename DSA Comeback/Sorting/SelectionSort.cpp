#include<iostream>
using namespace std ;

int selectionSort(int &arr[], int n) {
    int min_ele = arr[0];
    for(int i = 0 ;i<n ;i++){
    min_ele = min( arr[i] , min_ele) ;  
    
    std::swap(arr[i], arr[0]);
    min_ele = arr[i+1]; 
        for(int j =i+1 ;j<n ;j++)
        {
            min_ele = min(arr[j], min_ele);
            if(arr[j] <min_ele  ){
                std::swap(arr[j], min_ele);
            }
            
        }
    }

    return  arr[];
}

int main(){

    int n ;
    cin >> n ;
    int arr[n];
    for( int i = 0 ; i<n ; i++ )

    {
    
    cin >>arr[i] ;
    

    }
    
    // selection sort

return selectionSort(arr ,n) ;

}
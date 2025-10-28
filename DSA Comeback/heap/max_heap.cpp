#include<iostream>
using namespace std ;

class MaxHeap{

    int *arr;
    int size ;
    int total_size ; 

    public: 

        MaxHeap(int n ){

            arr = new int[n] ;
            size = 0 ;
            total_size =  n ;
        }

        void insert(int value)
        {

            if(size == total_size){
                cout<< "Heap Overflow" ;
                return;
            }
            arr[size] = value ;
            int index = size ;

            size++ ;

            while(index>0 && arr[(index-1)/2]<arr[index] )
            {
                swap(arr[index] , arr[(index-1)/2] );
                index = (index-1)/2 ;
            };

            cout<<arr[index]<"is ionserted to left" ;

        }

        void print()
        {
            for( int i =0 ; i<size ; i++ )
            cout<<arr[i]<<" ";

            cout<<endl ;
        }

        void Delete()
        {
            if(size == 0)
            {
                cout<< "Heap underflow"
                return;
            }

            cout<< arr[0] <<" deleted from the heap" ;
            arr[0] = arr[size-1] ;





        }

        void Heapify (int index)
        {
            int largest = index ;
            int left = 2*index+1;
            int right = 2*index+2;

            if(left < size && arr[left]> arr[largest])
            largest = left ;

            if( right<size && arr[right]>arr[largest] )
            largest = right ;

            if ((largest != index))
            {
                /* code */
                swap( arr[index] , arr[largest] );
                Heapify(largest);
            }
            


        }

};

int main(){

    MaxHeap H1(6);

}


















































#include<iostream>
#include<vector>
#include<queue>

using namespace std ;

int  main(){
    /*adjacency list will look like :
    0 -> 1
    1-> 2
    2->3
    3->3
    */

    bool IsCyclic(int V , vector<int>adj[]){
        vector<int>Indeg(V)
        queue<int> q ;

        // indegree calculate 
        for(int i = 0 ;i<V ;i++){
            for(int j = 0 ; j< adj[i].size() ;j++){
                Indeg[adj[i][j]]++ ;
            }
        }

        // traverse through idegree vector and push elements with indegree 0 to our queuw
        // pop queue front =? make its adj --
        int cnt = 0 ; 
        vector<int>ans ;
        for(int i = 0 ;i<V ;i++){

            if(Indeg == 0 ){
                q.push(Indeg[i])
                
            }

            while(!q.empty()){
                int node = q.front() ;
                q.pop() ;
                ans.push_back(node) ;

                for(int j = 0 ;j<adj[node].size ;j++){
                    Indeg[adj[node][j]]-- ;
                    if(!Indeg[adj[node]]){
                        q.push(adj[node][j]) ;
                    }

                }

            }

            int count = ans.size() ;

        }


        // compare indegree with cnt 

        return count!=V ;
    }
}







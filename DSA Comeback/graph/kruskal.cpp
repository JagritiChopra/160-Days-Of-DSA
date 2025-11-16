
// kruskal 's approach :

class Solution {
    void UnionByRank(int u , int v , vector<int>&Parent , vector<int>&Rank){
    int Pu = findParent(u , Parent) ;
    int Pv = findParent(v , Parent) ;
    
     if( Rank[Pu] > Rank[Pv] )
        {
        Parent[Pv] = Pu ;
        // Rank[Pv]++ ;
        }
       else if ( Rank[Pu] < Rank[Pv] )
    {
        Parent[Pu] = Pv ;
        // Rank[Pu]++ ;
    }
    else{
        Parent[Pu] =Pv ;
        Rank[Pu]++ ;
    }
    
    }
        
    int findParent (int u , vector<int>& Parent)
    {
        if(u == Parent[u]){
            return u ;
        }
        return Parent[u] = findParent(Parent[u] ,Parent) ;
    }
    
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        // code here
    vector<vector<int>> adj ;
        for(auto it : edges){
            int u = it[0] ;
            int v = it[1] ;
            adj.push_back({u , v}) ;
        }

        // push all th edges into the PQ
     vector<pair<int , pair<int ,int>  > >temp ;
      for (auto it : edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            temp.push_back({wt, {u, v}});
        }
    //   for(int i = 0 ;i<V ;i++){
    //         for(int j = 0 ;j< adj[i].size() ;j++){
    //             temp.push_back({adj[i][j][1]  , { i , adj[i][j][0] } }) ;
    //         }
    //     }
        
        priority_queue< pair<int ,pair<int ,int>> 
        , vector<pair<int , pair<int ,int>>> , 
         greater<pair<int , pair<int ,int>>>> pq(temp.begin() , temp.end()) ;        
        
        // for(int i = 0 ;i<edges.size() ;i++){
        //     for(int j = 0 ;j< adj[i].size() ;j++){
        //         pq.push({adj[i][j][1]  , { i , adj[i][J][0] } }) ;
        //     }
        // }
        
        vector <int>Parent(V) ;
        vector<int> Rank(V ,0) ;
        for(int  i = 0 ;i< V ;i++){
            Parent[i] = i ;
            Rank[i] = 0 ;
        }
       
        // check if u and v belong to same set or not 
        // find ultimate parent of u and v 
        // check rak of ultimate parent
        // merge smaller set into larger
        int cost = 0 ;
        int edge = 0 ;
        
        while( !pq.empty()){
        int wt = pq.top().first ;
        int u = pq.top().second.first ;
        int v = pq.top().second.second ;
    
        if( findParent( u , Parent)  != findParent( v, Parent)){
                    cost += wt ;
                    UnionByRank(u , v , Parent , Rank) ;
                    edge++ ;
            
        }
    
        if(edge ==V-1){
            break ;
        }

        
        
    
        } 
    
        return cost ;
 
    }
};










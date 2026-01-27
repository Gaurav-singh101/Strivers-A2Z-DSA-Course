#include<bits/stdc++.h>
using namespace std ;

class DisJointSet{
    vector<int> parent , rank ; 
    
    public: 
    
    DisJointSet(int n){
        parent.resize(n + 1);
        rank.resize(n + 1 , 0);
        for(int i = 0 ; i <= n ; i++){
            parent[i] = i ;
        }
    }
    
    int find_Ulti_Parent(int n){
        if(n == parent[n]){
            return n ; 
        }
        return parent[n] = find_Ulti_Parent(parent[n]);
    }
    
    void UnionBYRank(int u , int v){
        int up_u = find_Ulti_Parent(u);
        int up_v = find_Ulti_Parent(v);
        
        if(up_u == up_v)return ; 
        if(rank[up_u] < rank[up_v]){
            parent[up_u] = up_v ;
        }else if(rank[up_v < rank[up_u]]){
            parent[up_v] = up_u ;
        }else{
            parent[up_v] = up_u ; 
            rank[up_v]++ ;
        }
    }
};

int main(){
    DisJointSet ds(7);
    ds.UnionBYRank(1 , 2);
    ds.UnionBYRank(2 , 3);
    ds.UnionBYRank(4 , 5);
    ds.UnionBYRank(6 , 7);
    ds.UnionBYRank(5 , 6);
    
    if(ds.find_Ulti_Parent(3) == ds.find_Ulti_Parent(7)){
        cout<<"same\n";
    }else{
        cout<<"Not same \n";
    }
    
    ds.UnionBYRank(3 , 7);
    
    if(ds.find_Ulti_Parent(3) == ds.find_Ulti_Parent(7)){
        cout<<"same\n";
    }else{
        cout<<"Not same \n";
    }

    
    return 0 ; 
}

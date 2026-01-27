#include<bits/stdc++.h>
using namespace std ;

class DisJointSet{
    vector<int> parent , size; 
    
    public: 
    
    DisJointSet(int n){
        parent.resize(n + 1);
        rank.resize(n + 1 , 0);
        size.resize(n + 1 , 1);
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
    

    void UnionBYSize(int u , int v){
        int up_u = find_Ulti_Parent(u);
        int up_v = find_Ulti_Parent(v);
        
        if(up_u == up_v)return ;
        if(size[up_u] < size[up_v]){
            parent[up_u] = up_v ; 
            size[up_v] += size[up_u];
        }else{
            parent[up_v] = up_u ; 
            size[up_u] += size[up_v];
        }
    }
};

int main(){
    DisJointSet ds(7);
    ds.UnionBYSize(1 , 2);
    ds.UnionBYSize(2 , 3);
    ds.UnionBYSize(4 , 5);
    ds.UnionBYSize(6 , 7);
    ds.UnionBYSize(5 , 6);
    
    if(ds.find_Ulti_Parent(3) == ds.find_Ulti_Parent(7)){
        cout<<"same\n";
    }else{
        cout<<"Not same \n";
    }
    
    ds.UnionBYSize(3 , 7);
    
    if(ds.find_Ulti_Parent(3) == ds.find_Ulti_Parent(7)){
        cout<<"same\n";
    }else{
        cout<<"Not same \n";
    }

    
    return 0 ; 
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct Job {
    int start;
    int end;
    int cpuLoad;
};

class CPU_LOAD{
    public:
    
    int load(vector<Job>& inputs){
        int n = inputs.size();
        int maxload = 0 ; 
        int load = 0 ;
        
        sort(inputs.begin() , inputs.end() , [](const Job  &a , const Job &b){
            return a.start < b.start ; 
        });
        
        auto cmp = [](const Job &a , const Job &b){
            return a.end > b.end ;
        };
        
        priority_queue<Job , vector<Job> , decltype(cmp)>minheap(cmp); 
        
        for(auto& input : inputs){
            while(!minheap.empty() && minheap.top().end <= input.start){
                load -= minheap.top().cpuLoad ; 
                minheap.pop();
            }
            
            minheap.push(input);
            load += input.cpuLoad ; 
            
            maxload = max(maxload , load);
        }
        
        return maxload ;
    }
};

int main() {

    vector<Job> input = { {1, 4, 3}, {7, 9, 6}, {2, 5, 4} };

    CPU_LOAD p1;

    cout << "CPU load is : " << p1.load(input);

    return 0;
}
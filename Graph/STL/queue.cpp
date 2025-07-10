#include <iostream>
#include <queue>

using namespace std;

void ExQueue() {
    queue<int> q;


    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4); 

    q.back() += 5 ; 


    // cout<< q.front() <<endl ;
    // cout<< q.back() <<endl ;

    q.pop();  // delete 1st enter element 


        while (!q.empty()) {
        cout << q.front() << " "; // Access the front element
        q.pop(); // Remove the front element
    }
    cout << endl;   


}


int main() {


    ExQueue();

    return 0;
}

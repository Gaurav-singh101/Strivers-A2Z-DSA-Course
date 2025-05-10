#include<bits/stdc++.h>
using namespace std ;

class Queue{
    stack <int> output , temp ; 

    public: 
    void Push(int x){
        while(!output.empty()){
            temp.push(output.top());
            output.pop();
        }
        output.push(x);

        while(!temp.empty()){
            output.push(temp.top());
            temp.pop();
        }
        
    }

    int Pop(){
        int x = output.top();
        output.pop();
        return x ;
    }

    int Top(){
        return output.top();
    }

    int Size(){
        return output.size();
    }
};

int main() {
  Queue q;
  q.Push(3);
  q.Push(4);
  cout << "The element poped is " << q.Pop() << endl;
  q.Push(5);
  cout << "The top of the queue is " << q.Top() << endl;
  cout << "The size of the queue is " << q.Size() << endl;

  return 0 ;
}
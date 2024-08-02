#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(1);
    pq.push(5);
    pq.push(3);
    cout<<"size "<<pq.size()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }

}

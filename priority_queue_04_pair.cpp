#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<pair<int,int>>pq;
    pq.push({2,3});
    pq.push({1,3});
    pq.push({3,3});
    pq.push({3,4});
    pq.push({4,3});
    pq.push({0,3});
    while(!pq.empty()){
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }
}

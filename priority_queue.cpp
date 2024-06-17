#include<bits/stdc++.h>
#include<deque>
using namespace std;
//pop: xoa phan tu top
//top: thong thuong lay ra phan tu lon nhat 
// priority_queue<int, vector<int>, greater<int>> : mac dinh top la so nho nhat
int main(){
    // bai toan tim tong chi phi noi day be nhat
    priority_queue<int, vector<int>, greater<int>> pq;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        pq.push(x);
    }
    int ans = 0;
    while(pq.size() > 1){
        int t1 = pq.top(); pq.pop();
        int t2 = pq.top(); pq.pop();
        ans += t1 + t2;
        pq.push(t1 + t2);
    }
    cout << ans;
    return 0;
}
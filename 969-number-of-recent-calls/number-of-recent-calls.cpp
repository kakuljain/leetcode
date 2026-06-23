class RecentCounter {
public:
    queue<int>q;
    int ans=0;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int cnt=0;
        q.push(t);
        while(q.front()<t-3000)
        {
            q.pop();
           
        }
        
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
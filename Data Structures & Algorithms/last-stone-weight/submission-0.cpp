class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int s : stones){
            pq.push(s);
        }
        while(pq.size()>1){
            int fst = pq.top();
            pq.pop();
            int scnd = pq.top();
            pq.pop();
            int curr = fst - scnd;
            if(curr) pq.push(curr);
        }
        return (pq.empty() ? 0 : pq.top());
    }
};

class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        int x;
        priority_queue<int> pq;
        for (int i = 0; i < v.size(); i++) {
            pq.push(v[i]);
        }
        while (pq.size()) {
            if (k == 0) {
                break;
            }
            x = pq.top();
            pq.pop();
            k--;
        }
        return x;
    }
};
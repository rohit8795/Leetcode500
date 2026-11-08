class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // priority_queue<int>pq;
        // for(int i = 0 ; i < stones.size() ; i++)
        // {
        //     pq.push(stones[i]);
        // }
        // while(pq.size()>1)
        // {
        //     int x = pq.top();
        //     pq.pop();
        //     int y = pq.top();
        //     pq.pop();
        //     if(x!=y)
        //     {
        //         pq.push(x-y);
        //     }
        // }
        // if(pq.size()==1)
        // {
        //     return pq.top();
        // }
        // return 0;
        while(stones.size()>1)
        {
            sort(stones.begin(),stones.end());
            int x = stones[stones.size()-1];
            stones.pop_back();
            int y = stones[stones.size()-1];
            stones.pop_back();
            if(x!=y)
            {
                stones.push_back(x-y);
            }
        }
        if(stones.size()==1)
        {
            return stones[0];
        }
        return 0;
    }
};
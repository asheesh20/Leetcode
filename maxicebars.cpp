class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(),costs.end());
    int n=costs.size();
    for (int i = 0; i <n;i++)
        if (coins >= costs[i])
            coins -= costs[i];
        else
            return i;
    return n;
       }
};
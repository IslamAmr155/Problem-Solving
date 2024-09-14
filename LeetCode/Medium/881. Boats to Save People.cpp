class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int ans = 0, i = 0, j = people.size() - 1;
        while (i <= j) {
            if (people[j--] + people[i] <= limit) i++;
            ans++;
        }
        return ans;
    }
};
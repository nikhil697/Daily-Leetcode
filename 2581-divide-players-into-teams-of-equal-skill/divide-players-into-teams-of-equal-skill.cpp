class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        int targetSum = skill[0] + skill[n - 1];
        long long totalProduct = 0;

        for (int i = 0; i < n / 2; i++) {
            int pairSum = skill[i] + skill[n - 1 - i];
            if (pairSum != targetSum) {
                return -1;
            }
            totalProduct += skill[i] * skill[n - 1 - i];
        }

        return totalProduct;
    }
};
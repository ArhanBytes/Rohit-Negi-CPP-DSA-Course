class Solution {
public:

    void generate_combination(vector<int>& candidates, int index, int n, int target, vector<int> &temp, vector<vector<int> >& ans)
    {
        // base case
        if(target == 0)
        {
            ans.push_back(temp);
            return;
        }
        if(index == n || target < 0)
            return;
        // recursive appraoch
        // Include
        temp.push_back(candidates[index]);
        generate_combination(candidates, index + 1, n, target - candidates[index], temp, ans);
        temp.pop_back();

        // loop to skip the repeatative combinations
        while((index + 1 < n)  && (candidates[index] == candidates[index+1]))
            index += 1;

        // Exclude
        generate_combination(candidates, index + 1, n, target, temp, ans);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        // sort the vector
        sort(candidates.begin(), candidates.end());

        vector<vector<int> > ans;
        vector<int> temp;

        // function to generate combination
        generate_combination(candidates, 0, candidates.size(), target,  temp , ans);

        return ans;
    }
};
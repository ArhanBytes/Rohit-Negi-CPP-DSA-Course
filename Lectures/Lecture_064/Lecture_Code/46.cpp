//  Method 01: With Extra space temp and visited
class Solution
{
public:
    void permutation(vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited)
    {
        if (nums.size() == temp.size())
        {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < visited.size(); i++)
        {
            if (visited[i] == 0)
            {
                visited[i] = 1;
                temp.push_back(nums[i]);
                permutation(nums, ans, temp, visited);
                visited[i] = 0;
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> visited(nums.size(), 0);

        permutation(nums, ans, temp, visited);

        return ans;
    }
};

//  Method 02: With Extra space temp and visited
class Solution
{
public:
    void permutation(vector<int> &nums, int index, vector<vector<int>> &ans)
    {
        if (index == nums.size() - 1)
        {
            ans.push_back(nums);
        }
        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[i], nums[index]);
            permutation(nums, index + 1, ans);
            swap(nums[i], nums[index]);
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;

        permutation(nums, 0, ans);

        return ans;
    }
};
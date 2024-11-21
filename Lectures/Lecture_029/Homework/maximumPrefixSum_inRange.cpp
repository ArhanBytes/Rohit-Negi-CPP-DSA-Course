class Solution
{
public:
    vector<int> maxPrefixes(vector<int> &arr, vector<int> &leftIndex,
                            vector<int> &rightIndex)
    {

        int noOfQueries = leftIndex.size();
        int prefix, maxi;

        vector<int> ans;
        for (int i = 0; i < leftIndex.size(); i++)
        {
            // for range
            int from = leftIndex[i], to = rightIndex[i];

            prefix = 0;
            maxi = INT_MIN;
            for (int j = from; j <= to; j++)
            {
                prefix += arr[j];

                maxi = max(maxi, prefix);
            }

            ans.push_back(maxi);
        }

        return ans;
    }
};
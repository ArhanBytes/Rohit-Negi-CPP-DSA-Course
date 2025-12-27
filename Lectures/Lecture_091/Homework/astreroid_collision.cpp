class Solution
{
public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids)
    {

        vector<int> ans;
        stack<int> st;

        for (int i = 0; i < N; i++)
        {
            // kab kab destry hoga (1: stack isnt empty, 2: top element is positive, 3: there are steroid left, 4: if there is negative astroid)
            while (!st.empty() && asteroids[st.top()] > 0 && i < N && asteroids[i] < 0)
            {
                // when both destroyed
                if (abs(asteroids[i]) == asteroids[st.top()])
                {
                    i++;
                    st.pop();
                }
                // positive destryoed
                else if (abs(asteroids[i]) > asteroids[st.top()])
                    st.pop();
                // negative destroyed
                else
                    i++;
            }

            if (i < N)
                st.push(i);
        }

        while (!st.empty())
        {
            ans.push_back(asteroids[st.top()]);
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
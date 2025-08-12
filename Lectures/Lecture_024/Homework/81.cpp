class Solution {
public:
    bool search(vector<int>& arr, int target) {
       int start = 0, end = arr.size() - 1, mid;

        while (start <= end)
        {
            mid = start + (end - start) / 2;

            // i find my element
            if (arr[mid] == target)
                return true;
            else if (arr[mid] > arr[0])
            {
                if ((arr[start] <= target) && (arr[mid] >= target))
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            else if (arr[mid] < arr[0])
            {
                if (arr[mid] <= target && arr[end] >= target)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
            else
            {
                if(arr[start] == arr[mid]) start++;
                else if(arr[end] == arr[mid]) end--;
            }
        }
        return false;; 
    }
};
class Solution {
public:
    int search(vector<int>& arr, int k) {
        int n=arr.size();
        int st = 0, end = n - 1;

        while(st <= end)
        {
            int mid = st + (end - st) / 2;

            if(arr[mid] == k)
            return mid;

            // Left half is sorted
            if(arr[st] <= arr[mid])
            {
                if(arr[st] <= k && k < arr[mid])
                    end = mid - 1;
                else
                    st = mid + 1;
            }

            // Right half is sorted
            else
            {
                if(arr[mid] < k && k <= arr[end])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return -1;
    }
};

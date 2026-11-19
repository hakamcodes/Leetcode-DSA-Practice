class Solution {
public:
    void merge(vector<int>& arr, int st1, int st2, int st3) {
        vector<int> temp;
        temp.reserve(st3-st1+1);
        int size1 = st2 - 1, size2 = st3, i=st1;
        // copying the sorted elements in the temp array
        while (st1 <= size1 && st2 <= size2) {
            if (arr[st1] < arr[st2]) {
                temp.push_back(arr[st1]);
                st1++;
            } else {
                temp.push_back(arr[st2]);
                st2++;
            }
        }
        while (st1 <= size1) {
            temp.push_back(arr[st1]);
            st1++;
        }
        while (st2 <= size2) {
            temp.push_back(arr[st2]);
            st2++;
        }
        for(int val: temp){
            arr[i] = val;
            i++;
        }
    }
    void mergeSort(vector<int>& arr, int st, int end) {
        int mid = st + (end - st) / 2;
        if (st >= end)
            return;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, st, mid + 1, end);
        return;
    }
    vector<int> sortArray(vector<int>& arr) {
        mergeSort(arr, 0, arr.size() - 1);
        return arr;
    }
};

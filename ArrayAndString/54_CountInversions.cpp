//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
   long long ans = 0;
    vector<long long> mergeTwoSortedArrays(vector<long long> &a, vector<long long> &b)
    {
        if(a.size()==0 || b.size()==0){
            return a.size()==0?b:a;
        }
        vector<long long> res(a.size() + b.size());
        int i = 0; // for a
        int j = 0; //  for b
        int k = 0; // for res
        while (i < a.size() && j < b.size())
        {
            if (a[i] <= b[j])
            {
                res[k++] = a[i++];
            }
            else
            {
                ans += (a.size() - i);
                res[k++] = b[j++];
            }
        }

        while (i < a.size())
        {
            res[k++] = a[i++];
        }
        while (j < b.size())
        {
            res[k++] = b[j++];
        }
        return res;
    }

    vector<long long> mergeSort(vector<long long> v, int lo, int hi)
    {
        if (lo == hi)
        {
            vector<long long> base;
            base.push_back(v[lo]);
            return base;
        }
        int mid = (lo + hi) / 2;
        vector<long long> lh = mergeSort(v, lo, mid);
        vector<long long> rh = mergeSort(v, mid + 1, hi);
        return mergeTwoSortedArrays(lh, rh);
    }

    long long int inversionCount(long long arr[], long long N)
    {
        vector<long long> v(N);
        for (int i = 0; i < N; i++)
        {
            v[i] = arr[i];
        }
        mergeSort(v, 0, v.size() - 1);
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends
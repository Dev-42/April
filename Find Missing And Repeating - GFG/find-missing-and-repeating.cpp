// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) 
    {
        int x = 0;
        for(int i=0;i<n;i++)
        {
            x^=arr[i];
            x^=(i+1);
        }
        int setBit = x & (~(x-1));
        int *ans;
        ans[0] = 0;
        ans[1] = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] & setBit)
            {
                ans[0]^=arr[i];
            }
            else{
                ans[1]^=arr[i];
            }
            if((i+1)& setBit)
            {
                ans[0]^=(i+1);
            }
            else{
                ans[1]^=(i+1);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==ans[0])
                break;
            if(arr[i]==ans[1])
            {
                int temp = ans[0];
                ans[0] = ans[1];
                ans[1] = temp;
                break;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
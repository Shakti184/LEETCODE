class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // vector<int>v(m+n);
        // int i=0,j=0,k=0;
        // while(i<m&&j<n){
        //     if(nums1[i]<=nums2[j]){
        //         v[k]=nums1[i];
        //         i++;
        //     }else{
        //         v[k]=nums2[j];
        //         j++;
        //     }
        //     k++;
        // }
        // while(i<m){
        //     v[k]=nums1[i];
        //     i++;k++;
        // }
        // while(j<n){
        //     v[k]=nums2[j];
        //     k++;j++;
        // }
        // for(i=0;i<n+m;i++){
        //     nums1[i]=v[i];
        // }
        //space complexity o(n)

        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&&j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;k--;
            }else{
                nums1[k]=nums2[j];
                j--;k--;
            }
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }

    }
};
#include <bits/stdc++.h>
using namespace std;

double find_median_sorted(vector<int> &nums1, vector<int> &nums2){
  int n1 = nums1.size();
  int n2 = nums2.size();
  if (n1 > n2){
    return (find_median_sorted(nums2, nums1));
  }
  int low = 0, high = n1;
  while(low <= high){
    int cut1 = low + (high-low)/2;
    int cut2 = ((n1+n2)/2)-cut1;

    int l1 = (cut1==0) ? INT_MIN : nums1[cut1-1];
    int l2 = (cut2==0) ? INT_MIN : nums2[cut2-1];
    int r1 = (cut1==n1) ? INT_MAX : nums1[cut1];
    int r2 = (cut2==n2) ? INT_MAX : nums2[cut2];

    if (l1 > r2) high = cut1-1;
    else if(l2 > r1) low = cut1+1;
    else{
      if ((n1+n2)%2==0){
        return (max(l1, l2) + min(r1, r2))/2.0;
      }
      else{
        return (min(r1, r2)); 
      }
    }
  }
  return 0.0;
}

double findMedianSortednumsays(vector<int>& nums1, vector<int>& nums2) {
  int l1 = nums1.size();
  int l2 = nums2.size();

  int n = (l1+l2)/2;
  int m = (l1+l2)%2;

  int count=0,i=0,j=0;
  double curr=0,prev=0;

  for(;count<=n;++count)
  {
    if(i<l1 && j<l2)
    {
      if(nums1[i]<nums2[j])
        prev=curr , curr=nums1[i++];
      else
        prev=curr , curr=nums2[j++];

      continue;
    }

    else if(i==l1)
      prev=curr , curr = nums2[j++];

    else
      prev=curr , curr = nums1[i++];
  }

  if(m==1)
    return curr;
  else
    return (prev+curr)/2;

}

int main(){
  vector<int>num1{2,6};
  vector<int>num2{1,2,3,4};
  cout << setprecision(2) << find_median_sorted(num1, num2) << endl;
  return 0;
}
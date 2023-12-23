int maximum(vector<int>& nums){
  int maxi=INT_MIN;
  for(int x:nums)
    maxi=max(maxi,x);
  return maxi;
}

int minimum(vector<int>& nums){
  int mini=INT_MAX;
  for(int x:nums)
    mini=min(mini,x);
  return mini;
}

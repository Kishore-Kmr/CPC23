int trap(vector<int>& height) {
        int n=height.size(), maxLeft=height[0], maxRight=height[n-1], l=1, r=n-2, result=0;
        while(l<=r){
            if(maxLeft<=maxRight){
                if(maxLeft>height[l])
                    result+=maxLeft-height[l];
                else
                    maxLeft=height[l];
                l++;
            }
            else{
                if(maxRight>height[r])
                    result+=maxRight-height[r];
                else
                    maxRight=height[r];
                r--;
            }
        }
        return result;
}

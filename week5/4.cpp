bool isMajority(int arr[], int n, int x){
      int start=-1, l=0, r=n-1;
      while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]<x)
            l=mid+1;
        else
            r=mid-1;
        if(arr[mid]==x)
            start=mid;
      }
      if(start!=-1&&(start+n/2-1<n)||arr[start+n/2-1]==x)
          return true;
      return false;
  
  }

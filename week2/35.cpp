class Solution{
    bool isAll9(int num[], int &n){
        for(int i=0;i<n;i++){
            if(num[i]!=9)
                return false;
        }
        return true;
    }
public:
	vector<int> generateNextPalindrome(int num[], int n) {
	    bool flag=false;
	    int idx=-1;
	    vector<int> number;
	    for(int i=n/2-1;i>=0;i--){
	        if(idx==-1&&num[i]!=num[n-1-i]){
	            idx=i;
	            if(num[i]>num[n-1-i])
	                flag=true;
	        }
	        num[n-1-i]=num[i];
	    }
	    if(isAll9(num, n)){
	        number.push_back(1);
	        for(int i=0;i<n;i++)
	            number.push_back(0);
	        number.back()=1;
	        
	    }
	    else{
	        for(int i=0;i<n;i++)
	            number.push_back(num[i]);
	        if(!flag){
	            int mid;
	            if(n%2){
	                mid=(n-1)/2;
	                number[mid]=(number[mid]+1)%10;
	            }
	            else{
	                mid=n/2-1;
	                number[mid]=(number[mid]+1)%10;
	                number[n-1-mid]=(number[n-1-mid]+1)%10;
	            } 
	            while(number[mid]==0){
	                mid--;
	                number[mid]=(number[mid]+1)%10;
	                number[n-1-mid]=(number[n-1-mid]+1)%10;
	            }
	        }
	    }
	    return number;
	}

};

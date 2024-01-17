char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0, r=letters.size()-1, idx=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(letters[mid]<=target)
                l=mid+1;
            else{
                idx=mid;
                r=mid-1;
            }
        }
        return letters[idx];
}

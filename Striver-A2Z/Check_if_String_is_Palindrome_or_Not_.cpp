class Solution{	
	public:		
		bool palindromeCheck(string& s){
            string s2 = s;
			int left = 0;
            int right = s.length() - 1;
            while(left<right){
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                left ++;
                right--;
            }
            if(s2 == s) return true;
            else return false;
		}
};
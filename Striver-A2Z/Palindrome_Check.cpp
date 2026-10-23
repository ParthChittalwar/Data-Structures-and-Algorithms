class Solution{	
	public:		
		bool palindromeCheck(string& s){
			string s2 = s;
            int left = 0;
            int right = s.size() - 1;
            while(left < right){
                char temp = s2[left];
                s2[left] = s2[right];
                s2[right] = temp;

                left++;
                right--; 
            }

            if(s == s2 ){
                return true;
            }else{
                return false;
            }
		}
};
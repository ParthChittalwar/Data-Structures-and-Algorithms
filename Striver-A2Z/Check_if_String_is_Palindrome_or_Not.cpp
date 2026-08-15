class Solution{	
	public:		
		bool palindromeCheck(string& s){
			string temp = s;
            reverse(s.begin(), s.end());
            if(temp==s){
                return true;
            }else{
                return false;
            }
		}
};
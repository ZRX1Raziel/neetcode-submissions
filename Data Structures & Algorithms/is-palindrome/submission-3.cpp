


class Solution {

public:

    bool isPalindrome(string s) {
		  string newstr="";
		  for(char c:s)
		  {
				
				if(isalnum(c))
				{
						c=tolower(c);
						newstr+=c;
				}  
		  }
		  string revstr=newstr;
		  reverse(newstr.begin(),newstr.end());
		  return revstr==newstr;
		
    }

};
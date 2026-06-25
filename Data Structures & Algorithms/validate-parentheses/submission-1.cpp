


class Solution {

public:

bool isValid(string s) {
		stack<char> valid;
		unordered_map<char,char> paran;
		paran[')']='(';
		paran['}']='{';
		paran[']']='[';
		int flag=0;
		int i=0;
		while(i<s.length())
		{
			if(s[i]=='(' || s[i]=='{' || s[i]=='[')
			{
					valid.push(s[i]);
			}
			else
			{
				if(!valid.empty() && paran[s[i]]==valid.top())
				{
					valid.pop();
				}
				else
				{
					return false;
				}
			}
			i+=1;
		}
		if(valid.empty())
			return true;
		else
			return false;
}

};
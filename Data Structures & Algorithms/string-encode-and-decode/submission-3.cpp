class Solution 
{

    public:

  

    string encode(vector<string>& strs) 
    {

            int n=strs.size();
            string encodedstr="";

            for(int i=0;i<n;i++)

            {
		            int leng=strs[i].length();
                    encodedstr+=to_string(leng)+"#"+strs[i];

            }

  

            return encodedstr;

    }

  

    vector<string> decode(string s) 
    {

        vector<string>decoded;
        int i=0;
        while(i<s.size())
        {
		    int j=i;
		    while(s[j]!='#')
			        j++;
			
			int len= stoi(s.substr(i,j-i));
			string word=s.substr(j+1,len);
			decoded.push_back(word);

			i=j+1+len;
        }
        return decoded;
    }

};
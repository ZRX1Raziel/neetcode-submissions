class Solution {

public:

    int evalRPN(vector<string>& tokens) {
		stack<int> answer;
		for(int i=0;i<tokens.size();i++)
		{
			if(tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/")
			{
				answer.push(stoi(tokens[i]));
			}
			else
			{
				int second=answer.top();
				answer.pop();
				int first=answer.top();
				answer.pop();
				int res;
				if(tokens[i]=="+")
					res=first+second;
				else if(tokens[i]=="-")
					res=first-second;
				else if(tokens[i]=="*")
					res=first*second;
				else
					res=first/second;

				answer.push(res);
			}
		}
		return answer.top();
}

};



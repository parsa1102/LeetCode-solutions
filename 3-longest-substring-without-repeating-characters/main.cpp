class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0||s.size()==1)return s.size();
        int mark[300];
        for(int i=0;i<300;i++)mark[i]=0;
        int ans=0;
	    int n = s.size();
	    int j=0;
	    mark[s[0]]++;
	    for(int i=0;i<s.size();i++){
	    	while(j<n){
		    	j++;
		    	if(j>=n)break;
		    	//cout<<j<<'\n';
		    	mark[s[j]]++;
		    	//cout<<"## "<<mark[s[j]]<<'\n';
			    while(mark[s[j]]>1){
				    mark[s[i]]--;
			    	i++;
			     //	cout<<i<<'\n';
		        }
			    //cout<<i<<" "<<j<<'\n';
			    ans = max(ans,j-i+1);
		    }
		    //out<<"I got here \n";
		    mark[s[i]]--;
	    }
	    return ans;
    }
};

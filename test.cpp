class Solution {
private:
    bool isvalid(string s)
    {
        if(s.size()==0 || s.size()>3 || (s.size()>0 && stoi(s)>255) || (s[0]=='0' && s.size()>1))
            return false;
        
        return true;
    }
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        int n=s.size();
        if(n==0)
            return res;
        for(int i=0;i<4 && i<n-2;i++)
        {
            for(int j=i+1;j<i+4 && j<n-1;j++)
            {
                for(int k=j+1;k<j+4 && k<n;k++)
                {
                    string s1=s.substr(0,i);
                    string s2=s.substr(i,j-i);
                    string s3=s.substr(j,k-j);
                    string s4=s.substr(k,n-k);
                    
                    if(isvalid(s1) && isvalid(s2) && isvalid(s3) && isvalid(s4))
                        res.push_back(s1+'.'+s2+'.'+s3+'.'+s4);
                }
            }
        }
        
        return res;
        
    }
};

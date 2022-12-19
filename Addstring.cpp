class Solution {
  
public:
    string addstr(string s1,string s2)
    {
        //s1 size is greater or equal to s2 size
        
        vector<char>v;
        int carry=0;
        int i,j;
        for( i=s1.size()-1,j=s2.size()-1;i>=0 &&j>=0;i--,j--)
        {
            int x=carry+(s1[i]-'0')+(s2[i]-'0');
            if(x>9)
            {
                v.push_back((x)%10 +'0');
                carry=(x)/10;
            }
            else{
                v.push_back(carry+x+'0');
                //carry=0;
            }
        }
        while(i>=0)
        {
           int y=carry+(s1[i]-'0');
            if(y>9)
            {
                v.push_back(y%10);
                carry=y/10;
            }
            else{
                v.push_back(y);
            }
            i--;
        }
        reverse(v.begin(),v.end());
        string ans="";
        for(int i=0;i<v.size();i++)
        {
            ans+=v[i];
        }
        return ans;
        
        
    }
    
    string addStrings(string num1, string num2) {
       if(num1.size()>=num2.size())
       {
         return  addstr(num1,num2);
       }
        else
          return  addstr(num2,num1);
        
       
    }
};
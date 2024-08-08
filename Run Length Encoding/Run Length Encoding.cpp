
class Solution:
    def encode(self, s : str) -> str:
        # code here
        ans=s[0]
        cnt=1
        for i in range(1,len(s)):
            if s[i]!=s[i-1]:
                ans+=str(cnt)
                cnt=1
                ans+=s[i]
            else:
                cnt+=1
        ans+=str(cnt)
        return ans



#{ 
 # Driver Code Starts

if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        s = (input())
        
        obj = Solution()
        res = obj.encode(s)
        
        print(res)
        

# } Driver Code Ends
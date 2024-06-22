class Solution:
    def ExtractNumber(self,sentence):
        #code here
        maxi=-1
        sen=sentence.split(' ')
        for i in sen:
            if i !='' and i[0] in ('1','2','3','4','5','6','7','8','9','0'):
                if '9' not in i:
                    maxi=max(maxi,int(i))
        return maxi


#{ 
 # Driver Code Starts
t = int(input())
for _ in range(t):
    S = input()
    ob = Solution()
    ans = ob.ExtractNumber(S)
    print(ans)

# } Driver Code Ends
#User function Template for python3


class Solution:
    def compareFrac (self, str):
        
        # code here
        ans =[]
        dicto ={}
        x = re.split(r'[ ,]+', str)
        for i in x :
            temp=i.split("/")
            res = int(temp[0])/int(temp[1])
            ans.append(res)
            dicto[res]=temp[0]+"/"+temp[1]
        if ans[0] == ans[1] :
            return "equal"
        return dicto[max(ans)]


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import re

if __name__ == '__main__':
    ob = Solution()
    t = int(input())
    for _ in range(t):
        str = input()
        print(ob.compareFrac(str))

# } Driver Code Ends
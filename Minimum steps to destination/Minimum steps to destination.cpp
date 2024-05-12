#User function Template for python3

class Solution:
    def minSteps(self, d):
        # code here
        step=1
        elm=0
        cnt=0
        while elm<d:
            elm +=step
            step+=1
            cnt +=1
        while (elm-d)%2 !=0:
            cnt+=1
            elm +=step
            step+=1
        
        return cnt


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        d = int(input())

        ob = Solution()
        print(ob.minSteps(d))

# } Driver Code Ends
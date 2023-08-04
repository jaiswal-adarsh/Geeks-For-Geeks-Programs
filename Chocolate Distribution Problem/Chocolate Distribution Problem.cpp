#User function Template for python3

class Solution:

    def findMinDiff(self, A,N,M):
        A.sort()
        ans=1000**2
        
        for i in range (N-M+1):
            max=A[i+M-1]
            min=A[i]
            diff=max-min
            if diff<ans:
                ans=diff
        return ans

        # code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        N = int(input())
        A = [int(x) for x in input().split()]
        M = int(input())


        solObj = Solution()

        print(solObj.findMinDiff(A,N,M))
# } Driver Code Ends
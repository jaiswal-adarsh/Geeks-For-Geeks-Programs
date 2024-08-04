#User function Template for python3

class Solution:
    def isProduct(self, arr, x):
        # code here
        for i in range(len(arr)):
            if arr[i]!=0:
                if(x%arr[i]==0):
                    if (x//arr[i]) in arr:
                        return True
            
        return False


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        arr = list(map(int, input().strip().split()))
        x = int(input())
        ob = Solution()
        ans = ob.isProduct(arr, x)
        if ans:
            print("true")
        else:
            print("false")
        tc -= 1

# } Driver Code Ends
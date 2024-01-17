#User function Template for python3

class Solution:
    def uniquePerms(self, arr, n):
        # code here 
        s = set()
        def dfs(sofar, mask):
            nonlocal s, n, arr
            if mask == (1<<n)-1:
                s.add(tuple(sofar))
                return
            for i in range(n):
                if (1<<i)&mask == 0:
                    sofar.append(arr[i])
                    dfs(sofar, mask|(1<<i))
                    sofar.pop()
        dfs([], 0)
        return sorted(s)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n=int(input())
        arr=list(map(int,input().split()))
        
        ob = Solution()
        res = ob.uniquePerms(arr,n)
        for i in range(len(res)):
            for j in range(n):
                print(res[i][j],end=" ")
            print()
# } Driver Code Ends
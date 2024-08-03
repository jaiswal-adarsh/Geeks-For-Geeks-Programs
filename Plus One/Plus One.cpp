#User function Template for python3

class Solution:
    def increment(self, arr, N):
        # code here 
        num= ''
        for i in arr:
            num +=str(i)
        ans= int(num)
        ans += 1
        num = []
        for p in str(ans):
            num.append(int(p))
        return num


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        arr=list(map(int,input().split()))
        
        ob = Solution()
        ptr = ob.increment(arr,N)
        for i in ptr:
            print(i,end=" ")
        print()
# } Driver Code Ends
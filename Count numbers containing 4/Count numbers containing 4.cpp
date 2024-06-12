
class Solution:
    def countNumberswith4(self, n : int) -> int:
        # code here
        cnt=0
        for num in range(n+1):
            p=str(num)
            cnt =cnt+1 if p.count('4') else cnt+0
        return cnt
            
        



#{ 
 # Driver Code Starts
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):

        n = int(input())

        obj = Solution()
        res = obj.countNumberswith4(n)

        print(res)

# } Driver Code Ends
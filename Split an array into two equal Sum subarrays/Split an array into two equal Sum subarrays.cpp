class Solution:
    def canSplit(self, arr):
        #code here
        n=len(arr)
        sum=0
        for i in range(n):
            sum+=arr[i]
        x=sum/2
        sum1=0
        for i in range(n):
            sum1+=arr[i]
            if(sum1==x):
                return True
        return False


#{ 
 # Driver Code Starts
if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    data = input().splitlines()

    t = int(data[0])
    index = 1
    for _ in range(t):
        arr = list(map(int, data[index].split()))
        index += 1

        obj = Solution()
        res = obj.canSplit(arr)
        if (res):
            print("true")
        else:
            print("false")

# } Driver Code Ends
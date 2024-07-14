#User function Template for python3

class Solution:
    def segregate0and1(self, arr):
        # code here
        z=arr.count(0)
        o=arr.count(1)
        arr.clear()
        for i in range(z):
            arr.append(0)
        for i in range(o):
            arr.append(1)


#{ 
 # Driver Code Starts
class IntArray:

    def __init__(self) -> None:
        pass

    def Input(self, n):
        arr = [int(i) for i in input().strip().split()]  #array input
        return arr

    def Print(self, arr):
        for i in arr:
            print(i, end=" ")
        print()


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):

        arr = list(map(int, input().strip().split()))

        obj = Solution()
        obj.segregate0and1(arr)

        print(*arr)

# } Driver Code Ends
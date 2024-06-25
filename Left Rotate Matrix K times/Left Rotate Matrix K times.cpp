class Solution:
    def rotateMatrix(self, k, mat):
        # code here
        r,c=len(mat),len(mat[0])
        k=k%c
        for i in range(r):
            self.reverse(mat[i],0,k-1)
            self.reverse(mat[i],k,c-1)
            self.reverse(mat[i],0,c-1)
        return mat
    def reverse(self,arr,s,e):
        while s<e:
            arr[s],arr[e]=arr[e],arr[s]
            s+=1
            e-=1



#{ 
 # Driver Code Starts
import math

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, m, k = map(int, input().strip().split(" "))
        mat = []
        for i in range(n):
            mat.append(list(map(int, input().strip().split(" "))))
        ob = Solution()
        ans = ob.rotateMatrix(k, mat)
        for i in range(n):
            for j in range(m):
                print(ans[i][j], end=" ")
            print()

# } Driver Code Ends
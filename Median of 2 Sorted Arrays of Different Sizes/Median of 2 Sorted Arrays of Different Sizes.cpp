#User function Template for python3

class Solution:
    def MedianOfArrays(self, array1, array2):
            #code here
            for i in array2:
                array1.append(i)
                
            array1.sort()
            n=len(array1)
            if n%2==0:
                ans=array1[(n//2)-1]+array1[n//2]
                return ans/2 if ans%2 else ans//2
            else:
                return array1[n//2]


#{ 
 # Driver Code Starts
if __name__ == '__main__':
    tcs=int(input())

    for _ in range(tcs):
        m = input()
        arr1=[int(x) for x in input().split()]
        n = input()
        arr2=[int(x) for x in input().split()]
        
        
        ob = Solution()
        print(ob.MedianOfArrays(arr1,arr2))

# } Driver Code Ends
def isSorted(arr, n):
 for i in range(1, n):
  if arr[i] < arr[i-1]:
   return False
 return True

t = int(input())
for _ in range(t):
 n, k = map(int, input().split())
 arr = list(map(int, input().split()))
 if isSorted(arr, n):
  print("Yes")
 elif k>=2:
  print("Yes")
 else:
  print("No")
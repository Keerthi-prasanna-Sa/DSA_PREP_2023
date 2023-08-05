arr = [2,8,12,15,18,20,25,30]
target = 19

start = 0
end = len(arr)-1
floor = -1

while start <= end:
    mid = (start + end) // 2
    if arr[mid] == target:
        print("Found at index: ",mid)
        break
    elif arr[mid] < target:
        start = mid + 1
        floor = mid
    else:
        end = mid - 1

print("Floor position : ",floor)
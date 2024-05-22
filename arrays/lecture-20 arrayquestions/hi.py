def mid_element (arrays):
    for arr in arrays:
        left, right = 0,0
        n = len(arr)
        mid = n//2
        for i in range(mid+1):
            left += arr
        for i in range(mid, n):
            right += arr
        if left == right:
            return True
        return False
    
arrays = [2,0,0,0]
result = mid_element(arrays)
print(result)

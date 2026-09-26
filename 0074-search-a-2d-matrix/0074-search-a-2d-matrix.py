class Solution:
    def searchMatrix(self, matrix: list[list[int]], target: int) -> bool:
        n = len(matrix)
        m = len(matrix[0])
        st =0
        end = m*n-1
        while st<=end:
            mid = st + (end-st)//2
            row = mid//m
            col =mid%m
            if matrix[row][col] == target:
                return True
            elif matrix[row][col] < target:
                st = mid + 1
            else:
                end = mid -1
        return False
        
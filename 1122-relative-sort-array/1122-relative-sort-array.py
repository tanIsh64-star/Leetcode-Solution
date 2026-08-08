class Solution:
    def relativeSortArray(self, arr1, arr2):
        count = {}

        # Count frequency of each element in arr1
        for num in arr1:
            count[num] = count.get(num, 0) + 1

        result = []

        # Add elements according to arr2 order
        for num in arr2:
            if num in count:
                result.extend([num] * count[num])
                del count[num]

        # Add remaining elements in sorted order
        remaining = []

        for num in count:
            remaining.extend([num] * count[num])

        remaining.sort()

        result.extend(remaining)

        return result
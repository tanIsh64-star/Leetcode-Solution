class Solution:
    def largestInteger(self, nums, k):
        n = len(nums)

        # Case 1: k = 1
        if k == 1:
            count = {}

            for x in nums:
                count[x] = count.get(x, 0) + 1

            ans = -1

            for x in nums:
                if count[x] == 1:
                    ans = max(ans, x)

            return ans

        # Case 2: k = n
        if k == n:
            return max(nums)

        # Case 3: 1 < k < n
        count = {}

        for x in nums:
            count[x] = count.get(x, 0) + 1

        ans = -1

        if count[nums[0]] == 1:
            ans = max(ans, nums[0])

        if count[nums[-1]] == 1:
            ans = max(ans, nums[-1])

        return ans
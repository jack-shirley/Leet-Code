class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        triplet, triplets = [], []
        for idx, num in enumerate(nums):
            for idx2, num2 in enumerate(nums):
                for idx3, num3 in enumerate(nums):
                    if idx != idx2 != idx3 != idx:
                        if num + num2 + num3 == 0:
                            triplet = [num,num2,num3]
                            triplet.sort()
                            if triplet not in triplets:
                                triplets.append(triplet)
        return triplets

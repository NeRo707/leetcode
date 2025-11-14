import re
s = input()
nums = re.findall(r'[0-9]+', s)
_nums = set(nums)
print(len(_nums))
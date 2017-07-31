class Group:
  def __init__(self,nums):
    self.setNums(nums)
  def getNums(self):
    return self.nums
  def prNums(self):
    print(self.nums)
  def merge(self, group):
    for x in group.nums:
      if x not in self.nums:
        self.nums.append(x)
  def intersect(self, group):
    temp = []
    for x in group.nums:
      if x in self.nums:
        temp.append(x)
    self.nums = temp
  def setNums(self, nums):
    self.nums = []
    for x in nums:
      if x not in self.nums:
        self.nums.append(x)

if __name__=="__main__":
  group1 = Group([11, 22, 33, 44, 55])
  group2 = Group([33, 44, 55, 66, 77])

  group1.merge(group2)
  group1.prNums()
  # 印出 11 22 33 44 55 66 77 (不需按順序)

  group1.setNums([22, 33, 33, 11, 44, 55])
  group1.merge(group2)
  group1.prNums()
  # 印出 33 44 55 (不需按順序）
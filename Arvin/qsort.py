def partition(arr):
  pivot = arr[len(arr) - 1]
  small = []
  big = []
  for i in range(len(arr) - 1):
    if arr[i] <= pivot:
      small.append(arr[i])
    else:
      big.append(arr[i])
  return[small, [pivot], big]
def qsortNaive(arr):
  if len(arr) < 2:
    return arr
  triplet = partition(arr)
  first = qsortNaive(triplet[0])
  third = qsortNaive(triplet[2])
  return first + triplet[1] + third

def qsort0(arr):
  if len(arr) < 2:
    return arr
  pivot = arr[0]
  equals = [x for x in arr if x==pivot  ]
  first = [x for x in arr if x<pivot ]
  third = [x for x in arr if x>pivot   ]
  return qsort0(first)+equals+qsort0(third)
  
def test():
  print(qsortNaive([1, 5, 7, 3, 5, 5, 5, 5, 5]))
  print(qsort0([1, 5, 7, 3, 5, 5, 5, 5, 5]))

test()
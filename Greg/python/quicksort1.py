import random
def qsort(A):
  if len(A) < 1:
    return A
  p = A[random.randint(0, len(A)-1)]
  small = [x for x in A if x < p]
  large = [x for x in A if x > p]
  middle = [x for x in A if x == p]
  return qsort(small)+middle+qsort(large)
  
if __name__ == "__main__":
  A = [9, 8, 6, 4, 3, 2, 1]
  print(A)
  print(qsort(A))
  print(qsort(A))
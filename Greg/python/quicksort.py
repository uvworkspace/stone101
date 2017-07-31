def partition(A, lo, hi):
  var pivot = A[hi]
  var i = lo - 1
  for j from lo to hi - 1:
    if A[j] <= pivot:
      i += 1
      swap(A, i, j)
  swap(A, i + 1, hi)
  return i + 1
def _qsort(A, lo, hi):
  if lo < hi:
    println(lo + " " + hi + " " + A)
    var p = partition(A, lo, hi)
    println(p + " " + A)
    _qsort(A, lo, p - 1)
    _qsort(A, p + 1, hi)
def swap(A, i, j):
  var temp = A[i]
  A[i] = A[j]
  A[j] = temp
def qsort(A):
  _qsort(A, 0, A.length - 1)
def qsort0(A):
  if A.length <= 1:
    return A
  var A1 = []
  var A2 = []
  var p = A[0]
  var A3 = [p]
  for i from 1 to A.length - 1:
    if A[i] < p:
      A1[A1.length] = A[i]
    elif A[i] > p:
      A2[A2.length] = A[i]
    else:
      A3[A3.length] = A[i]
  A1 = qsort0(A1)
  A2 = qsort0(A2)
  return A1 + A3 + A2

def test():
  var A = [9, 8, 6, 4, 3, 2, 1]
  println(A)
  println(qsort0(A))


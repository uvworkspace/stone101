def repeat(i, arr):
  return arr[i] in arr[i+1:]
def old(arr):
  result = []
  for i in range(0, len(arr)):
    if not repeat(i, arr):
      result.append(arr[i])
  return result
def old2(arr):
  return [arr[i] for i in range(0, len(arr)) if not repeat(i, arr)]
def has(result, num):
  for x in result:
    if x == num:
      return True
  return False
def unique(arr):
  result = []
  for x in arr:
    if not has(result, x):
      result.append(x)
  return result

  return [x for x in arr if x not in result]
  names = {}
  result = []
  for name in arr:
    if not names.get(name):
      names[name] = True 
      result.append(name)
  return result
def sort(arr):
  temp = arr[:]
  temp.sort()
  return[temp[] for i in r(0,len(temp))]
  

if __name__=="__main__":
  arr = ["good", "bad", "good", "perfect"]
  print(old2(arr))
  print(unique(arr))
  print(sort(arr))
  print(hashtable(arr))
  
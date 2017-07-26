
def hi(name):
  print("Hello", name)

def bmi(kg, m):
  return kg / (m * m)
def check(kg, m=2, name="guest"):
  b = bmi(kg, m)
  print(name, 'BMI', b)


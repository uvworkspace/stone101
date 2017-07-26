
def hi(name):
  print("Hello", name)

def bmi(kg, m):
  return kg / (m * m)
def check(kg, m=2, name="guest"):
  b = bmi(kg, m)
  print(name, 'BMI', b)

# print("hello.py", __name__, __file__)

def greet2(me, loud=False):
    if loud:
        print('HELLO, %s!' % me.name.upper())
    else:
        print('Hello, %s' % me.name)
          
class Greeter:
  # Constructor
  def __init__(self, name):
      self.name = name  # Create an instance variable

  # Instance method
  def greet(self, loud=False):
      if loud:
          print('HELLO, %s!' % self.name.upper())
      else:
          print('Hello, %s' % self.name)

class Test:
  # Constructor
  def __init__(self):
      self.name = 'Test'

if __name__ == "__main__":
  #hi("me")
  check(60, 2, "bob")
  g = Greeter("Alice")
  g.greet()
  x = Test()
  Greeter.greet(x, loud=None)
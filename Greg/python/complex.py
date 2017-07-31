class Complex:
  def __init__(self, real, img):
    self.real = real
    self.img = img
  def label(self):
    return "(" + str(self.real) + ". " + str(self.img) + ")"
  def add(self,x):
    r = self.real + x.real
    i = self.img + x.img
    return Complex(r, i)
  def times(self,y):
    r = self.real*y.real - self.img*y.img
    i = self.img*y.real + self.real*y.img
    return Complex(r, i)

if __name__ == "__main__":
  c = Complex(1, 2)
  d = Complex(3, - 4)
  
  # should be (1 + 2i)
  print(c.label())
  e = c.add(d)
  # should be (4 - 2i)
  print(e.label())
  # should be (1 + 2i)
  print(c.label())
  # should be (3 - 4i)
  print(d.label())

  # should be (11 + 2i)
  f = c.times(d)
  print(f.label())

  # what should this be?
  d = d.times(d)
  print(d.label())

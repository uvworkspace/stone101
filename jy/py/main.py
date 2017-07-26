import hello
from hello import hi as hi1
from mod import hello2
import mod.hello2
from mod.hello2 import hi as hi2

print("main.py", __name__, __file__)

if __name__ == "__main__":
  hi2("bob")
  hi2("Alice")
  hi1("Alice2")

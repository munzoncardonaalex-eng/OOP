class person:
    def __init__(self):
        self.name = " "
        self.age = 0
        
    def say_hello (self):
        print(f"Hola, soy {self.name} y tengo {self.age} años!")
def main():
    p1 = person()
    p1.name = "Alex"
    p1.age = 18
    p1.say_hello()
    
if __name__ == "__main__":
    main()        
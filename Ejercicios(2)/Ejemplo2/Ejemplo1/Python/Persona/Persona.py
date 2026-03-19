class Persona: 
    def __init__(self):
        self.nombre = ""
        self.edad = 0 
        
    def mostrar(self):
        print("Nombre = ", self.nombre)
        print("Edad = ", self.edad)
        
p1 = Persona()
p2 = Persona()

p1.nombre = "Alex"
p1.edad = 18

p2.nombre = "Gabriel"
p2.edad = 19

print("Objeto 1: ")
p1.mostrar()

print("\nObjeto 2: ")
p2.mostrar()
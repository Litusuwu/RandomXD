14

print("Ingrese cuatro notas: ")
nota1 = float(input())
nota2 = float(input())
nota3 = float(input())
nota4 = float(input())
prom = (nota1 + nota2 + nota3 + nota4)/4
prom = int(prom)
if (prom>11): 
    print ("aprobó con ", prom)
else: 
    print ("no aprobó con ", prom)

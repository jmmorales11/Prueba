import os
os.system("cls")

def cambio(lista):
    dic = {
    "1": "a",
    "2": "e", 
    "3": "i",
    "4": "o",
    "5": "u",  
    }
    numeros = ""
    for a in lista:
        if a != " " and a.lower() in dic:
            numeros += dic[a.lower()]
        else:
            numeros += a
    return numeros
 
def invierte(lista):  
    inversa=""  
    for i in range(len(lista),0,-1):  
        inversa+=lista[i-1]  
    return inversa  

def oracion (lista):
    lista.reverse()
    lista
    return lista

def palabra_repetida(lista):
    palabras = []
    recolectador = ''
    separador = ' '
    for i in range(len(lista)):
        recolectador += lista[i]
        if lista[i] == separador:
            palabras.append(recolectador)
            recolectador = ''
    return palabras
 
#menu principal
with open('mensaje.txt') as arc:
    texto = arc.readline()
palabra=[]
print("Texto original\n",texto)
texto = cambio (texto)
print("Texto traducido\n",texto)
texto = invierte(texto)
print("Texto invertido \n",texto)
texto_nuevo = texto.split()
texto= oracion(texto_nuevo)
texto_nuevo = " ".join(texto)
print("Mensaje traducido\n",texto_nuevo)
palabra=palabra_repetida(texto)
print("La palbra mas larga esn",palabra)


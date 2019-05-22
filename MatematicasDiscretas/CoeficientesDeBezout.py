#   https://entrenamiento-python-basico.readthedocs.io/es/latest/leccion3/tipo_listas.html
def mcd(dividendo, divisor):
    paso = 0
    #    n          m     q             r
    dividendos, disores, cocientes, residuos = [], [], [], []

    if dividendo == 0 & divisor ==0:
        return 0
        pass
    
    dividendos.append(dividendo)
    disores.append(divisor)
    cocientes.append(int (dividendo/divisor))
    residuos.append(dividendo%divisor)
    while residuos[paso] != 0:
        
        dividendos.append(disores[paso])  # Coge el dividendo del paso anterior
        disores.append(residuos[paso])  # Coge el divisor del paso anterior
        paso = paso + 1
        cocientes.append(int (dividendos[paso] / disores[paso])) #Saca el cociente del paso actual
        residuos.append(int(dividendos[paso] % disores[paso]))  # Saca el residuo del paso actual
        if residuos[paso] == 0:
            bezout(paso, dividendos, disores, cocientes, residuos)
            print("El MCD es \n", disores[paso])
            return disores[paso]  #Retorna el residuo

     
    pass


def bezout(paso, dividendos, disores, cocientes, residuos):
    print("Los coeficientes son \n")
    
    themcd = residuos[paso]
    done = False
    

    #while done != True:
        
     #   pass

    pass

mcd(512, 48)
#camilo = []
#camilo.append(43)
#camilo.append(2)
#print("Camilo es ", camilo)

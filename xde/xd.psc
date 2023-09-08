Algoritmo sin_titulo
	Escribir "Ingrese el numero de minutos que dura la cancion"
	Leer numMin
	Escribir "Ingrese el numero de segundos escritos la duracion de la cancion: "
	Leer numSeg
	
	total <- numMin*60 + numSeg
	
	Escribir "La cancion dura ", total," segundos."
	
	condicion1 <- total < 150
	condicion2 <- total > 150 y total < 240 
	condicion3 <- total >= 240
	
	Si condicion1 Entonces
		factor <- 50
		porcentaje <- 20
	SiNo
		Si condicion2 Entonces
			
			factor <- 45
			porcentaje <- 25
		SiNo
			Si condicion3 Entonces
				factor <- 42
				porcentaje <- 30
			FinSi
			
		FinSi
	FinSi
	
	ans1 <- total * factor
	ans2 <- ans1 * (porcentaje / 100)
	
	Escribir  "El precio de venta sera de S./", ans1
	Escribir "Se pagará al artista/compositor S/.", ans2
FinAlgoritmo

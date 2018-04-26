g1.png: datos.txt grafica.py
	python grafica.py
datos.txt: eje23
	./eje23 > datos.txt
eje23: onda.cpp
	c++ onda.cpp -o eje23

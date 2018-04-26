g1.png: datos1.txt grafica1.py
	python grafica.py
datos1.txt: eje23
	./eje23 > datos1.txt
eje23: onda.cpp
	c++ onda.cpp -o eje23

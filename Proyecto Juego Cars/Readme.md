Juego cars
Description in Spanish:

Se programo el arduino desde el progama "Arduino IDE" via cable USB (y no por cables jumpers como los otros proyectos) desde el raspberry pi 2 para que ejecutara un juego pixelado
que consiste en que el carro evitara obstaculos que venian de la derecha de la pantalla y el carro estaba en el borde izquierdo de la pantalla. (si el carro y el obstaculo colisionaban el carro desaparecía, para recuperar completamente el carro a la solo hay que oprimir otra vez el botón)
El codigo que hay en ésta página funciona para el LCD de 16x2 pero si se necesita para el televisor mediante cable RCA es necesario los siguientes pasos:
se incluye la librería de TVout, se inicializa la pantalla con una dimensión pequeña (probado con: TV.begin(NTSC,30,24);) y cuando vaya a mostrar en el TV, ubique las lineas donde se escribe para el LCD y cambielas para que muestre en el TV (por ejemplo: TV.set_cursor(0,0))

se utilizo la libreria externa TVout. fuente: https://github.com/Avamander/arduino-tvout

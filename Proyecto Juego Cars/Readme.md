Juego cars
Description in Spanish:

Se programó el Arduino desde el programa "Arduino IDE" vía cable USB (y no por cables jumpers como los otros proyectos) desde el Raspberry Pi 2 para que ejecutara un juego pixelado que consiste en que el carro evitara obstáculos que vienen de la derecha de la pantalla y el carro estaba en el borde izquierdo de la pantalla. (si el carro y el obstáculo colisionaban el carro desaparecía, para recuperar completamente el carro a la solo hay que oprimir otra vez el botón).

El código que hay en ésta página (carro.ino) funciona para el LCD de 16x2 pero si se necesita para el televisor mediante cable RCA es necesario los siguientes pasos:
se incluye la librería de TVout, se inicializa la pantalla con una dimensión pequeña (probado con: TV.begin(NTSC,30,24);) y cuando vaya a mostrar en el TV, ubique las líneas de código donde se escribe para el LCD y cámbielas para que muestre en el TV (por ejemplo: TV.set_cursor(0,0))

se utilizó la librería externa TVout. fuente: https://github.com/Avamander/arduino-tvout

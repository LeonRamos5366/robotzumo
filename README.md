# Robot Sumo
<img src="https://content.arduino.cc/website/Arduino_logo_teal.svg" height="100" align="right" />

[![Arduino IDE](https://github.com/arduino/arduino-ide/workflows/Arduino%20IDE/badge.svg)](https://github.com/arduino/arduino-ide/actions?query=workflow%3A%22Arduino+IDE%22)

![](static/)
## Nivel de dificultad: Básico

Un robot de sumo con Arduino básico es un proyecto interesante y divertido que involucra la construcción de un pequeño robot diseñado para competir en combates de sumo.

Los robots de sumo suelen ser pequeños y compactos, diseñados para ser lo más efectivos posible en términos de potencia, velocidad y estrategia

Aquí tienes los pasos básicos para crear un robot de sumo con Arduino:

## Lista de materiales:
<ul>
  <li>Chasis con 2 o 4 Motor Reductor de Doble Eje Tipo I, 200RPM, 3-6V.</li>
  <li>Arduino Uno REV3 y su IDE.</li>
  <li>Puente H L298N o Mini L298N.</li>
  <li>HC-SR04 Ultrasonico.</li>
  <li>TCRT5000 Optico Infrarrojo.</li>
  <li>Lipo Batería 7,4 V 1500 MAh y su cargador.</li>
  <li>Cautín, Estaño, pasta flux, Cables de conexión, Mini Protoboard.</li>
  <li>Considerar silicon caliente, cinta doble cara para ancleje. </li>
  <li>Computadora. </li>
</ul>


### Diseño de un chasis o armado de uno prefabricado 

El chasis es el componente estructural del robot que contiene el tren motriz y permite que el robot sea móvil mediante el uso de ruedas, huellas de tanque u otro método. En ocasiones, un chasis se denomina estructura del robot. El chasis también proporciona una estructura para sujetar manipuladores como brazos, garras, elevadores, arados, sistemas de transporte, tomas de objetos y otras características de diseño utilizadas para manipular objetos. 

Comienza por diseñar y construir un chasis resistente y compacto para tu robot de sumo. Ten en cuenta el espacio reducido disponible para colocar todos los componentes.

Utiliza materiales ligeros pero duraderos, como plástico o aluminio, para construir el chasis. Asegúrate de que sea lo suficientemente robusto para soportar los movimientos y colisiones durante las competencias.


### Ensamblaje de los componentes
* Conecta el Arduino Uno al puente H L298N y este a los motores. Esto permitirá controlar los motores del robot.

* Conecta el sensor TCRT5000 y el HC-SR04 al Arduino Uno. Estos sensores serán responsables de detectar el borde del ring y al oponente, respectivamente.

* Conecta el módulo de baterías y el regulador de voltaje para asegurar un suministro de energía constante y estable.

## Simuladores
![](./images/Wokwi.png) 

* [Wokwi](https://wokwi.com/)



![](./images/Tinkercad.png)

* [Tinkercad](https://www.tinkercad.com/)



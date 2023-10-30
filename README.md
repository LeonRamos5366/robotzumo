# Robot Sumo
<img src="https://content.arduino.cc/website/Arduino_logo_teal.svg" height="100" align="right" />

[![Arduino IDE](https://github.com/arduino/arduino-ide/workflows/Arduino%20IDE/badge.svg)](https://github.com/arduino/arduino-ide/actions?query=workflow%3A%22Arduino+IDE%22)

This repository contains the source code of the Arduino IDE 2.x. If you're looking for the old IDE, go to the [repository of the 1.x version](https://github.com/arduino/Arduino).

The Arduino IDE 2.x is a major rewrite, sharing no code with the IDE 1.x. It is based on the [Theia IDE](https://theia-ide.org/) framework and built with [Electron](https://www.electronjs.org/). The backend operations such as compilation and uploading are offloaded to an [arduino-cli](https://github.com/arduino/arduino-cli) instance running in daemon mode. This new IDE was developed with the goal of preserving the same interface and user experience of the previous major version in order to provide a frictionless upgrade.

![](static/screenshot.png)
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

## Nivel de dificultad: Básico
<h3>Diseño de un chasis o armado de uno prefabricado </h3>
<p>El chasis es el componente estructural del robot que contiene el tren motriz y permite que el robot sea móvil mediante el uso de ruedas, huellas de tanque u otro método. En ocasiones, un chasis se denomina estructura del robot. El chasis también proporciona una estructura para sujetar manipuladores como brazos, garras, elevadores, arados, sistemas de transporte, tomas de objetos y otras características de diseño utilizadas para manipular objetos. </p>
<p> Comienza por diseñar y construir un chasis resistente y compacto para tu robot de sumo. Ten en cuenta el espacio reducido disponible para colocar todos los componentes.</p>
<p>Utiliza materiales ligeros pero duraderos, como plástico o aluminio, para construir el chasis. Asegúrate de que sea lo suficientemente robusto para soportar los movimientos y colisiones durante las competencias.</p></div>

<div>
* Ensamblaje de los componentes
<p>Conecta el Arduino Uno al puente H L298N y este a los motores. Esto permitirá controlar los motores del robot.</p>

<p>Conecta el sensor TCRT5000 y el HC-SR04 al Arduino Uno. Estos sensores serán responsables de detectar el borde del ring y al oponente, respectivamente.</p>

<p>Conecta el módulo de baterías y el regulador de voltaje para asegurar un suministro de energía constante y estable.</p>
</div>
<h2> Simuladores </h2>
<A HREF="https://wokwi.com/">Arduino </A> <br>
<A HREF="https://wokwi.com/">WOKWI</A> <br>
<A HREF="https://www.tinkercad.com/">Tinkercad</A> 
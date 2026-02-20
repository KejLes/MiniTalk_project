*Este proyecto ha sido creado como parte del currículo de 42 por KejLes.*

## Descripción
MiniTalk es un proyecto de comunicación cliente-servidor que utiliza exclusivamente señales UNIX (SIGUSR1 y SIGUSR2) para intercambiar datos entre procesos. El objetivo principal es implementar un servidor que imprima su PID y reciba mensajes, y un cliente que envíe strings codificadas bit a bit al servidor, demostrando manejo de señales y manipulación de bits en C.

## Instrucciones
1. `make` (compila client y server)
2. Terminal 1: `./server` (muestra PID)
3. Terminal 2: `./client [PID] "mensaje"`

## Recursos
Realizado con ayuda de repositorios de compañeros como de alejaro2 o migugar2 o jurodrig. La IA ha sido utilizada como tutor, preguntaba cosas que no comprendía de varias fuentes y me lo explicaba en detalle, le preguntaba con el objetivo de entenderlo y poder replicarlo sin ayuda de esta.

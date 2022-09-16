/* Copyright 2022, Asignatura de "SISTEMAS EMBEBIDOS"
 * Postgrado EITI 
 * Facultad de Ciencias Exactas y Tecnología 
 * Universidad Nacional de Tucuman
 * Copyright 2022, Moyano German <germoyanoh1@gmail.com>
 * All rights reserved.
 */

/** @file alumno.c
 **
 ** @brief TP2 - Plantilla de archivos fuente
 ** 
 ** @defgroup plantilla de Archivos
 ** @brief Plantillas de archivos normalizadas
 ** @{ 
 */

/* === Inclusiones de cabeceras ============================================ */
#include "alumno.h"
#include <stdio.h>
/* === Definicion y Macros privados ======================================== */

/* === Declaraciones de tipos de datos privados ============================ */

/* === Definiciones de variables privadas ================================== */

/* === Definiciones de variables publicas ================================== */

/* === Declaraciones de funciones privadas ================================= */

/* === Definiciones de funciones privadas ================================== */

/* === Definiciones de funciones publicas ================================== */

//! Definicion de la funcion "nombre" y lo que debe hacer
void nombre (const struct alumno_s * alumno) {
    printf("El apellido del alumno es: %s\r\n", alumno->apellido);
    printf("El nombre del alumno es: %s\r\n", alumno->nombre);
    printf("El DNI del alumno es: %s\r\n", alumno->documento);        
}

/* === Ciere de documentacion ============================================== */

/** @} Final de la definición del modulo para doxygen */


/* Copyright 2022, Asignatura de "SISTEMAS EMBEBIDOS"
 * Postgrado EITI 
 * Facultad de Ciencias Exactas y Tecnología 
 * Universidad Nacional de Tucuman
 * Copyright 2022, Moyano German <germoyanoh1@gmail.com>
 * All rights reserved.
 */

/** @file main.c
 **
 ** @brief Programa principal del TPn2
 **
 ** @defgroup TP2 Plantillas de Archivos
 ** @brief Plantillas de archivos normalizadas
 ** @{ 
 */

/* === Inclusiones de cabeceras ============================================ */
#include "main.h"
#include <stdio.h>
#include "alumno.h"
/* === Definicion y Macros privados ======================================== */

/* === Declaraciones de tipos de datos privados ============================ */

/* === Definiciones de variables privadas ================================== */

/* === Definiciones de variables publicas ================================== */

/* === Declaraciones de funciones privadas ================================= */

/* === Definiciones de funciones privadas ================================== */

/* === Definiciones de funciones publicas ================================== */

//! Definicion de los datos "estaticos" de un alumno
int main(void) {
	static const struct alumno_s alumno = {  
		.apellido = "Moyano", //!< Definicion del apellido
		.nombre = "German", //!< Definicion del nombre
		.documento = "33.050.740" //!< Definicion del DNI
	};

	nombre (&alumno);
	
	return 0;
}

/* === Ciere de documentacion ============================================== */

/** @} Final de la definición del modulo para doxygen */






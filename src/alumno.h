/* Copyright 2022, Asignatura de "SISTEMAS EMBEBIDOS"
 * Postgrado EITI 
 * Facultad de Ciencias Exactas y Tecnología 
 * Universidad Nacional de Tucuman
 * Copyright 2022, Moyano German <germoyanoh1@gmail.com>
 * All rights reserved.
 */

#ifndef ALUMNO_H   /*! @cond    */
#define ALUMNO_H   /*! @endcond */

/** @file alumno.h
 **
 ** @brief Plantilla de archivos de cabecera 
 **
 ** @defgroup plantilla Plantilals de Archivos
 ** @brief Plantillas de archivos normalizadas
 ** @{ 
 */

/* === Inclusiones de archivos externos ==================================== */

/* === Cabecera C++ ======================================================== */
#ifdef __cplusplus
extern "C" {
#endif

/* === Definicion y Macros publicos ======================================== */

/* == Declaraciones de tipos de datos publicos ============================= */

//! Estructura que contiene los datos del alumno.
struct alumno_s {
    char apellido [60]; //*< Cadena de caracteres del apellido del alumno
    char nombre [60]; //*< Cadena de caracteres del nombre del alumno
    char documento [16]; //*< Cadena de caracteres del documento del alumno
};

/* === Declaraciones de variables publicas ================================= */

/* === Declaraciones de funciones publicas ================================= */

void nombre(const struct alumno_s * alumno);

/* === Ciere de documentacion ============================================== */
#ifdef __cplusplus
}
#endif

/** @} Final de la definición del modulo para doxygen */

#endif   /* ALUMNO_H */

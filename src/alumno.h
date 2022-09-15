/* Copyright 2022, Asignatura de "SISTEMAS EMBEBIDOS"
 * Postgrado EITI 
 * Facultad de Ciencias Exactas y Tecnología 
 * Universidad Nacional de Tucuman
 * Copyright 2022, Moyano German <germoyanoh1@gmail.com>
 * All rights reserved.
 */

#ifndef ALUMNO_H   /*! @cond    */
#define ALUMNO_H   /*! @endcond */

/** @file plantilla.h
 **
 ** @brief Plantilla de archivos de cabecera 
 **
 ** Plantilla para los archivos de cabeceras de las prácticos de la 
 ** asignaturas Sistemas Embebidos
 ** de Tiempo Real dictadas en de la Especialización en Integración de
 ** Sistemas Informaticos de la Univesidad Nacional de Tucumán
 ** 
 ** | RV | YYYY.MM.DD | Autor       | Descripción de los cambios              |
 ** |----|------------|-------------|-----------------------------------------|
 ** |  1 | 2022.09.12 | gmoyanoh1   | Version inicial del archivo             |
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

struct alumno_s {
    char apellido [60];
    char nombre [60];
    char documento [16];
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

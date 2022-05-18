#ifndef MYBOOL //Si no esta definido "MYBOOL",entonces definelo.
#define MYBOOL
#define true 1
#define false 0
typedef int mybool;
#endif //Final de definicion de "MYBOOL"

/*Nota: "ifndef" permite evitar errores que se puedan crear debido a una doble definicion de un cierto type,class,etc. Entonces,
al decir "si x no esta definido, definelo" nos estamos ahorrando esta clase de problemas, y siempre es importnate luego de esa linea cerrar la definicion con "endif".*/



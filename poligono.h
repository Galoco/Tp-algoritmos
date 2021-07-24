#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

typedef struct poligono{
    float (*vertices)[2];
    size_t n;
} poligono_t;

//ver si necesito googlear una formula
double poligono_distancia(const poligono_t *p, float cx, float cy, float *norm_x, float *norm_y){


}

//trasladar + rotar
poligono_rotar_centrado(p, cx, cy, ang);

void trasladar(float poligono[][2], size_t n, float dx, float dy);//
void rotar(float poligono[][2], size_t n, double rad); //

double producto_interno (double ax, double bx, double ay, double by);

void punto_mas_cercano(float x0, float y0, float x1, float y1, float xp, float yp, float *x, float *y);

void reflejar(float norm_x, float norm_y, float *cx, float *cy, float *vx, float *vy);

poligono_t *poligono_crear(float vertices[][2], size_t n);

void poligono_destruir(poligono_t *poligono);

bool poligono_obtener_vertice(const poligono_t *poligono, size_t pos, float *x, float *y);

poligono_t *poligono_clonar(const poligono_t *poligono);

bool poligono_agregar_vertice(poligono_t *poligono, float x, float y);

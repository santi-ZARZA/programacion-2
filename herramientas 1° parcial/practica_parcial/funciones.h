#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_USUARIOS 2
#define MAX_PRODUCTOS 10

typedef struct
{
    int ID_Usuarios;
    char Nombre[50];
    char Contrasena[50];
    int Estad_Usuarios;

}eUsuarios;

typedef struct
{
    int ID_Usuarios;
    int ID_Producto;
    char Nombre[50];
    float Precio;
    int Estad_Prod;
    int Stock;
    int Vendidos;

}eProductos;

void setearestados(eUsuarios [],eProductos []);
int lugarlibreUsuario(eUsuarios []);
int lugarlibreProducto(eProductos []);
int buscoIDUsuario(eUsuarios [], int);
int buscoIDProducto(eProductos [], int);

void cargaUsuario(eUsuarios [],eProductos []);
void modificarUsuario(eUsuarios []);
void mostrarUsuarios(eUsuarios []);


void publicarProducto(eUsuarios [], eProductos []);
void modificarProducto(eUsuarios [], eProductos []);



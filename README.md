# Lista Doblemente Enlazada en C++

## 1. Descripción
Este proyecto implementa la estructura de datos **lista doblemente enlazada** en el lenguaje **C++**.  
Se ha desarrollado bajo el paradigma de **programación orientada a objetos**, utilizando plantillas (templates) para soportar diferentes tipos de datos.  

La estructura permite:
- Insertar elementos al inicio y al final.
- Eliminar un nodo por valor.
- Recorrer la lista en ambos sentidos (hacia adelante y hacia atrás).

Además, se incluye una **clase de prueba (`main.cpp`)** que verifica las funcionalidades básicas con datos de ejemplo.

---

## 2. Requerimientos de software
Para compilar y ejecutar el proyecto se requiere:

- **Compilador C++** compatible con el estándar **C++17** o superior  
  (ejemplo: Compilador de Visual Studio).
- **Visual Studio 2019/2022** con la carga de trabajo **Desktop development with C++** instalada.  
- Alternativamente, se puede compilar desde terminal en Linux/macOS con `g++`.

# Descarga Windows

Para comprender el proceso, instalemos Mingw-w64 mediante MSYS2 . Mingw-w64 es un conjunto de herramientas gratuito y popular para Windows. Ofrece compilaciones nativas actualizadas de GCC, Mingw-w64 y otras útiles herramientas y bibliotecas de C++.

- Descarguelo usando el siguiente enlace: https://github.com/msys2/msys2-installer/releases/download/2024-12-08/msys2-x86_64-20241208.exe

- Ejecute el instalador y descarguelo en su pc

- Seleccione preferiblemente la ubicacion recomendada para descargar el instalador, cuando se descargue y seleccione "Finalizar" . Se abrirá automáticamente una ventana de terminal de MSYS2.

- En esta terminal, instale la cadena de herramientas MinGW-w64 ejecutando el siguiente comando:
```bash
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```
- Acepte el número predeterminado de paquetes en el toolchaingrupo presionando Enter .

- Ingrese Y cuando se le pregunte si desea continuar con la instalación.

- Agregue la ruta de su bincarpeta MinGW-w64 a la PATH variable de entorno de Windows siguiendo los siguientes pasos:

  - En la barra de búsqueda de Windows, escriba Configuración para abrir la Configuración de Windows.

  - Busque Editar variables de entorno para su cuenta.

  - En sus Variables de usuario , seleccione la ```Path``` variable y luego seleccione Editar.

  - Seleccione "Nuevo" y agregue a la lista la carpeta de destino de MinGW-w64 que registró durante la instalación. Si seleccionó los pasos de instalación predeterminados, la ruta es: ```C:\msys64\ucrt64\bin.```

  - Seleccione Aceptar y, a continuación, vuelva a seleccionar Aceptar en la ventana Variables de entorno ```PATH``` para actualizar la variable de entorno. Debe volver a abrir las ventanas de la consola para que la ```PATH``` variable de entorno actualizada esté disponible.

- Compruebe que sus herramientas MinGW-w64 estén correctamente instaladas y disponibles, abra un nuevo Símbolo del sistema y escriba:

```bash
gcc --version
g++ --version
gdb --version
```

Con todos los pasos realizados, ya debería funcionar el compilador, de no ser asi verifique la ruta del path en variables de usuario y sistema que esten correctamente agregadas.

¡Ahora puede utilizar C++ en su maquina local!


## Otros Sistemas operativos

En caso de no poseer Windows, estas paginas lo guiaran para poder descargar el compilador en caso de que su equipo lo lo tenga preinstalado.

- Mac: https://code.visualstudio.com/docs/cpp/config-clang-mac#_prerequisites

- Linux: https://code.visualstudio.com/docs/cpp/config-linux#_prerequisites

### Pagina Referencia

https://code.visualstudio.com/docs/languages/cpp

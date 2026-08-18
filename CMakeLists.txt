cmake_minimum_required(VERSION 3.20)
project(Semana02_EstructurasControl LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Cada ejercicio es un programa independiente con su propio main(), por lo que se
# genera un ejecutable (target) por archivo .cpp.
#
# Se recorre automáticamente cada carpeta Sesion_* del proyecto, incluidas sus
# subcarpetas. CONFIGURE_DEPENDS hace que CMake vuelva a configurarse al compilar
# cuando se agrega o elimina un archivo, sin editar este CMakeLists.
file(GLOB carpetas RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
     CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/Sesion_*")

foreach(carpeta IN LISTS carpetas)
    if(NOT IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/${carpeta}")
        continue()
    endif()

    string(TOLOWER "${carpeta}" prefijo)

    file(GLOB_RECURSE fuentes RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}/${carpeta}"
         CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/${carpeta}/*.cpp")

    foreach(fuente IN LISTS fuentes)
        # Sesion_2A/sub/mi_ejercicio.cpp  ->  sesion_2a_sub_mi_ejercicio
        string(REGEX REPLACE "\\.cpp$" "" nombre "${fuente}")
        string(REGEX REPLACE "[/\\\\]" "_" nombre "${nombre}")
        set(target "${prefijo}_${nombre}")

        add_executable("${target}" "${carpeta}/${fuente}")

        # Advertencias del compilador: MSVC usa banderas distintas a GCC/Clang.
        if(MSVC)
            target_compile_options("${target}" PRIVATE /W4 /utf-8)
        else()
            target_compile_options("${target}" PRIVATE -Wall -Wextra)
        endif()
    endforeach()
endforeach()

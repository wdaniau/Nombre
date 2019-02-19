
// Nom du module en Python
#ifdef SWIGPYTHON
%module mypyext
#endif
// Nom du module en Ruby
#ifdef SWIGRUBY
%module myrbext
#endif

%include <std_string.i>

%{
#include "nombre.h"
%}

%include "nombre.h"


// Nom du module en Python
#ifdef SWIGPYTHON
%module mypyext
#endif
// Nom du module en Ruby
#ifdef SWIGRUBY
%module myrbext
#endif


%{
#include "nombre.h"
%}

%include "nombre.h"

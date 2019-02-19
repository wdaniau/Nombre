
// Nom du module en Python
#ifdef SWIGPYTHON
%module mypyext

// C++ to Python
%typemap(out) QString {
  $result = PyUnicode_FromString($1.toUtf8().constData());
}

// Python to C++
%typemap(in) QString {
  $1 = QString(PyUnicode_AsUTF8($input));  
}

#endif
// Nom du module en Ruby
#ifdef SWIGRUBY
%module myrbext

// C++ to Ruby
%typemap(out) QString {
  $result = rb_str_new2($1.toUtf8().constData());
}

// Ruby to C++
%typemap(in) QString {
  $1 = QString(StringValuePtr($input));
}

#endif


%{
#include "nombre.h"
%}

%include "nombre.h"

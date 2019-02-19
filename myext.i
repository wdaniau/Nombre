
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

// typecheck mandatory for overloaded constructor
%typemap(typecheck,precedence=SWIG_TYPECHECK_STRING) QString {
 $1 = PyUnicode_Check($input)? 1 : 0;
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

// typecheck mandatory for overloaded constructor
%typemap(typecheck,precedence=SWIG_TYPECHECK_STRING) QString {
 $1 = RB_TYPE_P($input, T_STRING)? 1 : 0;
}
#endif


%{
#include "nombre.h"
%}

class Nombre : public QObject
{
public:
    Nombre(QObject* parent=0);
    Nombre(double v,QObject* parent=0);
    Nombre(double v, QString n,QObject* parent=0);
    void setV(double v);
    double getV();
    double carre();
    void setNom(QString n);
    QString getNom();
};


Remarque sur les include 
------------------------
Il faut les paquets de développement ruby et python3

Suivant les installations, il se peut que le paquet ruby s'appelle en fait par exemple ruby-2.1 et du coup :

pkg-config --cflags ruby

ne sortira rien. Il faut vérifier le nom à utiliser avec par exemple

pkg-config --list-all | grep -i ruby

Cela vaut également pour python3.


Construction à la main 
----------------------

# on génère les .o
g++ -fPIC -c *.cpp

# eventuellement on construit le programme test
g++ main.o nombre.o -o testNombre

# Construction des wrap
# Wrap Ruby
swig -c++ -ruby -o myext_ruby_wrap.cxx myext.i
# Wrap Python
swig -c++ -python -o myext_python_wrap.cxx myext.i

# Construction des extensions
# Ruby
g++ -fPIC -shared `pkg-config --cflags ruby` myext_ruby_wrap.cxx nombre.o -o myrbext.so
# Python
g++ -fPIC -shared `pkg-config --cflags python3` myext_python_wrap.cxx nombre.o -o _mypyext.so



Construction avec le Makefile
-----------------------------
make -f Makefile.ext



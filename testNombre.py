#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import mypyext

a=mypyext.Nombre()
a.setV(2.5)
print(str(a.getV()))
print(str(a.carre()))

b=mypyext.Nombre(3.14,"pi")
print(b.getNom()+" "+str(b.getV()))

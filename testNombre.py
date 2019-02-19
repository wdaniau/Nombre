#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import mypyext

a=mypyext.Nombre()
a.setV(2.5)
print(str(a.getV()))
print(str(a.carre()))

a.setNom("Truc")
print(a.getNom())

b=mypyext.Nombre(3.14,"pi")

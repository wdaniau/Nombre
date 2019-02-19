#!/usr/bin/env ruby


require './myrbext'

a=Myrbext::Nombre.new
a.setV(2.5)
puts a.getV
puts a.carre

a.setNom("Truc")
puts a.getNom

b=Myrbext::Nombre.new(3.14,"pi")
puts b.getNom+" "+b.getV.to_s

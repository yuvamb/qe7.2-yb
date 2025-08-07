#=======================================
# WANNIER90 	
#=======================================

TOPDIR = /home/pietro/qe-7.2

F90=mpif90
FCOPTS=$(FFLAGS) -cpp 
LDOPTS=-g

LIBS = -L/usr/local/lib  -lopenblas   -lopenblas  

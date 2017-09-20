
        ARQUIVOS = teste.cpp
         OBJETOS = teste.o

      DIRINCLUDE = -I/usr/include
          DIRLIB = -L/usr/lib
          PARLIB =

      COMPILADOR = g++

    all: linkar compilar limpar

    linkar: $(ARQUIVOS)
       $(COMPILADOR) -c $(ARQUIVOS) 
       
    compilar: $(ARQUIVOS)
       $(COMPILADOR) $(OBJETOS) $(DIRINCLUDE) $(DIRLIB) $(PARLIB) -o teste

    limpar:
       rm -f *.o

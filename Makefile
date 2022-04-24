.cpp.o:	$*.h
	g++	-c $*.cpp

all:	BuscaEOrdenacao

BuscaEOrdenacao:  BuscaEOrdenacao.o algBusca.o algOrdenacao.o
	g++ -o $@ $^

clean:
	rm BuscaEOrdenacao *.o 
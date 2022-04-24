#include <iostream>
#include <cstdlib>
#include <limits>
#include <algorithm>
#include <vector>

#include "algBusca.h"
#include "algOrdenacao.h"

#define MAX 20


// ********************************************************************
// ********************************************************************
// ********************************************************************
int main() {

std::vector<int> v;

	std::cout << "tamanho do vetor = " << v.size() << std::endl;

    srand( time(NULL) );

    for (unsigned int i=0 ; i < MAX ; i++) 
        v.push_back(rand() % 100);
        
    std::cout << "conteudo de v: \n [\b\b ";

    for (unsigned int i = 0 ; i < MAX ; i++) 
       std::cout << v[i] << " , ";

    std::cout << "\b\b] \n";

   ordenacaoSelecao(v);

   std::cout << "conteudo de v ordenado: \n [\b\b ";

   for (unsigned int i = 0 ; i < MAX ; i++) 
      std::cout << v[i] << " , ";

   std::cout << "\b\b] \n";
   	
 	return 0;        
}
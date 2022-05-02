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
   
   std::cout << "tamanho do vetor depois de preenchido = " << v.size() << std::endl;
        
   std::cout << "conteudo de v: \n \b\b[ ";

   for (unsigned int i = 0 ; i < MAX ; i++){
      std::cout << v[i] << " , ";
   } 

   std::cout << "\b\b] \n";

   // std::vector<int> vetorOrdenado = ordenacaoSelecao(v);
   // std::vector<int> vetorOrdenado = ordenacaoBolha(v);
   std::vector<int> vetorOrdenado = ordenacaoInsercao(v);

   std::cout << "conteudo de v ordenado: \n \b\b[ ";

   for (unsigned int i = 0 ; i < MAX ; i++) 
      std::cout << vetorOrdenado[i] << " , ";

   std::cout << "\b\b] \n";
   	
 	return 0;   

}

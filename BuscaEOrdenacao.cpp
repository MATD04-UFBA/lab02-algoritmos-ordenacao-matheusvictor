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
   // int chave = 1;
   int chave = (rand() % 100);

   for (unsigned int i=0 ; i < MAX ; i++) 
      v.push_back(rand() % 100);
      
   
   std::cout << "tamanho do vetor depois de preenchido = " << v.size() << std::endl;
   cout << "Estou procurando pela chave " << chave << endl;
        
   std::cout << "conteudo de v desordenado: \n \b\b[ ";

   for (unsigned int i = 0 ; i < MAX ; i++){
      std::cout << v[i] << " , ";
   } 

   std::cout << "\b\b] \n";

   cout << "==================================================================" << endl;

   // std::vector<int> vetorOrdenado = ordenacaoSelecao(v);
   // std::vector<int> vetorOrdenado = ordenacaoBolha(v);
   std::vector<int> vetorOrdenado = ordenacaoInsercao(v);

   std::cout << "conteudo de v ordenado: \n \b\b[ ";

   for (unsigned int i = 0 ; i < MAX ; i++) 
      std::cout << vetorOrdenado[i] << " , ";

   std::cout << "\b\b] \n";

   cout << "==================================================================" << endl;

   int quantidadeComparacoesBuscaSequencialVetorDesordenado = buscaSequencial(v, chave);

   cout << "- No vetor desordenado, realizei uma BUSCA SEQUENCIAL com ";

   if (quantidadeComparacoesBuscaSequencialVetorDesordenado != -1) {
      cout << quantidadeComparacoesBuscaSequencialVetorDesordenado << " comparacoes e encontrei a chave!" << endl;
   } else {
      cout << v.size() << " comparacoes e nao encontrei a chave!" << endl;  
   }

   int quantidadeComparacoesBuscaSequencialVetorOrdenado = buscaSequencial(vetorOrdenado, chave);

   cout << "- No vetor ordenado, realizei uma BUSCA SEQUENCIAL com ";

   if (quantidadeComparacoesBuscaSequencialVetorOrdenado != -1) {
      cout << quantidadeComparacoesBuscaSequencialVetorOrdenado << " comparacoes e encontrei a chave!" << endl;
   } else {
      cout << vetorOrdenado.size() << " comparacoes e nao encontrei a chave!" << endl;      
   }

   cout << "- No vetor ordenado, realizei uma BUSCA BINARIA e ";

   if(buscaBinaria(vetorOrdenado, chave)) {
      cout << "encontrei a chave!";
   } else {
      cout << "nao encontrei a chave!";
   }

 	return 0;   

}

#include <vector>


// ********************************************************************
// Pior Caso   : Chave é o ultimo ou não pertence a v -> O(n)
// Melhor Caso : Chave é o primeiro elemento          -> O(1)
// Caso Médio  : O(n/2=0.5n) -> O(n)
// ********************************************************************
int buscaSequencial(std::vector<int> v, int chave) {
      
      int quantidadeComparacoes = 0;

      for (int i=0; i < v.size(); i++) {
            quantidadeComparacoes++;
            if (chave == v[i]) {
                  return quantidadeComparacoes;
                  break;
            } 
      }
      return -1;
}

// ********************************************************************
// Pior Caso   : Chave é v[n-1] ou é maior que v[n-1] -> O(n)
// Melhor Caso : A chave é v[0] ou é menor que v[0]   -> O(1)
// Caso Médio  : O(n/2) -> O(n)
// ********************************************************************
int buscaSequencialOrd(std::vector<int> v, int chave) {
      
      int i = 0;

      while ((i < v.size()) && v[i] < chave) {
            i++;
      }

      if ((i == v.size()) || (v[i] > chave)) {
            i++;
            return i;
      } else {
            i++;
            return i;
      }

}

// ********************************************************************
// Pior Caso   : Busca sem sucesso ou encontrar na ultima comparação (i==f) -> O(log(n))
// Melhor Caso : chave for o elemento na posição médio -> O(1)
// Caso Médio  : -> O(log(n))
// ******************************************************************** 
bool buscaBinaria(std::vector<int> v, int chave) {    

      int posicaoInicialVetor = 0;
      int posicaoFinalVetor = (v.size() - 1);
      int posicaoMediaVetor = (posicaoInicialVetor + posicaoFinalVetor) / 2.0;

      while ((posicaoInicialVetor <= posicaoFinalVetor) && (v[posicaoMediaVetor] != chave)) { // se a chave que buscamos estiver na metade do vetor, nem entraremos nesse laço
            
            if (v[posicaoMediaVetor] > chave) {  // se a chave for menor que o elemento encontrado na metade do vetor...
                  posicaoFinalVetor = posicaoMediaVetor - 1; // isso significa que a chave deve estar à esquerda
            } else { 
                  posicaoInicialVetor = posicaoMediaVetor + 1; // isso significa que a chave deve estar à esquerda
            }
            posicaoMediaVetor = (posicaoInicialVetor + posicaoFinalVetor) / 2.0;
      }

      if (posicaoInicialVetor > posicaoFinalVetor) { // se houver só um elemento e a chave ainda não tiver sido encontrada
            return false;
      } else {
            return true; // significa que só a metade equivale a um único elemento e ele próprio é a chave
      }
      
}

// ********************************************************************
// Pior Caso   : Busca sem sucesso ou encontrar na ultima comparação (i==f) -> O(log(n))
// Melhor Caso : chave for o elemento na posição médio -> O(1)
// Caso Médio  : -> O()
// ******************************************************************** 
bool buscaBinariaRec(std::vector<int> v, int chave, int i, int f) {

   return false;

}

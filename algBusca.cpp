#include <vector>


// ********************************************************************
// Pior Caso   : Chave é o ultimo ou não pertence a v -> O(n)
// Melhor Caso : Chave é o primeiro elemento          -> O(1)
// Caso Médio  : O(n/2=0.5n) -> O(n)
// ********************************************************************
bool buscaSequencial(std::vector<int> v, int chave) {
      
      for (int i=0; i < v.size(); i++) {
            if (chave == v[i]) {
                  return true;
                  break;
            }
      }

      return false;
}

// ********************************************************************
// Pior Caso   : Chave é v[n-1] ou é maior que v[n-1] -> O(n)
// Melhor Caso : A chave é v[0] ou é menor que v[0]   -> O(1)
// Caso Médio  : O(n/2) -> O(n)
// ********************************************************************
bool buscaSequencialOrd(std::vector<int> v, int chave) {

      return false;
}

// ********************************************************************
// Pior Caso   : Busca sem sucesso ou encontrar na ultima comparação (i==f) -> O(log(n))
// Melhor Caso : chave for o elemento na posição médio -> O(1)
// Caso Médio  : -> O(log(n))
// ******************************************************************** 
bool buscaBinaria(std::vector<int> v, int chave) {             

   return false;
}

// ********************************************************************
// Pior Caso   : Busca sem sucesso ou encontrar na ultima comparação (i==f) -> O(log(n))
// Melhor Caso : chave for o elemento na posição médio -> O(1)
// Caso Médio  : -> O()
// ******************************************************************** 
bool buscaBinariaRec(std::vector<int> v, int chave, int i, int f) {

   return false;

}

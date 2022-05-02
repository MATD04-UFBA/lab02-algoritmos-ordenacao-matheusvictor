#include <vector>

using namespace std;

/* *********************************************** */
/* *********************************************** */
vector<int> ordenacaoSelecao(std::vector<int> &v) {
	
	int menorElemento, aux = 0;

    for (int i = 0; i < (v.size() - 1); i++) {
        menorElemento = i;

        for (int j = (i + 1); j < v.size(); j++) {
            if (v[menorElemento] > v[j]) {
                menorElemento = j;
            }
        }

        if (i != menorElemento) {
            aux = v[i];
            v[i] = v[menorElemento];
            v[menorElemento] = aux;
        }
    }

	return v;
}

/* *********************************************** */
/* *********************************************** */
vector<int> ordenacaoInsercao (std::vector<int> &v) {

    int elementoAtualVetor, posicaoAnteriorVetor;
    
    for(int i = 1; i < v.size(); i++) {
        
        int elementoAtual = v[i]; // 2
        int posicaoAnterior = i-1; // 7
        
        while(posicaoAnterior >= 0 && v[posicaoAnterior] > elementoAtual) {
           v[posicaoAnterior+1] = v[posicaoAnterior];
           posicaoAnterior--;
        }
        
        v[posicaoAnterior+1] = elementoAtual;
    }

    return v; 

}


/* *********************************************** */
/* *********************************************** */
vector<int> ordenacaoBolha (std::vector<int> &v) {

    int maiorElemento, aux; 

    for (int ultimaPosicaoVetor = (v.size() - 1); ultimaPosicaoVetor > 0; ultimaPosicaoVetor--) {    // começa da última posição do vetor e a cada passada no laço, 
                                                                                                    // vai uma "passo" em direção a primeira posição do vetor
        for (int i = 0; i < ultimaPosicaoVetor; i++) {                    
            if (v[i] > v[i+1]) {
                aux = v[i+1];
                v[i+1] = v[i];
                v[i] = aux;
            }
        }
    }

    return v;

}

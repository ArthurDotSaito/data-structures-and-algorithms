# Stack

## Conceitos

- Definida como uma estrutura de dados onde os elementos estão conceitualmente dispostos um em cima do outro. Internamente na memória dos computadores, a pilha é uma estrutura linear, pois é constituída de de elementos que são ligados através de seus endereços de memória (de forma contígua ou não). O comportamento e operações realziadas pela pilha é o que, de fato, definem o que a pilha é.
  LIFO (Last in, first out) : Último a entrar é o primeiro a sair;
  FIFO:(First in, First out): O primeiro a entrar é o último a sair.

## Operações:

- PUSH: Empilhar elemento;
- SIZE: Retornar tamanho;
- TOP: Retornar topo;
- POP: Desempilhar elemento;
- EMPTY: Verificar se a pilha está vazia;

## Casos de uso

São estruturas de dados intensamente utilizadas por computadores. É bem conhecido que dentro do escopo da memória principal (RAM / ROM) existem 02 "regiões" de memórias distintas: A Heap e a Stack. Simplificando, a Heap é o espaço principal de alocação em tempo de execução, onde objetos instanciados e variáveis globais estão armazendas, bem como o programa em si e seu espaço de memória, sendo que parte desse espaço de memória é a Stack. A Stack é usada para possibilitar as "alterações de contexto" ou simplesmente "ações", ou mais simplesmente, uma chamada de método ou função. Toda vez que um programa chama um método ou função, o contexto da execução da aplicação é armazenado (push) em pilhas. Com esse contexto, a aplicação tem acesso ao necessário para a execução de cada método e também para onde retornar (pop) quando a execução atual se encerrar.

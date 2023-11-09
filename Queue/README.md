# Queue

## Conceitos

Trata-se de uma estrutura onde os elementos estão dispostos de forma sequencial e ordenada. Intuitivamente, filas possuem um comportamento bem definido, pois procedem da mesma forma que uma fila de uma repartição pública.
Quando dizemos "sequencial" e "ordenada", significa que em memória, seus elementos se ligam através de seus endereços de memória, formando uma estrutura linear com ordem bem definida de inserção e remoção. As regras de inserção e remoção formam um conjunto de comportamentos e operações que definem bem o que é uma fila, sendo que resumidamente, os elemetos em uma fila são sempre acrescentados em uma extremidade e retirados de outra.

- FIFO (First in, First out): O primeiro a entrar é o primeiro a sair.
- LILO (Last in, Last out): O último a entrar é o último a sair.

## Operações:

- ENQUEUE: Enfileirar elemento;
- SIZE: retornar tamanho;
- HEAD: retornar cabeça;
- DEQUEUE: desenfileirar elemento;
- EMPTY: verificar se a fila está vazia;

## Tipos de fila

A fila é um tipo de estrutura de dados que possui algumas variantes, que acabam por prover comportamentos e formas de uso extras.

- Clássica
- Circular
- Prioritária
- Dupla extremidade

  ### Clássica

  A fila clássica é autoexplicativa e se comporta de forma estritamente conceitual, onde pode-se enfileirar e/ou desinfileirar coisas.

  ### Circular

  Uma fila circular possui a propriedade de que seu ultimo elemento (ou nó, dependendo da forma como se implementa),se liga ao primeiro elemento. Isso torna possível acessar todos os elementos da fila a partir de qualquer ponto. Para a implementação em vetores, existem controles que navegam através dos índices do vetor a fim de indicar o começo e fim da fila.

  ### Prioridade

  Filas do tipo prioridade é uma estrutura de dados na qual a classificação intrínseca dos elementos determina os resultados de suas operações, ou seja, os elementos possuem fator determinante para o comportamento da fila. Em geral, essa estrutura possuí modificações nas operações de "enqueue" e "dequeue", de forma que seu comportamento (FIFO) é alterado. Existem dois tipos mais gerais de filas de prioridade: Ascendentes e Descendentes,

  #### Ascendente ou min-heap

  Uma fila de prioridade ascendente é um conjunto de itens no qual podem ser inseridos itens de forma arbitrária, sendo que apenas o menor item pode ser removido. Isso signfica que, se o enfileiramento for modificado a fila sempre estará ordenada de forma que o elemento de menor prioridade esteja a frente (cabeça). De outra forma, se o desenfileiramento for modificado, o item a ser desinfileirado será no sentido da menor prioridade para a maior.

  #### Descendente ou max-heap

  Uma fila de prioridade descendente é similar ao caso ascendente, entretanto, a remoção sempre se dá no item de maior prioridade. Ou seja, se o enfileiramento for modificado, a fila sempre estará ordenada de forma que o elemento de maior prioridade esteja na frente (cabeça). Com modificação no desenfileiramento, o item a ser desenfileirado será sempre o de maior prioridade.

  ## Referências

  - Knuth, Donald E. The Art of Computer Programming vol.1 - Fundamental Algorithms. 3rd ed.1997.
  - Tanembaum, Aaron M. Data structures using C. 1st ed. 1989.

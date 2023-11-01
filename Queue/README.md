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

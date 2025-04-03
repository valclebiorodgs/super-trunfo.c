Super Trunfo - Cidades do Brasil 🃏🌆

Este projeto é uma versão interativa do jogo Super Trunfo, desenvolvido em linguagem C, onde duas cartas representando cidades brasileiras são comparadas com base em atributos definidos pelo jogador.

📋 Funcionalidades

Cadastro de duas cartas com informações sobre cidades.

Cálculo da densidade populacional automaticamente.

Menu interativo com switch para seleção de atributo de comparação:

População

Área

PIB

Pontos Turísticos

Densidade Populacional (vence a menor)

Comparação e exibição do resultado com:

Nome das cidades

Valor de cada atributo

Carta vencedora ou empate

📌 Como executar

Compile o programa:

gcc super_trunfo.c -o super_trunfo

Execute o programa:

./super_trunfo

Siga as instruções no terminal para cadastrar as cartas e escolher o atributo de comparação.

🧠 Regras de comparação

A carta com o maior valor no atributo vence.

Exceção: na densidade populacional, vence a menor.

💡 Exemplo de uso

Escolha um atributo para comparar:
1 - Populacao
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Populacional (vence o menor)
Opcao: 5

Comparacao de cartas (Atributo: Densidade Populacional)
Carta 1 - Fortaleza (CE): 2000.50
Carta 2 - Curitiba (PR): 1800.20
Resultado: Carta 2 (Curitiba) venceu!

📁 Estrutura do projeto

super_trunfo.c – Código-fonte principal do jogo.

README.md – Documentação do projeto.

🚀 Possíveis melhorias futuras

Suporte a múltiplas cartas.

Sistema de pontuação.

Interface gráfica (CLI melhorada ou GUI).

Validação mais robusta das entradas.

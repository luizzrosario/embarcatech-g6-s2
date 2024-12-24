# embarcatech-g6-s2

Repositório para tarefa do Grupo 6 - Subgrupo 2

---

## Objetivo

O objetivo deste programa é ser um **conversor geral de unidades**.

---

## Funcionalidades

O programa contém as seguintes opções: 

1. **Unidades de comprimento**
2. **Unidades de massa**
3. **Unidades de volume**
4. **Unidades de temperatura**
5. **Unidades de velocidade (no aguardo)**
6. **Unidades de potência (no aguardo)**
7. **Unidades de área**
8. **Unidades de tempo**
9. **Unidades de dados**
0. **Sair**

---

## Estrutura do Programa

O programa gira em torno de uma interface no terminal que utiliza um sistema de `switch-case` para direcionar o fluxo às funções específicas que realizam as conversões desejadas.

---

## Relatório

    O desenvolvimento do projeto foi marcado por reuniões colaborativas que impulsionaram o progresso do trabalho e definiram estratégias de organização. Durante o primeiro encontro, realizado em 18 de dezembro de 2024, foram discutidas ideias iniciais e organizada a estrutura de trabalho. Luiz Rosário foi escolhido como líder semanal e criou o repositório do projeto no GitHub, sugerindo o uso de branches individuais para cada integrante. Além disso, definiu-se que cada membro implementaria uma função específica do programa e realizaria commits para documentar suas contribuições.
    No segundo encontro, em 20 de dezembro de 2024, o grupo avaliou o progresso e identificou que boa parte das funcionalidades já estava quase concluída, com exceção das conversões relacionadas às unidades de velocidade e potência, que ainda estavam pendentes. Problemas técnicos, como conflitos de código, foram resolvidos colaborativamente, o que ajudou a padronizar a integração entre os módulos. Houve discussões técnicas sobre a conversão de funções para void, remoção de retornos desnecessários e ajustes na interface do programa.
    A padronização foi outro ponto de destaque no projeto. O grupo adotou a convenção CamelCase para nomear os arquivos de cabeçalho (.h), como unidadeDeArea.h e unidadeDeArmazenamento.h, garantindo consistência e clareza nos nomes. Além disso, a organização modular do código, com a separação de funções específicas em arquivos dedicados, permitiu maior colaboração e facilidade na manutenção futura do programa.

------------Parte referente ao conversor de unidades de area-------------

O programa é feito utilizado o metro quadrado como base para conversão. Ela é feita em dois passos:

1 - Multiplicamos o valor da área escolhida pelo usuário, pelo fator de conversão correspondente à unidade de origem (exemplo: 1 km² = 1.000.000 m²). Isso normaliza o valor para a unidade base, que é o metro quadrado.

Valor em metros = valor * fator Origem

O fator origem é o equivalente em metros quadrados de cada unidade do programa.

2 - Para a unidade de destino: Dividimos o valor em metros quadrados pelo fator de conversão correspondente à unidade de destino (exemplo: 1 hectare = 10.000 m²).

Valor Convertido = valor em metros / fator Destino

Isso permite fazer a conversão diretamente com qualquer valor, utilizando o metro quadrado como base.

--------Execução do conversão de unidades de Área--------------

1- O usuário escolhe o valor que deseja que seja convertido.
2 - Escolhe entre as 14 opções de unidade de medida do valor escolhido.
3 - Escolhe entre as 14 opções da unidade de medida da conversão.

Exemplo:

Bem-vindo ao Conversor de Unidades de Área!
Escolha uma das opções abaixo:
1. Metro Quadrado (m²)
2. Centímetro Quadrado (cm²)
3. Quilômetro Quadrado (km²)
4. Hectare (ha)
5. Decâmetro Quadrado (dam²)
6. Milímetro Quadrado (mm²)
7. Polegada Quadrada (in²)
8. Pé Quadrado (ft²)
9. Jarda Quadrada (yd²)
10. Milha Quadrada (mi²)
11. Acre (ac)
12. Unidade Astronômica (UA²)
13. Parsec Quadrado (pc²)
14. Ano Luz Quadrado (ly²)

Digite o valor da área a ser convertida: 10 
Escolha a unidade de origem (1-14): 4
Escolha a unidade de destino (1-14): 1

O valor convertido é: 100000.0000000000 m²

Deseja realizar outra conversão? (s/n): n
Programa encerrado. Obrigado por utilizar o conversor de unidades de área!



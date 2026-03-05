# 🔁 Aninhamento de Repetições

## 1) O que é

O **aninhamento de repetições** ocorre quando utilizamos **uma ou mais estruturas de repetição dentro de outra estrutura de repetição**.

Isso significa que um **laço (loop)** é executado **dentro de outro laço**.

Esse tipo de estrutura é muito utilizado para:

- trabalhar com **matrizes**
- gerar **padrões de impressão**
- percorrer **linhas e colunas**
- resolver problemas que envolvem **duas ou mais dimensões**

---

## 2) Exemplo

```c
#include <stdio.h>

int main(){

    int i, j;

    for (i = 1; i < 5; i++){
        for (j = 1; j < 5; j++){

            if (i == j){
                printf("1 ");
            }
            else{
                printf("0 ");
            }

        }

        printf("\n");
    }

    return 0;
}
```

---

## 3) Funcionamento do código

Neste exemplo existem **dois loops `for`**:

- O **primeiro `for`** controla as **linhas**
- O **segundo `for`** controla as **colunas**

A cada repetição do primeiro `for`, o segundo `for` executa **todas as suas repetições**.

Fluxo simplificado:

1. `i` controla a **linha**
2. `j` percorre todas as **colunas**
3. Se `i == j`, imprime **1**
4. Caso contrário, imprime **0**

---

## 4) Saída do programa

```
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1
```

Esse padrão forma uma **matriz identidade**, onde os elementos da **diagonal principal são 1** e os demais são **0**.

---

## 5) Observação

Também seria possível fazer o mesmo exemplo utilizando:

- **`while` aninhados**
- **`for` dentro de `while`**
- **`while` dentro de `for`**

Exemplo de mistura de estruturas:

```c
for(i = 1; i < 5; i++){

    j = 1;

    while(j < 5){
        // comandos
        j++;
    }

}
```

Ou seja, **estruturas de repetição podem ser combinadas entre si** dependendo da necessidade do programa.

---

## ✔ Conclusão

O **aninhamento de repetições** é um conceito fundamental da programação, pois permite resolver problemas mais complexos que envolvem:

- múltiplas dimensões
- comparação entre elementos
- geração de padrões
- manipulação de matrizes
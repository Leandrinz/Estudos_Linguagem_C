# 🧮 Matrizes

## 1) O que é

Uma **matriz** é uma estrutura semelhante a um **vetor**, porém organizada em **linhas e colunas**.

Podemos pensar em uma matriz como um **vetor de vetores**.

Cada elemento da matriz é acessado por **dois índices**:

- um para a **linha**
- outro para a **coluna**

Exemplo de representação:

```
[ linha ][ coluna ]
```

---

## 2) Sintaxe

```c
#include <stdio.h>

int main(){

    float matriz[linhas][colunas];

    return 0;
}
```

Exemplo de declaração:

```c
float matriz[3][4];
```

Nesse caso:

- `3` → quantidade de **linhas**
- `4` → quantidade de **colunas**

---

## 3) Como preencher uma matriz

Podemos usar **laços de repetição aninhados** para percorrer as linhas e colunas da matriz.

```c
#include <stdio.h>

int main(){

    int mat[10][5];
    int i, j;

    for (i = 0; i < 10; i++){
        for (j = 0; j < 5; j++){

            printf("Digite mat[%d][%d]: \n", i, j);
            scanf("%d", &mat[i][j]);

        }
    }

    return 0;
}
```

---

## 4) Funcionamento do exemplo

No código acima:

- `i` controla as **linhas**
- `j` controla as **colunas**

O primeiro `for` percorre cada **linha da matriz**.

O segundo `for` percorre cada **coluna daquela linha**, permitindo acessar todos os elementos.

---

## 5) Observação

Assim como nos vetores, **os índices das matrizes começam em 0**.

Exemplo:

Se declararmos:

```c
int matriz[3][3];
```

Os índices válidos serão:

```
matriz[0][0]  matriz[0][1]  matriz[0][2]
matriz[1][0]  matriz[1][1]  matriz[1][2]
matriz[2][0]  matriz[2][1]  matriz[2][2]
```

---

## ✔ Conclusão

As **matrizes** permitem armazenar dados organizados em **linhas e colunas**, sendo muito utilizadas em situações que envolvem:

- tabelas de dados
- jogos (tabuleiros)
- cálculos matemáticos
- manipulação de grades ou mapas
# 📦 Vetores

## 1) O que é

Um **vetor** é um **conjunto de variáveis do mesmo tipo que compartilham o mesmo nome**, sendo diferenciadas apenas por um **índice (posição)**.

Os vetores permitem **armazenar vários valores em uma única estrutura**, facilitando o gerenciamento de grandes quantidades de dados.

Exemplo de uso:

- notas de alunos
- lista de idades
- temperaturas registradas
- pontuações de um jogo

---

## 2) Sintaxe

```c
#include <stdio.h>

int main(){

    tipo nome_vetor[tamanho];

    return 0;
}
```

### Exemplo

Para guardar as notas de **100 alunos**:

```c
float notas[100];
```

Nesse caso:

- `float` → tipo do vetor  
- `notas` → nome do vetor  
- `100` → quantidade de posições no vetor  

---

## 3) Índices

Os **índices** representam as **posições do vetor**.

Cada posição pode armazenar **um valor diferente**.

### Exemplo

```c
float notas[3];

notas[0] = 10;
notas[1] = 9;
notas[2] = 8;
```

Perceba que cada **índice recebeu um valor distinto**.

---

## 4) Observação Importante

Os vetores em C **sempre começam no índice 0**.

Isso significa que:

Se declararmos um vetor com **tamanho 4**:

```c
int vetor[4];
```

Os índices válidos serão:

```
vetor[0]
vetor[1]
vetor[2]
vetor[3]
```

Ou seja:

- tamanho do vetor → `4`
- maior índice possível → `3`

Isso acontece porque a contagem **começa em 0**.

---

## ✔ Conclusão

Vetores são estruturas fundamentais da programação, pois permitem **armazenar múltiplos valores do mesmo tipo em uma única variável**, organizados através de **índices**.
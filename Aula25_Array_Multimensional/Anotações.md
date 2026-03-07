# 🧊 Array Multidimensional

## 1) O que é

Um **array multidimensional** é um array que possui **mais de duas dimensões**.

Enquanto uma **matriz** tem duas dimensões (linha e coluna), arrays multidimensionais podem ter **três, quatro ou mais dimensões**, dependendo da necessidade.

---

## 2) Sintaxe

```c
#include <stdio.h>

int main(){

    float cub[5][5][5]; // Array com 3 dimensões

    return 0;
}
```

---

## 3) Observações

- Cada dimensão adicional permite **representar estruturas mais complexas**.
- Um array 3D pode ser imaginado como **um cubo**, onde cada “plano” é uma matriz.
- O acesso aos elementos é feito com **uma posição por dimensão**:

```c
cub[linha][coluna][profundidade]
```

- Arrays com mais de 3 dimensões seguem o mesmo padrão, mas a visualização se torna mais abstrata.

---

## ✔ Conclusão

Arrays multidimensionais são úteis quando precisamos representar **estruturas complexas**, como:

- cubos de dados
- tabelas 3D
- simulações espaciais
- jogos com várias camadas
# Comando de Repetição: `while`

## 1) O que é

O `while` é um **comando de repetição** que permite executar um conjunto de comandos **enquanto uma condição for verdadeira**.

Ele é usado quando precisamos realizar tarefas repetitivas e **não sabemos exatamente quantas vezes o bloco deverá ser executado** — apenas sabemos que ele continuará enquanto a condição for verdadeira.

A repetição só para quando:

- A condição se torna **falsa**, ou  
- Um comando `break` é executado dentro do bloco.

---

## 2) Sintaxe

```c
while (condicao) {
    conjunto_de_comandos;
}
```

---

## 📌 Funcionamento

1. A condição é testada **antes** de executar o bloco.
2. Se for **verdadeira**, o bloco é executado.
3. Ao final da execução, a condição é testada novamente.
4. Isso se repete até que a condição seja **falsa**.

---

## ⚠️ Cuidado: Loop Infinito

Se a condição **nunca se tornar falsa**, o programa entrará em um **loop infinito**.

Exemplo de erro:

```c
int i = 0;

while (i < 5) {
    printf("Olá\n");
}
```

Aqui, `i` nunca é incrementado, então a condição sempre será verdadeira.

---

## ✅ Exemplo Correto

```c
int i = 0;

while (i < 5) {
    printf("Valor de i: %d\n", i);
    i++; // Atualiza a variável de controle
}
```

Saída:
```
Valor de i: 0
Valor de i: 1
Valor de i: 2
Valor de i: 3
Valor de i: 4
```


# Operador Ternário `?`

## 1) O que é

O **operador ternário (`?`)** é um operador condicional que permite atribuir **um entre dois valores** a uma variável, dependendo do resultado de uma condição.

Ele é uma forma simplificada de escrever um `if...else`.

---

## 2) Sintaxe

```c
int x = condição ? expressão_1 : expressão_2;
```

### 📌 Funcionamento

- Se a **condição for verdadeira**, `x` recebe `expressão_1`.
- Se a **condição for falsa**, `x` recebe `expressão_2`.

### ✅ Exemplo

```c
int maior = (a > b) ? a : b;
```

Se `a` for maior que `b`, `maior` recebe `a`.  
Caso contrário, recebe `b`.

---

## 3) Usando sem variável

Também pode ser usado diretamente para executar expressões:

```c
(x > y) ? printf("X é o maior.\n")
        : printf("Y é o maior.\n");
```

---

## 🔎 Equivalente com if...else

```c
if (x > y) {
    printf("X é o maior.\n");
} else {
    printf("Y é o maior.\n");
}
```

>[!TIP]
>  **DICA**: Use o operador ternário apenas para condições simples. Se a lógica for muito complexa, o if-else tradicional é melhor para manter o código legível.
# Estrutura Condicional: Else

### 1) O que é:
* **Complemento:** O `else` (senão) é o complemento opcional do comando `if`.
* **Fluxo:** Ele define um bloco de código que deve ser executado **apenas** quando a condição do `if` não é satisfeita (ou seja, quando o resultado da expressão for **falso**).

### 2) Sintaxe:
```c
if (condicao) {
    // Bloco executado se a condição for VERDADEIRA
    bloco_de_comandos_1;
} 
else {
    // Bloco executado se a condição for FALSA
    bloco_de_comandos_2;
}
```

---
> [!WARNING]
> Nunca colocamos parênteses ou condições diretamente no else! Ele é o "caso contrário" absoluto do if que o precede.
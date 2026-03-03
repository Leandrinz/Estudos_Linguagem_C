# Switch

## 1) O que é

A estrutura `switch` é uma **estrutura de controle condicional** usada na programação para selecionar e executar um bloco de código específico entre múltiplas opções (`case`), baseando-se no valor de uma única expressão ou variável.

Ela é uma alternativa mais organizada ao uso de vários `if...else if`.

---

## 2) Sintaxe

```c
switch (variavel) {
    case valor1:
        conjunto_de_comandos;
        break;

    case valor2:
        conjunto_de_comandos;
        break;

    case valorN:
        conjunto_de_comandos;
        break;

    default:
        conjunto_de_comandos;
}
```

---

## 📌 Funcionamento

- O `switch` avalia o valor da variável.
- Se o valor corresponder a algum `case`, o bloco de comandos daquele `case` será executado.
- O `break` é usado para impedir que o programa continue executando os próximos casos.
- O `default` será executado caso **nenhum `case` seja satisfeito**.

---

## ✅ Exemplo

```c
int opcao = 2;

switch (opcao) {
    case 1:
        printf("Você escolheu a opção 1.\n");
        break;

    case 2:
        printf("Você escolheu a opção 2.\n");
        break;

    case 3:
        printf("Você escolheu a opção 3.\n");
        break;

    default:
        printf("Opção inválida.\n");
}
```
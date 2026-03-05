# 🔁 Comando de Repetição `do-while`

## 1) O que é

O **`do-while`** é um comando de repetição que permite executar um conjunto de comandos **repetidamente e ao menos uma vez**, de acordo com uma condição.

A principal característica dessa estrutura é que **a verificação da condição ocorre apenas no final do bloco**, garantindo que o código seja executado **pelo menos uma vez**, mesmo que a condição seja falsa.

---

## 2) Sintaxe

```c
#include <stdio.h>

int main(){
    
    do{
        // conjunto de comandos
    }while (condição);

    return 0;
}
```

---

## 3) Funcionamento

O `do-while` funciona da seguinte forma:

1. Executa o **bloco de comandos**
2. Verifica a **condição**
3. Se a condição for **verdadeira**, o bloco é executado novamente
4. Se a condição for **falsa**, o loop é encerrado

Ou seja, **a execução sempre ocorre pelo menos uma vez**.

---

## 4) Exemplo

Programa que imprime números de **1 a 5**:

```c
#include <stdio.h>

int main(){

    int i = 1;

    do{
        printf("%d\n", i);
        i++;
    }while(i <= 5);

    return 0;
}
```

### Saída

```
1
2
3
4
5
```

---

## 5) Diferença para `while`

| Estrutura | Verificação da condição |
|------|------|
| `while` | Antes de executar o bloco |
| `do-while` | Depois de executar o bloco |

Exemplo de situação em que o `do-while` é útil:

- menus de programas
- validação de entrada do usuário
- repetir perguntas até obter resposta válida

---

## ✔ Conclusão

O `do-while` é utilizado quando queremos garantir que **um bloco de código seja executado pelo menos uma vez**, independentemente da condição inicial.
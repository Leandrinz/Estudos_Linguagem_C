# ⏭️ Comando `continue`

## 1) O que é

O **`continue`** é um comando que **interrompe apenas a iteração atual de um laço de repetição** e faz o programa **passar imediatamente para a próxima repetição do loop**.

Diferente do `break`, que **encerra o laço completamente**, o `continue` apenas **ignora o restante do código da repetição atual**.

Ele pode ser usado em estruturas como:

- `for`
- `while`
- `do-while`

---

## 2) Sintaxe

```c
#include <stdio.h>

int main(){

    repeticao(condicao1){

        if (condicao2){
            continue; // Ignora o restante da repetição atual
        }

    }

    return 0;
}
```

---

## 3) Funcionamento

O `continue` funciona da seguinte forma:

1. O loop está executando normalmente
2. Uma condição dentro do laço é verificada
3. Se essa condição for verdadeira, o `continue` é executado
4. O restante do código daquela repetição é **ignorado**
5. O loop passa **diretamente para a próxima iteração**

---

## 4) Exemplo

```c
#include <stdio.h>

int main(){

    int i;

    for(i = 0; i < 5; i++){

        if(i == 2){
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}
```

### Saída

```
0
1
3
4
```

O número **2 não foi impresso**, porque quando `i == 2` o `continue` foi executado.

---

## 5) Observação

O `continue` **não encerra o laço**, apenas **pula a execução do restante da repetição atual**.

Ou seja:

- `break` → **encerra o loop**
- `continue` → **pula para a próxima repetição**

---

## ✔ Conclusão

O `continue` é útil quando queremos **ignorar certas situações dentro de um loop**, sem precisar interromper toda a estrutura de repetição.
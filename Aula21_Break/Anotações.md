# ⛔ Comando `break`

## 1) O que é

O **`break`** é um comando utilizado para **interromper imediatamente um laço de repetição**.

Quando o `break` é executado, o programa **sai do loop** e continua a execução **na próxima instrução após o laço**.

Ele pode ser usado em estruturas como:

- `for`
- `while`
- `do-while`
- `switch`

---

## 2) Sintaxe

```c
#include <stdio.h>

int main(){

    repeticao(condicao1){

        if(condicao2){
            break; // Pula para fora do laço de repetição
        }

    }

    return 0;
}
```

---

## 3) Funcionamento

O `break` funciona da seguinte forma:

1. O loop está executando normalmente
2. Uma condição é verificada dentro do laço
3. Quando essa condição é verdadeira, o `break` é executado
4. O programa **sai imediatamente do loop**

---

## 4) Exemplo

```c
#include <stdio.h>

int main(){

    int i;

    for(i = 0; i < 10; i++){

        if(i == 5){
            break;
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
2
3
4
```

O loop foi interrompido quando `i` chegou a **5**.

---

## 5) Observação

O `break` **encerra apenas o laço mais interno** onde ele está.

Exemplo em loops aninhados:

```c
for(int i = 0; i < 3; i++){

    for(int j = 0; j < 3; j++){

        if(j == 1){
            break;
        }

        printf("i=%d j=%d\n", i, j);
    }

}
```

Nesse caso, o `break` interrompe **apenas o segundo `for`**, não o primeiro.

---

## ✔ Conclusão

O `break` é útil quando precisamos **interromper um loop antes que a condição principal seja atingida**, geralmente quando uma condição específica ocorre dentro da repetição.
# 🔁 Comando de Repetição `for`

---

# 1) O que é

O **`for`** é um **comando de repetição** utilizado na programação para executar repetidamente um conjunto de comandos **enquanto uma condição for verdadeira**.

Ele é muito usado quando **sabemos previamente quantas vezes um bloco de código precisa ser executado**.

Exemplos de uso:

- contar números
- percorrer vetores
- repetir cálculos
- gerar sequências

---

# 2) Sintaxe

```c
#include <stdio.h>

int main(){

    for (inicialização; condição; incremento){
        conjunto de comandos
    }

    return 0;
}
```
---

## 3) Estrutura do `for`

O comando `for` possui **três partes principais**:

| Parte | Função |
|------|------|
| Inicialização | Cria e inicializa a variável de controle |
| Condição | Define até quando o loop continuará |
| Incremento | Atualiza a variável a cada repetição |

### Estrutura geral

```c
for (inicialização; condição; incremento)
```

### Exemplo

```c
for(int i = 0; i < 10; i++)
```

- `int i = 0` → inicialização  
- `i < 10` → condição  
- `i++` → incremento  

---

## 4) Funcionamento do `for`

O `for` executa na seguinte ordem:

1. Executa a **inicialização** (apenas uma vez)

2. Verifica a **condição**

3. Se a condição for **verdadeira**, executa o bloco de código

4. Executa o **incremento**

5. Volta para verificar a **condição novamente**

Esse processo continua até que a **condição se torne falsa**.
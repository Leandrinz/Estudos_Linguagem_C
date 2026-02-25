# Pré e Pós Incremento

1) **X--** :
    * Mesma coisa que `X = X - 1` (Decremento).

2) **X++** :
    * Mesma coisa que `X = X + 1` (Incremento).

---

### Diferença entre Pré e Pós (em C):

* **Pós-fixado (x++ / x--)**: O valor da variável é usado na expressão primeiro e **depois** é incrementado/decrementado.
* **Pré-fixado (++x / --x)**: O valor da variável é incrementado/decrementado **antes** de ser usado na expressão.

**Exemplo prático:**
```c
int x = 5;
int y = x++; // y recebe 5, x vira 6

int a = 5;
int b = ++a; // a vira 6, b recebe 6
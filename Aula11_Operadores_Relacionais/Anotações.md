# Operadores Relacionais

Estes operadores são utilizados para comparar dois valores. O resultado de uma operação relacional é sempre um valor booleano (verdadeiro ou falso). Em linguagem C, `0` representa falso e qualquer valor diferente de zero (geralmente `1`) representa verdadeiro.

### 1) Tipos:

| Operador | Significado | Exemplo (`x = 10, y = 5`) |
| :---: | :--- | :--- |
| `>` | Maior do que | `x > y` (Verdadeiro) |
| `>=` | Maior ou igual a | `x >= 10` (Verdadeiro) |
| `<` | Menor do que | `x < y` (Falso) |
| `<=` | Menor ou igual a | `y <= 2` (Falso) |
| `==` | Igual a | `x == y` (Falso) |
| `!=` | Diferente de | `x != y` (Verdadeiro) |

> [!CAUTION]
> **Cuidado:** Não confunda o operador de atribuição `=` (que dá um valor) com o operador de comparação `==` (que testa se os valores são iguais).
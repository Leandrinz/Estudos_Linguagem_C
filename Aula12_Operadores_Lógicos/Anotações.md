# Operadores Lógicos

Os operadores lógicos são usados para combinar ou inverter expressões relacionais. Em C, assim como nos relacionais, `0` é Falso e `1` (ou qualquer valor diferente de 0) é Verdadeiro.

### 1) E (AND) -> `&&`
* **Sintaxe:** `expressao1 && expressao2`
* **Regra:** Resulta em **Verdadeiro** apenas se **ambas** as condições forem verdadeiras.

### 2) OU (OR) -> `||`
* **Sintaxe:** `expressao1 || expressao2`
* **Regra:** Resulta em **Verdadeiro** se **pelo menos uma** das condições for verdadeira.

### 3) Negação (NOT) -> `!`
* **Sintaxe:** `!expressao`
* **Regra:** Inverte o valor lógico. Se algo é Verdadeiro, vira Falso. Se é Falso, vira Verdadeiro.

---

### 4) Tabela Verdade

| A | B | A && B (E) | A \|\| B (OU) | !A (Negação) |
| :---: | :---: | :---: | :---: | :---: |
| V | V | **V** | **V** | F |
| V | F | F | **V** | F |
| F | V | F | **V** | V |
| F | F | F | F | V |

---

### Ordem de Precedência Geral
Quando aparecem vários operadores juntos, a ordem de execução é:
1. `!` (Negação)
2. Operadores Aritméticos (`*`, `/`, `%` depois `+`, `-`)
3. Operadores Relacionais (`>`, `<`, etc.)
4. `&&` (E)
5. `||` (OU)
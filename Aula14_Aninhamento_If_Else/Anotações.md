# Aninhamento if-else

O aninhamento é utilizado quando temos **mais de 2 possibilidades** de caminhos no código, colocando uma estrutura condicional dentro de outra.

### 1) Sintaxe:
```c
if (condicao1) {
    // Bloco executado se condicao1 for VERDADEIRA
    bloco_1;
} 
else {
    // Entra aqui se a condicao1 for FALSA
    if (condicao2) {
        // Bloco executado se condicao2 for VERDADEIRA
        bloco_2;
    } 
    else {
        // Bloco executado se AMBAS forem FALSAS
        bloco_3;
    }
}
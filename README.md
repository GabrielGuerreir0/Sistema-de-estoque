# Sistema de Gerenciamento de Estoque (SGC)

## Descrição

O Sistema de Gerenciamento de Estoque (SGC) é uma aplicação desenvolvida em C que facilita o gerenciamento de produtos e usuários em um sistema de estoque. O sistema é projetado para suportar funcionalidades específicas para usuários comuns e administradores, permitindo um gerenciamento eficiente e organizado de produtos e pedidos.

## Funcionalidades

### Para Usuários Comuns
- **Fazer Pedidos**: Realizar pedidos de produtos disponíveis no estoque.
- **Exibir Produtos**: Consultar a lista de produtos disponíveis no estoque.
- **Exibir Pedidos**: Verificar a lista de pedidos realizados por usuários.

### Para Administradores
- **Adicionar Produtos**: Inserir novos produtos no estoque, incluindo nome, preço e quantidade.
- **Adicionar Usuários**: Incluir novos usuários no sistema com nível de privilégio e senha.
- **Excluir Usuários**: Remover usuários existentes do sistema.
- **Cancelar Pedidos**: Cancelar pedidos previamente realizados, se necessário.
- **Exibir Pedidos**: Consultar todos os pedidos feitos pelos usuários.

## Arquivos Principais

- **`main.c`**: Contém a função principal do programa e o menu de opções para o usuário.
- **`sgc.h`**: Arquivo de cabeçalho que declara as funções utilizadas no sistema.
- **`sgc.c`**: Implementação das funções que realizam as operações descritas no sistema.

## Estrutura de Código

### `main.c`

O arquivo `main.c` contém a função principal do programa, que apresenta um menu interativo para o usuário. Dependendo da escolha do usuário, o sistema executa as funções apropriadas para usuários comuns ou administradores.

### `sgc.h`

O arquivo `sgc.h` define as funções disponíveis no sistema, como:
- `FazerPedido()`
- `ExibirListaProdutos()`
- `AdicaoProduto()`
- `ExibirPedidosUsuarios()`
- `AdicionarUsuario()`
- `ExcluirUsuario()`
- `ExcluirPedidoComunicacao()`

### `sgc.c`

O arquivo `sgc.c` implementa as funções declaradas em `sgc.h`. As principais funções incluem:
- **AdicaoProduto()**: Adiciona produtos ao estoque após verificação de senha e privilégio.
- **AdicionarUsuario()**: Adiciona novos usuários ao sistema com senha e nível de privilégio.
- **ExcluirUsuario()**: Remove usuários do sistema.
- **ExcluirPedidoComunicacao()**: Cancela pedidos e atualiza o estoque conforme necessário.
- **AtualizarEstoque()**: Atualiza o estoque com base em pedidos realizados.
- **SalvarPedido()**: Registra pedidos realizados.
- **FazerPedido()**: Realiza pedidos e atualiza o estoque.

## Como Usar

1. **Compilar o Código**
   Para compilar o projeto, use o comando:
   ```sh
   gcc main.c sgc.c -o sgc

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sgc.h"

int main()
{
    int controler = 1;
    int usuario;

    while (controler == 1)
    {
        printf("\n----------Por favor escolha sua acao no sistema----------\n\n");

        printf("que tipo de usuario e voce? (1-Comum/2-Administrador/3-Sair do sistema) \n");
        scanf("%d", &usuario);
        switch (usuario)
        {
        case 1:
            printf(" 1- faca pedidos de produtos.\n 2-  Exiba a lista de produtos disponiveis no estoque.\n 3- Exiba a lista de pedidos feitos pelos usuarios\n");
            int escolha1;
            scanf("%d",&escolha1);

            switch (escolha1)
            {
            case 1:
                    FazerPedido();
                break;
            case 2:
                    ExibirListaProdutos();
                break;
            case 3:
                    ExibirPedidosUsuarios();
                break;
            default:
                break;
            }

            break;

        case 2:
            printf(" 1- Adicionar novos produtos ao estoque.\n 2- Exibir a lista de produtos disponiveis no estoque.\n 3- Adicinar novos usuarios ao sistema.\n 4- Excluir usuario do sistema.\n 5- Faca pedidos de produtos.\n 6- Cancele pedido de produtos.\n 7- Exibir a lista de pedidos feitos pelos usuarios.\n");
            int escolha2;
            scanf("%d",&escolha2);
            switch (escolha2)
            {
            case 1:
                    AdicaoProduto();
                break;
            case 2:
                    ExibirListaProdutos();
                break;
            case 3:
                    AdicionarUsuario();
                break;
            case 4:
                    ExcluirUsuario();
                break;
            case 5:
                    FazerPedido();
                break;
            case 6:
                    ExcluirPedidoComunicacao();
                break;
            case 7:
                    ExibirPedidosUsuarios();
                break;
            default:
                break;
            }
            break;

        case 3:
        printf("saindo do sistema!!\n");
            exit(0);

        default:
            break;
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){

    Node *root=NULL;
    
    int N, value;

    printf("N= ");
    scanf("%d",&N);

    printf("Tree elements:\n");
    for(int i=0; i<N; i++){
        scanf("%d",&value);

        root=addNode(value, root);
    }

    printf("Tree height=> %d\n",height(root));

    printf("Print preorder:  "); // Root -> Left -> Right
    Preorder(root);

    printf("\nPrint inorder:  "); //  Left -> Root -> Right
    Inorder(root);

    printf("\nPrint postorder:  "); //  Left -> Right -> Root
    Postorder(root);

    return 0;
}

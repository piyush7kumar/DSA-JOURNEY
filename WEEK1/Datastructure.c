#include <stdio.h>

int main()
{
    int choice;

    printf("1. Array\n");
    printf("2. Linked List\n");
    printf("3. Tree\n");
    printf("4. Graph\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nArray is \n");
            printf("Static,\n");
            printf("Linear,\n");
            printf("Non-Primitive\n");
            break;

        case 2:
            printf("\nLinked List is\n");
            printf("Dynamic,\n");
            printf("Linear,\n");
            printf("Non-Primitive\n");
            break;

        case 3:
            printf("\nTree is \n");
            printf("Non-Linear,\n");
            printf("Non-Primitive\n");
            break;

        case 4:
            printf("\nGraph is \n");
            printf("Non-Linear,\n");
            printf("Non-Primitive\n");
            break;

        default:
            printf("Invalid choice");
    }
    return 0;
}
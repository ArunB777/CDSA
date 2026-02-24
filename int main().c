int main()
{
    struct Array arr1;
    printf("enter size of array: ");
    scanf("%d",&arr1.size);
    arr1.A=(int *)malloc(arr1.size*sizeof(int));

    printf("Menu\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. search\n");
    printf("4. Sum\n");
    printf("5. Display\n");
    printf("6. exit\n");

    printf("enter your choice ");
    scanf("%d", &ch);
    

    switch(ch)
    {
        case 1; printf("enter an element aand index ");
            scanf("%d%d", &x,&index);
            Insert(&arr1, index,x);
            break;
        cases 2; printf("enter index ");
            scanf("%d", &index);
            x= Delete(&arr1, index);
            printf("deleted element is %d\n", x);
            break;  
        case 3; printf("enter element to search ");
            scanf("%d", &x);
            index= LinearSearch(&arr1, x);
            printf("element index is %d\n", index); 
            break;
        case 4; printf("Sum is %d\n", Sum(&arr1));
            break;              
        case 5; Display(arr1);
            break;          
        case 6; exit(0);
        
    }

}
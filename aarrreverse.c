 #include<stdio.h>
 #include<stdlib.h>
 struct Array
 {
    int A[10];
    int size;
    int length;
 };

 void Display(struct Array arr)
 {
    int i;
    printf("\n Elements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);

 }

 void swap(int *x, int *y)
 {
    int temp = *x;
    *x = *y;
    *y = temp;
 };

 void Reverse(struct Array *arr)
 {
    int *B;
    int i,j;

    B=(int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++)
        B[j]=arr->A[i];
    for(i=0;i<arr->length;i++)
        arr->A[i]=B[i];
 }

 void Reverse2(struct Array *arr)
 {
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(&arr->A[i],&arr->A[j]);
    }
 }
 
 void InsertSort(struct Array *arr, int x)
 {
   int i=arr->length-1;

   if(arr->length==arr->size)
       return;
   while(i>=0 &&arr->A[i]>x)
   {
      arr->A[i+1]=arr->A[i];
      i--;
   }
   arr->A[i+1]=x;
   arr->length++;

 }

 int isSorted(struct Array arr)
 {
   int i;
   for(i=0;i<arr.length-1;i++)
   {
      if(arr.A[i]>arr.A[i+1])
         return 0;

   }
   return 1;
 }


void Rearrange(struct Array *arr)
{
   int i,j;
   j=arr->length-1;
   while(i<j)
   {
      while(arr->A[i]<0) i++;
      while(arr->A[j]>=0) j--;
      if(i<j)swap(&arr->A[i],&arr->A[j]);
   }
}

struct Array * Merge(struct Array *arr1,struct Array *arr2)
{
   int i,j,k;
   i=j=k=0;

   struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
   while(i,arr1->length && j<arr2->length)
   {
      if(arr1->A[i]<arr2->A[j])
          arr3->A[k++]=arr1->A[i++];
      else
          arr3->A[k++]=arr2->A[j++];
   }
   for(;i<arr1->length;i++)
       arr3->A[k++]=arr1->A[i];
   for(;j<arr2->length;j++)
       arr3->A[k++]=arr2->A[j];
   arr3->length=arr1->length+arr2->length;
   arr3->size=10;
   return arr3;

}
struct Array * Union(struct Array *arr1,struct Array *arr2)
{
   int i,j,k;
   i=j=k=0;

   struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
   while(i,arr1->length && j<arr2->length)
   {
      if(arr1->A[i]<arr2->A[j])
          arr3->A[k++]=arr1->A[i++];
      else if(arr2->A[j]<arr1->A[i])
          arr3->A[k++]=arr2->A[j++];
      else
          arr3->A[k++]=arr1->A[i++];
          j++;
   }
   for(;i<arr1->length;i++)
       arr3->A[k++]=arr1->A[i];
   for(;j<arr2->length;j++)
       arr3->A[k++]=arr2->A[j];
   arr3->length=arr1->length+arr2->length;
   arr3->size=10;
   return arr3;

}

 int main()
 {
    struct Array arr1 ={{2, 6, 10, 15, 25},10, 5};
    struct Array arr2= {{3, 6, 15, 4, 7, 18, 20},10,5};
    struct Array *arr3;
    arr3=Merge(&arr1,&arr2);
    Display(*arr3);
    return 0;
    
 }
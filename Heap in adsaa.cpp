#include <stdio.h>

#define MAX 100

int maxHeap[MAX], minHeap[MAX];
int maxSize = 0, minSize = 0;

// Swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//-------------------- MAX HEAP --------------------//

void insertMax(int value)
{
    int i = maxSize;
    maxHeap[maxSize++] = value;

    while (i != 0 && maxHeap[(i - 1) / 2] < maxHeap[i])
    {
        swap(&maxHeap[(i - 1) / 2], &maxHeap[i]);
        i = (i - 1) / 2;
    }
}

void maxHeapify(int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < maxSize && maxHeap[left] > maxHeap[largest])
        largest = left;

    if (right < maxSize && maxHeap[right] > maxHeap[largest])
        largest = right;

    if (largest != i)
    {
        swap(&maxHeap[i], &maxHeap[largest]);
        maxHeapify(largest);
    }
}

int deleteMax()
{
    if (maxSize == 0)
    {
        printf("Max Heap is Empty!\n");
        return -1;
    }

    int root = maxHeap[0];
    maxHeap[0] = maxHeap[maxSize - 1];
    maxSize--;

    maxHeapify(0);

    return root;
}

void displayMax()
{
    int i;
    printf("Max Heap: ");
    for (i = 0; i < maxSize; i++)
        printf("%d ", maxHeap[i]);
    printf("\n");
}

//-------------------- MIN HEAP --------------------//

void insertMin(int value)
{
    int i = minSize;
    minHeap[minSize++] = value;

    while (i != 0 && minHeap[(i - 1) / 2] > minHeap[i])
    {
        swap(&minHeap[(i - 1) / 2], &minHeap[i]);
        i = (i - 1) / 2;
    }
}

void minHeapify(int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < minSize && minHeap[left] < minHeap[smallest])
        smallest = left;

    if (right < minSize && minHeap[right] < minHeap[smallest])
        smallest = right;

    if (smallest != i)
    {
        swap(&minHeap[i], &minHeap[smallest]);
        minHeapify(smallest);
    }
}

int deleteMin()
{
    if (minSize == 0)
    {
        printf("Min Heap is Empty!\n");
        return -1;
    }

    int root = minHeap[0];
    minHeap[0] = minHeap[minSize - 1];
    minSize--;

    minHeapify(0);

    return root;
}

void displayMin()
{
    int i;
    printf("Min Heap: ");
    for (i = 0; i < minSize; i++)
        printf("%d ", minHeap[i]);
    printf("\n");
}

//-------------------- MAIN --------------------//

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n----- Heap Operations -----\n");
        printf("1. Insert into Max Heap\n");
        printf("2. Delete from Max Heap\n");
        printf("3. Display Max Heap\n");
        printf("4. Insert into Min Heap\n");
        printf("5. Delete from Min Heap\n");
        printf("6. Display Min Heap\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertMax(value);
                break;

            case 2:
                value = deleteMax();
                if (value != -1)
                    printf("Deleted Maximum Element = %d\n", value);
                break;

            case 3:
                displayMax();
                break;

            case 4:
                printf("Enter value: ");
                scanf("%d", &value);
                insertMin(value);
                break;

            case 5:
                value = deleteMin();
                if (value != -1)
                    printf("Deleted Minimum Element = %d\n", value);
                break;

            case 6:
                displayMin();
                break;

            case 7:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}

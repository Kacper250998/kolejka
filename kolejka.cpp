#define QUEUE_SIZE 5
int queue_table[QUEUE_SIZE] = {0};
int r_i=0;
int w_i=0;
int size=0;
int isQueueEmpty(void)
{
    return (size == 0) ? 1 : 0;
}

int isQueueFull(void)
{
    return (size == (QUEUE_SIZE)) ? 1 : 0;
}

int Pop(void)
{
    if (!isQueueEmpty())
    {
        r_i=(r_i+1)%(QUEUE_SIZE);
        size--;
        return queue_table[r_i - 1];

    }
    return queue_table[0];
}

int Top(void)
{
    if (!isQueueEmpty())
    {
        return queue_table[r_i];
    }

    return queue_table[0];
}

void Push(int val)
{
    if (!isQueueFull())
    {
        size++;
        queue_table[w_i] = val;
        w_i=(w_i+1)%(QUEUE_SIZE);
    }
}
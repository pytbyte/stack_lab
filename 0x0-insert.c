#define LIMIT 100
push(void)
{
int stack[LIMIT], top, element;
if (top == LIMIT - 1)
{
printf("Stack Overflow\n");
}
else
{
printf("Enter the element to be inserted:");
scanf("%d", &element);
top++;
stack[top] = element;
}
}

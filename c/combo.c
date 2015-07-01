#include <stdio.h>
#include <string.h>
typedef struct stack{
    int num;
    int top;
    int s[3];
}stack;
int print_stack(stack *s);
int push(int i,stack *s);
int pop(int *i,stack *s);
int init_stack(stack *s);
int combo(int m,int n);
int main()
{
    stack s;
    int i = 0;
    int temp = 5;
    init_stack(&s);
    push(temp,&s);
    while(1)
    {
        if(temp==1)                    
        {
            if(pop(&temp,&s) && get_stack(0,&s)==3)    
            {
                break;
            }
        }
        else if(push(--temp,&s))
        {
            print_stack(&s);       
			pop(&temp,&s);
        }
    }
}
int combo(int m,int n)
{
}
int print_stack(stack *s)
{
    int top = s->top;
	int begin = 0;
    while(begin<=top)
    {
        printf("%d\t",s->s[begin++]);
    }
    printf("\n");    
}
int push(int i,stack *s)
{
    if((s->top)>=(s->num-1))
    {
        return 1;
    }
    s->s[++(s->top)] = i;
    if((s->top)>=(s->num-1))
    {
        return 1;
    }
    return 0;
}
int pop(int *i,stack *s)
{
	if(s->top == -1)
	{
		return 0;
	}
    *i = s->s[(s->top)--];
    if(s->top==-1)
    {
        return 0;    
    }
    return 1;
}
int get_stack(int i,stack *s)
{
    if(i <= s->top )
    {
        return s->s[i];        
    }
    return -1;
}
int init_stack(stack *s)
{
    s->num = 3;    
    s->top = -1;
    memset(s->s,0,12);
}


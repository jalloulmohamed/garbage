#include  "garbage.h"
int main(int argc, char **argv)
{
    int i = 0;
    (void)argc;
    (void)argv;
    char *line ="mohamed jalloul";
    char *c;
    while(i < 10)
    {
        c = ft_substr(line,0,10);
        i++;
    }
    free_garbage();
    while(1);

}
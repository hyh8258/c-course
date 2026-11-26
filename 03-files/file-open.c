#include <stdio.h>

int key = 47;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s <in-file> <out-file>\n", argv[0]);
        return -1;
    }

    // do something here
    FILE *in_file = fopen(argv[1], "r");
    FILE *out_file = fopen(argv[2], "w");

    int c = 0;

    while ((c = getc(in_file)) != EOF)
    {
        // write the modified output
        putc(c ^ key, out_file);
    }

    fclose(in_file);
    fclose(out_file);

    return 0;
}  


#include <stdio.h>
struct s1
{
    char c1;
    double d;
    char c2;
};
struct s2
{
    char c1, c2;
    double d;
};
struct s3
{
    char c1;
    double d;
    char c2;
} __attribute__((packed));
struct s4
{
    char c1, c2;
    double d;
} __attribute__((packed));
struct s5
{
    double d;
    char c1, c2;
} __attribute__((packed));

int main()
{
    printf("%zu %zu %zu %zu %zu", sizeof(struct s1), sizeof(struct s2), sizeof(struct s3), sizeof(struct s4), sizeof(struct s5));
}
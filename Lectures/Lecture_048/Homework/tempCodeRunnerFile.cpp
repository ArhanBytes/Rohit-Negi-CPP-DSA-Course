void foo(int *i, int *j)
{
    *i = *i + *j;
    *j = *i - *j;
    *i = *i - *j;
}

int main()
{
    int a = 4, b = 5;
    foo(&a, &b);
    cout << a << " " << b;
}

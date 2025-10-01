
void l_to_u(string &str, int index)
{
    if (index == -1)
        return;

    str[index] = (str[index] - 'a') + 'A';
    l_to_u(str, index - 1);
}

string to_upper(string str)
{

    l_to_u(str, str.size() - 1);

    return str;
}
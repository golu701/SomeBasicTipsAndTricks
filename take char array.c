int main() 
{

    char c;
    char s[100],sen[100];
    scanf("%c",&c);
    scanf("\n");
    scanf("%[^\n]%*c",&s);
    scanf("%[^\n]%*c",&sen);
    printf("%c\n%s\n%s",c,s,sen);
    return 0;
}

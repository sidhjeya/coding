int rec(j)
{
    if(sum<2)
    {
        return;
    }
    if(i%2=0)
    {
        return;
    }
    sum=sum+j;
    j+=1;
    rec(i);
}
int main ()
{
    rec(1);
}
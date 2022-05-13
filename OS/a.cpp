semaphore chair=0;//纸和胶水
semaphore b=0;//烟草和胶水
semaphore c=0;//烟草和纸
semaphore table=1;//桌子
void producer()//理发师
{
    while(1)
    {
        P(table);
        switch(rand()%3)
        {
            case 0;
                V(a);//放纸和胶水
            case 1;
                V(b);//放烟草和胶水
            case 2;
                V(c);//放烟草和纸
        }
    }
}
void consumer()//顾客
{
    while(1)
    {
        P(a);
        卷烟；
        抽烟；
        V(table);
    }
}

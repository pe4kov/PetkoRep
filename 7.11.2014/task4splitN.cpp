 #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"1- One digit number"<<endl;
    cout<<"2- Two digit number"<<endl;
    cout<<"3- Three digit number"<<endl;
    cout<<"4- Four digit number"<<endl;
    cout<<"5- Five digit number"<<endl;
    cin>>n;

    if (n==1)
    {
        cout<<"vavedete ednocifreno chislo:";
        int v;
        cin>>v;
        int a;
        a=v%10;
        cout<<"Edinici:"<<a<<endl;
    }
    else{}

    if (n==2)
    {
        cout<<"vavedete dvucifreno chislo:";
        int z;
        cin>>z;
        int b,c;
        b=z/10%10;
        c=z%10;
        cout<<"Desetici:"<<b<<endl;
        cout<<"Edinici:"<<c<<endl;
    }
    else{}

    if (n==3)
    {
        cout<<"vavedete tricifreno chislo:";
        int x;
        cin>>x;
        int d,e,f;
        d=x/100%10;
        e=x/10%10;
        f=x%10;
        cout<<"Stotici:"<<d<<endl;
        cout<<"Desetici:"<<e<<endl;
        cout<<"Edinici:"<<f<<endl;
    }
    else{}





    if (n==4)
    {
        cout<<"vavedete chetiricifreno chislo:";
        int y;
        cin>>y;
        int g,h,j,k;
        g=y/1000;
        h=y/100%10;
        j=y/10%10;
        k=y%10;
        cout<<"Hilqdni:"<<g<<endl;
        cout<<"Stotici:"<<h<<endl;
        cout<<"Desetici:"<<j<<endl;
        cout<<"Edinici:"<<k<<endl;
    }
    else{}

    if (n==5)
    {
        cout<<"vavedete petcifreno chislo:";
        int r;
        cin>>r;
        int l,m,n,o,p;
        l=r/10000;
        m=r/1000%10;
        n=r/100%10;
        o=r/10%10;
        p=r%10;
        cout<<"Desetohilqdni:"<<l<<endl;
        cout<<"Hilqdni:"<<m<<endl;
        cout<<"Stotici:"<<n<<endl;
        cout<<"Desetici:"<<o<<endl;
        cout<<"Edinici:"<<p<<endl;
    }
    else{}



return 0;
}

//To show quadratic expression and roots of Quatratic

int main()
{
    int a,b,c;
    float first_root,second_root, expression;
    char x;
    cout<<"Coeff of x^2 ";
    cin>>a;
    cout<<"coff of x ";
    cin>>b;
    cout<<"constant term ";
    cin>>c;

    expression = a*pow(x,2)+b*x+c;
    cout<<"Quad EQN is "<<a<<"x^2+"<<b<<"x+"<<c<<endl;

    first_root = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    second_root =(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        cout<<"Roots are "<< first_root<<" and "<<second_root<<endl;
    return 0;
}

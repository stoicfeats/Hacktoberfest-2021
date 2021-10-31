class VarArgs{
    public static  int max(int a, int b){
        return a>=b ? a : b;
    }
    public static  int max(int a, int b,int c){
        int max=a;
        if(b>max) max=b;
        if(c>max) max=c;
        return max;
    }
    public static  int max(int a, int b,int c,int d){
        int max=a;
        if(b>max) max=b;
        if(c>max) max=c;
        if(d>max)max=d;
        return max;
    }
}

class Demo {
    public static void main(String[] args) {
        System.out.println("max of 10,34 : "+Arithmetic.max(10, 34));
        System.out.println("max of 34,10 : "+Arithmetic.max(34,10));
        System.out.println("max of 34,10,45 : "+Arithmetic.max(34,10,45));
        System.out.println("max of 34,10,45,23 : "+Arithmetic.max(34,10,45,23));
    }
}
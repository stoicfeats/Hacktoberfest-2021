public Class ReverseString{

    public static void main(String args[]){
        ReverseString r=new ReverseString();
        r.revert("Welcome you all");
    }

    String revert(String s){
        char ch[]=s.toCharArray();
        String rev="";
        for(int i=ch.length-1;i>=0;i--){
            rev+=ch[i];
        }
        return rev;
    }
}
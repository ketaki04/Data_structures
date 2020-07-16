//finding compound interest using math class

class learn
{
   public static void main(String[] args)
   {
    double principal=10000;
    double amount;
    double rate=.01;
    for(int i=1;i<=20;i++)
    {
        amount=principal*Math.pow(1+rate,i);
        System.out.println(amount);
    }    
   


   }




}

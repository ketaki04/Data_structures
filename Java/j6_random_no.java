//Program to generate Random no with a given range..............


import java.util.Random;

class learn{

public static void main(String[] args)
{
    Random dice=new Random();        //creating an object of Random class
   int number;
   for(int i=1;i<=10;i++)
   {
       number=1+dice.nextInt(6);           //generates different numbers in the range of 0-5
       System.out.println("Random no:"+ number) ;                                   //so here we add 1 to get the numbers from 1-6
   }



}


}
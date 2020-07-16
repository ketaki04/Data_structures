//the program includes how to calculate the occurence of a random number
//and stores it in array format

import java.util.Random;
class learn
{
    public static void main(String[] args)
    {
        int freq[]=new int[7];
        Random rand=new Random();

        for(int i=1;i<1000;i++)
        {
            ++freq[1+rand.nextInt(6)];
        }
       System.out.println("Face"+"\t"+"Frequeny");

       for(int i=1;i<freq.length;i++)
       {
           System.out.println(i+"\t"+freq[i]);
       }



    }
}
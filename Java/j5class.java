public class j5class {

    private int hour;
    private int minute;
    private int seconds;


    public void setTime(int h,int m,int s)
    {
        hour=(h>0 && h<24 ? h:0);
        minute=(m>0 && m<60 ? m:0);
        seconds=(s>0 && s<60 ? h:0);

    }
    public String toNormal()
    {
      return String.format("%d:%02d:%02d",(hour==0 || hour==12)?12:hour%12,minute,seconds);

    }

    public String toMilitary(){

     return String.format("%02d:%02d:%02d",hour,minute,seconds);  //to display 2 decimals

    }

    
    
}
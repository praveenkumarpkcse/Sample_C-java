import java.util.*;
public class no
{
public static void main(String[]agrs)
{
String s1;
Scanner s=new Scanner(System.in);
s1=s.nextLine();
char a[]=s1.toCharArray();
for(int i=0;i<a.length;i++)
{
if(a[i]>='0' && a[i]<='9')
{
System.out.print("yes");
break;
}
else
{
System.out.print("no");
break;
}

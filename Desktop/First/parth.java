// import java.net.SocketTimeoutException;
// import java.util.Arrays;
import java.util.Scanner;
public class parth

{ 
    public static void main(String A[])
   

    {
{
  //      int[][][] graph = {{{1,2,3},{4,5,6},{7,8,9}},{{1,2,3},{4,5,6},{7,8,9}},{{1,2,3},{4,5,6},{7,8,9}},{{1,2,3},{4,5,6},{7,8,9}}};

  //      System.out.println(graph[0][0][1]);
//
   // System.out.println(" Hello World");
    // String name1 = "Rishabh";
    // String name2 = "Yukta";
    // System.out.println(name1+ " and " + name2);    
    //System.out.println(name2.charAt(4));
    //String name3 = name1.replace("h" ,"H");
    //System.out.println(name3);
   // System.out.println(name1.substring(0,4) );
        
   // int [] marks = new int[2];
   // marks[0] = 98;
   // marks [1] =89;
   // System.out.println(marks[0]);
     
   // System.out.println(marks[0]);
   // Arrays.sort(marks);
   // System.out.println(marks[0]);

//int [] marks ={98,85,67, };
// int[][] FinalMarks ={{98,34,56},{78,76,87}};

// Scanner sc = new Scanner(System.in);
// System.out.println(" Enter your First name ");
// String name1 = sc.next( );

// System.out.println(" Enter your Middle name ");
// String name2 = sc.next( );

// System.out.println(" Enter your Last name ");
// String name3 = sc.next( );

// System.out.println( "Your full Name is " +  name1 + " " + name2 +" " + name3 );
//System.out.println((int)(Math.random()*100));
// Boolean isSunUp =false;
// if (isSunUp == true)
// System.out.println(("day"));
// else
// System.out.println("night");
// int a = 840;
// int b = 0;
// if (a > 60 || b > 50) 
// System.out.println( "its true ");
// else
// System.out.println(" its false");
// boolean isAdult = true;
// if(! isAdult)
// System.out.println("true");
// else

// System.out.println(" false");
// Scanner sc = new Scanner(System.in);
// int number = 1;
// do{
//   System.out.println("input yr no.");
//   number = sc.nextInt();
//   System.out.println("here is yr no.");
//   System.out.println(number);

// }  while(number>= 0);
// System.out.println("THE END");

// mini Project
// Scanner sc = new Scanner(System.in);
// int myNumber=(int)(Math.random()*100);
//  int userNumber = 0;
// do 
//  {
//   System.out.println("Guess my number(1-100)");
//    userNumber = sc.nextInt();
//    if (myNumber == userNumber){
//   System.out.println( "correct");
//   break;
//   }
//   else if (userNumber > myNumber){
//     System.out.println("yr num is to large");
//   }
//   else{
//     System.out.println(" yr num is to small");
//   }
 
// } while(userNumber >= 0);
 
// System.out.println("my number was this");
// System.out.println(myNumber);
Scanner sc = new Scanner(System.in);
System.out.println(" Enter number 1");
int num1 = sc.nextInt( );

System.out.println(" Enter number 2 ");
int num2 = sc.nextInt( );
  
System.out.println("Enter an Operator ( plus , minus , multiply , divide ):");
String operator = sc.next().trim();

int result = 0;
if  (operator.equals ("plus")){
  System.out.println(num1 + num2 );
  result = num1 + num2 ;
} else if (operator.equals("minus")){
  System.out.println(num1 - num2 );
 result = num1 - num2 ;
} else if (operator.equals("multiply")){
  System.out.println(num1 * num2 );
  result = num1 * num2 ;
}else  if( operator.equals("divide")){
  System.out.println(num1 / num2 );
 result  = num1 / num2 ;
}

System.out.println("The Result of " + num1 + " " + operator + " " + num2 + " " + " is " + result );

    }

  

  }}

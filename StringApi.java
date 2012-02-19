import static java.lang.System.*;

public class StringApi {
    public static void main(String[] args){
        String s3 = "Hello" + " World";
        out.println("3.--- length of '" + s3 + "' is " + s3.length() );
        out.println("4.--b first 5 characters of '" + s3 + "' is '" + s3.substring(0,5) + "'" );
        out.println("4.1--b last 5 characters of '" + s3 + "' is '" + 
        	s3.substring(s3.length()-5,s3.length())+"'" );
        out.println("5.--- position of 'world' in '" + s3 + "' is " +
        	s3.indexOf("world") );
        out.println("5.1--- position of 'World' in '" + s3 + "' is " +
        	s3.indexOf("World") );
        out.println("6.--- replace 'world' by 'moon' in '" + s3 + "' is " +
        	s3.replaceFirst("world","moon") );
        out.println("6.1--- replace all 'l' by '?' in '" + s3 + "' is " +
        	s3.replaceAll("l","?") );
        out.println("7.--- split '" + s3 + "' by space ");
        out.print("[");
        String[] arr=s3.split(" ");
        for(String s: arr){
        	out.print(s);
        	if( s != arr[arr.length-1] )
        		System.out.print(",");
        }
        out.println("]");
        out.println("8.--- reverse of '" + s3 + "' is  " + 
        	new String(new StringBuffer(s3).reverse()));
        out.println("9.--- uppercase of '" + s3 + "'+ is '" + s3.toUpperCase() + "'");
        out.println("10.--- lowercase of '" + s3 + "'+ is '" + s3.toLowerCase() + "'");

        String s1 = "hello World";
        out.println("10.1--b capitalize of '" + s1 + "' is '" + Character.toUpperCase(s1.charAt(0)) + 
           s1.substring(1,s1.length()) + "'");

        String s = "Hello World";
        out.println("11.--- compare '" + s3 + "'+ with '" + s + "' returns " + (s3.equals(s)) );
        out.println("11.1--- compare '" + s3 + "'+ with '" + s1 + "' returns " + (s1.equals(s)) );
        out.println("12 --- iterate through a string");
        for(char c : s1.toCharArray()) {
          out.println(c);
        }
    }
}

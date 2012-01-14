import static java.lang.System.*;

public class StringApi {
	public static void main(String[] args){
		String s3 = "hello" + " world";
		out.println("--- first 5 characters of '" + s3 + "' is '" + s3.substring(0,5) + "'" );
		out.println("--- last 5 characters of '" + s3 + "' is '" + 
			s3.substring(s3.length()-5,s3.length())+"'" );
		out.println("--- position of 'world' in '" + s3 + "' is " +
			s3.indexOf("world") );
		out.println("--- replace 'world' by 'moon' in '" + s3 + "' is " +
			s3.replaceFirst("world","moon") );
		out.println("--- replace all 'l' by '?' in '" + s3 + "' is " +
			s3.replaceAll("l","?") );
		out.println("--- split '" + s3 + "' by space ");
		out.print("[");
		String[] arr=s3.split(" ");
		for(String s: arr){
			out.print(s);
			if( s != arr[arr.length-1] )
				System.out.print(",");
		}
		out.println("]");
		out.println("--- reverse of '" + s3 + "' is  " + 
			new String(new StringBuffer(s3).reverse()));
	}
}

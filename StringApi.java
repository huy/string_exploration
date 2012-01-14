public class StringApi {
	public static void main(String[] args){
		String s3 = "hello" + " world";
		System.out.println("--- first 5 characters of '" + s3 + "' is '" + s3.substring(0,5) + "'" );
		System.out.println("--- last 5 characters of '" + s3 + "' is '" + 
			s3.substring(s3.length()-5,s3.length())+"'" );
		System.out.println("--- position of 'world' in '" + s3 + "' is " +
			s3.indexOf("world") );
		System.out.println("--- replace 'world' by 'moon' in '" + s3 + "' is " +
			s3.replaceFirst("world","moon") );
		System.out.println("--- replace all 'l' by '?' in '" + s3 + "' is " +
			s3.replaceAll("l","?") );
		System.out.println("--- split '" + s3 + "' by space ");
		System.out.print("[");
		String[] arr=s3.split(" ");
		for(String s: arr){
			System.out.print(s);
			if( s != arr[arr.length-1] )
				System.out.print(",");
		}
		System.out.println("]");
		System.out.println("--- reverse of '" + s3 + "' is  " + 
			new String(new StringBuffer(s3).reverse()));
	}
}

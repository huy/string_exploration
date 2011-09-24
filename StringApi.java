public class StringApi {
	public static void main(String[] args){
		System.out.println("--- create a string from const");
		String s1="hello";
		System.out.println(s1);
		s1 = "hello\nworld\n";
		System.out.println(s1);
		String s2 = "hello";
		System.out.println("--- append '" + s2 + "' with 'moon' = "+ s2.concat(" moon"));
		System.out.println("--- length of '" + s2 + "' is " + s2.length() );
		String s3 = "hello world";
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
		System.out.println("--- reverse of '" + s3 + "' is  " + reverse(s3));
		System.out.println("--- reverse of '" + s3 + "' is  " + 
			new String(new StringBuffer(s3).reverse()));
	}
	public static String reverse(String s) {
		char[] arr = s.toCharArray();
		char[] result = new char[arr.length];
		for(int i=0; i < arr.length; i++ ){
			result[arr.length-i-1]=arr[i];
		}
		return new String(result);
	}
}

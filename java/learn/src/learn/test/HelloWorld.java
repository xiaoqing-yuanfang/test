/**
 * 
 */
package learn.test;

/**
 * @author s10196
 *
 */
public class HelloWorld {

	/**
	 * @param args
	 * @throws Exception 
	 */
	public void test() throws Exception{
		try{
			System.out.println("hello1");

			throw new Exception("Hello world");
		}catch(Exception e){
			System.out.println("hello2");

			throw new Exception("Hello world");

		}finally{
			System.out.println("hello3");
			return;
		}
//		System.out.println("nihao");		
//		return;
	}
	
	public static void main(String[] args) {
		// TODAuto-generated method stub
		HelloWorld hw = new HelloWorld();
		try{
			hw.test();
		}catch(Exception e){
			System.out.println(e);
		}
	}

}

public class Array{


 class car{
	int price;

	public void show(){
		System.out.println("Class Method call from car class ");


	}
}

public  void main(String[] args) {
	int[] a = {1,2,3,4,5,6,7,8,9,10};

	car c = new car();

		c.price = 20;
		System.out.println(c.price);

		c.show();
}
}
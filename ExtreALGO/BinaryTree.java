public class BinaryTree{

   public static class Node{
   	int data;
   	Node left;
   	Node right;

   	Node(int data){
   		this.data = data;
   	}

   }

   public static void preorder(Node root){
   	if (root == null) {
   		return;
   	}
   	System.out.println(root.data + " " );
   	preorder(root.left);
   	preorder(root.right);
   
   }

	  public static void main(String[] args){

		int[] arr = {12,25,37,50,62,75,87};
		Node root = construct(arr, 0 ,arr.length-1);
        System.out.println("preorder traversal of the tree is:");
        preorder(root);

	}

	public static Node construct(int[] arr , int start , int end)
	{
		if(start>end){
			return null;
		}
		int mid = (start+end)/2;
		Node node = new Node(arr[mid]);

		node.left = construct(arr , 0 , mid-1);
		node.right = construct(arr , mid+1 ,end );

		return node;
	}
}
// 1. push root to queue loop while q is not empty
// 2. n = q.size()   // current lable
// start for loop for current lable if(i== 1) print node->data
// push left subtree and right tree in the queue



void left_View(Node* root){
	if(root== NULL) return ;


	queue<Node*> q;

	q.push(root);

	while(!q.empty())
	{
		int n = q.size();


		for (int i = 1; i <= n; ++i)
		{
			Node* temp = q.front();
		    q.pop();

		    if(i==1){
		    	cout << temp->data;
		    }

		    if(temp->left!= NULL) q.push(temp->left);
		      if(temp->right!= NULL) q.push(temp->right);
		}
	}
}
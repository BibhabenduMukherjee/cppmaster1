



// using stack 
// 1 push root to the stack

// if root== NULL retutn 

// 


slove(node* root)
{


	if(root== NULL)
	{
     return;
	}

	stack<node*> s;
	s.push(root);

	while(!s.empty())
	{
		node* temp = s.top();
		s.pop();

		cout << temp->data<<" ";


		if(root->left!=NULL)
		{
			push(root-left);
		}

		if(root->right!= NULL)
		{
			push(root->right);
		}
	}
}
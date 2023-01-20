/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
	bool checkBST(Node* root) {
        vector<Node *> stack;
      Node *curr = root;
        vector<int> temp;
         while (!stack.empty() || curr != NULL)
         {
             if (curr != NULL)
             {
                 stack.push_back(curr);
                 curr = curr->left;
             }
             else
             {
                 curr = stack.back();
                 stack.pop_back();
                 temp.push_back(curr->data);
                 curr = curr->right;
            }
         }
        for(int i=0;i<temp.size()-1;i++)
        {
            if(temp[i] < temp[i+1])
            {
                
            }
            else
            {
                return false;
            }
        }
        return true;
		
	}

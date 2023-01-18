//weak_ptr1.cpp. 
//Instances of std::weak_ptr can point to objects owned by instances of std::shared_ptr 
//while only becoming temporary owners themselves. This means that weak pointers do not 
//alter the object's reference count and therefore do not prevent an object's deletion 
//if all of the object's shared pointers are reassigned or destroyed.

//As child nodes are added to the root node's children, their std::weak_ptr member parent 
//is set to the root node. The member parent is declared as a weak pointer as opposed to 
//a shared pointer such that the root node's reference count is not incremented. 
//When the root node is reset at the end of main(), the root is destroyed. Since the only
//remaining std::shared_ptr references to the child nodes were contained in the 
//root's collection children, all child nodes are subsequently destroyed as well.

#include <memory>
#include <vector>

struct TreeNode {
	std::weak_ptr<TreeNode> parent;
	std::vector< std::shared_ptr<TreeNode> > children;
};

int main() {
	// Create a TreeNode to serve as the root/parent.
	std::shared_ptr<TreeNode> root(new TreeNode);

	// Give the parent 100 child nodes.
	for (size_t i = 0; i < 100; ++i) {
		std::shared_ptr<TreeNode> child(new TreeNode);
		root->children.push_back(child);
		child->parent = root;
	}

	// Reset the root shared pointer, destroying the root object, and
	// subsequently its child nodes.
	root.reset();
	
	return 0;
}
#pragma once
//template<typename tree_entry>
//struct tree_node {
//	tree_entry Entry;
//	struct tree_node<tree_entry>* Left;
//	struct tree_node<tree_entry>* Right;
//};
////first implement to tree as struct have size , depth and  root poniter to (vertex) node
//template<typename tree_entry>
//struct Tree {
//	struct tree_node<tree_entry>* Root;
//	int Size, Depth;
//};
//
//template<typename tree_entry>
//void create_tree(Tree<tree_entry>* pt) {
//	pt->Root = nullptr;
//	pt->Depth = pt->Size = 0;
//};
//template<typename tree_entry>
//void travers_norder_auxiliary(tree_node<tree_entry>* ptr_node, void(*pf)(tree_entry e)) {
//	if (ptr_node) {
//		travers_norder_auxiliary(ptr_node->Left, pf);
//		(*pf)(ptr_node->Entry);
//		travers_norder_auxiliary(ptr_node->Right, pf);
//	}
//};
//template<typename tree_entry>
//void travers_tree_rec(Tree<tree_entry>* pt, void(*pf)(tree_entry e)) {
//	travers_norder_auxiliary(pt->Root, pf);
//};
template<typename tree_entry>
struct tree_node {
	tree_entry Entry;
	struct tree_node<tree_entry>* Left;
	struct tree_node<tree_entry>* Right;
};
//second implement to tree as pointer to root (vertex) node
template<typename tree_entry>
tree_node<tree_entry>* ptr_tree;
template<typename tree_entry>
void create_tree2(ptr_tree<tree_entry>* pt) {
	*pt = nullptr;
};
template<typename tree_entry>
void travers_tree_rec2(ptr_tree<tree_entry>* ppt, void(*pf)(tree_entry e)) {
	if (*ppt) {
		travers_tree_rec2(&(*ppt)->Lift,pf);
		(*pf)((*ppt)->Entry);
		travers_tree_rec2(&(*ppt)->Right, pf);
	}
};

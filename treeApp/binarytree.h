#pragma once
template<typename tree_entry>
struct tree_node {
	tree_entry Entry;
	struct tree_node<tree_entry>* Left;
	struct tree_node<tree_entry>* Right;
};

//first implement to tree as struct have size , depth and  root poniter to (vertex) node
template<typename tree_entry>
struct Tree {
	struct tree_node<tree_entry>* Root;
	int Size, Depth;
};
//second implement to tree as pointer to root (vertex) node
template<typename tree_entry>
using tree2 =   tree_node< tree_entry>* ;
template<typename tree_entry>
void create_tree2(tree2<tree_entry>* ppt) {
	*ppt = nullptr;
};
template<typename tree_entry>
void create_tree(Tree<tree_entry>* pt) {
	pt->Root = nullptr;
	pt->Depth = pt->Size = 0;
};
template<typename tree_entry>
void tree_insertion_rec_2(tree2<tree_entry>* ppt, tree_entry* pe,int* d) {// when you want to use a struct tree you shoud use d to calc the depth 
	*d = 1;
	if (!*ppt) {
		*ppt =   new tree_node<tree_entry>;
		(*ppt)->Entry = *pe;
		(*ppt)->Left = (*ppt)->Right = nullptr;
	}
	else {
		 if ((*ppt)->Entry > *pe) {
			 tree_insertion_rec_2(&(*ppt)->Left, pe,d);
			}
		 else
		 {
			 tree_insertion_rec_2(&(*ppt)->Right, pe,d);
		 }
		 (*d)++;
	}
}
template<typename tree_entry>
void tree_insertion_rec(Tree<tree_entry> *ppt, tree_entry *pe) {
	int depth;
	tree_insertion_rec_2(&ppt->Root, pe,&depth);
	ppt->Size++;
	if (depth > ppt->Depth)ppt->Depth = depth;


}
template<typename tree_entry>
void travers_tree_rec2(tree2<tree_entry>* ppt, void(*pf)(tree_entry e)) {
	if (*ppt) {
		travers_tree_rec2(&(*ppt)->Left,pf);
		(*pf)((*ppt)->Entry);
		travers_tree_rec2(&(*ppt)->Right, pf);
	}
};
template<typename tree_entry>
int tree_depth(Tree<tree_entry>* ppt) {
	return ppt->Depth;
}
template<typename tree_entry>
int tree_size(Tree<tree_entry>* ppt) {
	return ppt->Size;
}


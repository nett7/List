#pragma once

#include <string>

#include <iostream>

#include<cassert>



using namespace std;



class Node {

	friend class List;

	Node(int node_val);

	Node();

	~Node();

	int val;

	Node* next;

};





class List {

private:

	Node* first;

	void add_to_empty(int );

	public:

		void insert(int );

		void print();

		List() :first{ nullptr } {}

		~List();

		void delete_first(int );

		bool is_empty() const;

		void find(int );

		void swap(int, int );

		int size() const;

		void sort();



	};

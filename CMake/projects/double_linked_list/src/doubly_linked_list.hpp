#pragma once

#include <cstddef>

namespace biv {
	template <typename T> 
	class DoublyLinkedList {
		private:
			class Node {
				public:
					T value;
					Node* prev = nullptr;
					Node* next = nullptr;
					
					Node(const T& value) : value(value) {}
						
					Node(const Node&) = delete;
					Node& operator = (const Node&) = delete;
			};

			Node* begin = nullptr;
			Node* end = nullptr;

		public:
			DoublyLinkedList()  {};
			DoublyLinkedList(const DoublyLinkedList&) = delete;
			DoublyLinkedList& operator = (const DoublyLinkedList&) = delete;
			~DoublyLinkedList();
			
			std::size_t get_size() const;
			bool has_item(const T& value) const;
			void print() const;
			void push_back(const T& value);
			bool remove_first(const T& value);
	};
}

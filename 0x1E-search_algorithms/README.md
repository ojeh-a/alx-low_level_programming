SEARCH ALGORITHMS

Learning Objectives
- What is a search algorithm
- What is a linear search
	Linear search or sequential search is a method of finding an element within a list.
	It sequentially checks each element of the list until a match is found or the whole
	list has been searched.
- What is a binary search
	Binary search, also known as half-interval search, logarithmic search, or binary chop,
	is a search algorithm that finds the position of a target value to the middle element
	of the array.
	If they are not equal, the half in which the target cannot lie is eliminated and
	the search continues on the remaining half, again taking the middle element to
	compare to the target value, and repeating this until the target value is found.
	If the search ends with the other half being empty, the target is not in the array.

	O(log n)
- What is the best search algorithm to use depending on your needs.


Advanced
- Jump search
	Jump search or block search refers to a search algorithm for ordered lists.
	It works by first checking all items until an itme is found that is larger
	than the search key. To find the exact position of the search key in
	the list a linear search is performed on the sublist.
- Interpolation search
	Interpolation search is an algorithm for searching for key in an array
	that has been ordered by numerical values assigned to the keys (key values).

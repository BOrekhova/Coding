Python’s Collections

I.	Set
  main principles:
   1.	 The elements’ order is not defined                 
   2.	 Elements of sets are strings and/or numbers
   3.	 The set cannot contain identical elements

mammals = {'cat', 'dog', 'fox', 'elephant'}
empty = set()  #to create empty set
new_elem = 'e'
empty.add(new_elem)  #to add an element 
empty.clear()  #to clear the set

  removing the set’s element:
   1.	pop delete any element and return its value 
   2.	remove delete given element, output error if it’s not presented 
   3.	discard delete given element, do not output error if it’s not here

  operations with two sets:
   1.	Union (объединение) 
      union = my_set1.union(my_set2)
      union = my_set1 | my_set2

   2.	Intersection (пересечение)
      intersection = my_set1.intersection(my_set2)
      intersection = my_set1 & my_set2

   3.	Difference (разность)
      diff = my_set1.difference(my_set2)
      diff = my_set1 - my_set2

   4.	Symmetrical Difference (симметричная разность)
      symm_diff = my_set1.symmetric_difference(my_set2)
      symm_diff = my_set1 ^ my_set2


II.	String
  main principles:
   1.	Immutable data type
   2.	Enumeration

III.	Lists
  main principles:
   1.	The elements can be changed
   2.	The elements can be values of any type: integers and real numbers, strings..
   3.	The elements are ordered and indexed, a slice operation is available
   4.	The elements may be repeated

list = [ ] or list = list()  #to create an empty list
list = [2, 3, ‘word’]
list.append(i)  #to add an element 
list.extend(another list / set)  #expanding the list with a string or a set:
list[i] = 17  #to change the element
list[start:end]  #list’s cut
del list[i], del[ ::2]  #removing the elements

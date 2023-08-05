class Node:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next


class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_beginning(self, data):
        node = Node(data, self.head)
        self.head = node

    def insert_at_end(self, data):
        if self.head is None:
            self.head = Node(data)
            return

        itr = self.head

        while itr.next:
            itr = itr.next

        itr.next = Node(data)

    def insert_values(self, data_list):
        self.head = None
        for data in data_list:
            self.insert_at_end(data)

    def print(self):
        if self.head is None:
            print("The Linked list is empty")
            return

        itr = self.head
        llstr = ""

        while itr:
            llstr += str(itr.data) + " --> "
            itr = itr.next

        print(llstr + "None")

    def get_length(self):
        count = 0
        itr = self.head

        while itr:
            count += 1
            itr = itr.next

        return count

    def remove_at(self, index):
        if index < 0 or index > self.get_length() - 1:
            raise Exception("Invalid Index")

        if index == 0:
            self.head = self.head.next

        count = 0

        itr = self.head

        while itr:
            if count == (index - 1):
                itr.next = itr.next.next
                break
            count += 1
            itr = itr.next

    def insert_at(self, index, data):
        if index < 0 or index > self.get_length():
            raise Exception("Invalid Index")

        if index == 0:
            self.insert_at_end(data)

        count = 0

        itr = self.head

        while itr:
            if count == (index - 1):
                node = Node(data, itr.next)
                itr.next = node
                break

            count += 1
            itr = itr.next

    def insert_after_value(self, data_after, data_to_insert):
        # Search for first occurance of data_after value in linked list
        # Now insert data_to_insert after data_after node
        if self.head is None:
            raise Exception("No data available")

        itr = self.head
        found = False

        while itr:
            if itr.data == data_after:
                found = True
                node = Node(data_to_insert, itr.next)
                itr.next = node
                break

            itr = itr.next

        if not found:
            print("The given data is not present in the linked list.")

    def remove_by_value(self, data):
        # Remove first node that contains data
        if self.head is None:
            raise Exception("No data available")

        itr = self.head
        found = False

        while itr:
            if itr.next.data == data:
                found = True
                itr.next = itr.next.next
                break

            itr = itr.next

        if not found:
            print("The given data is not present in the linked list.")


if __name__ == "__main__":
    ll = LinkedList()

    ll.insert_at_beginning(5)
    ll.insert_at_beginning(3)
    ll.insert_at_beginning(2)

    ll.insert_at_end(4)
    ll.insert_at_end(1)
    ll.print()

    ll.insert_after_value(1, 6)

    ll.print()

    ll.remove_by_value(5)

    ll.print()

    print("Length:", ll.get_length())

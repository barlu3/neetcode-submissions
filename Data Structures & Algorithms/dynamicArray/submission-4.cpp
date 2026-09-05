
class DynamicArray {
public:
    DynamicArray(int capacity) {
        this->capacity = capacity;
        size = 0;
        array = new int[capacity];
    }

    int get(int i) {
        return array[i];
    }

    void set(int i, int n) {
        array[i] = n;
    }

    void pushback(int n) {
        if (size == capacity) resize();
        array[size] = n;
        size++;
    }

    int popback() {
        if (size == 0) {
            throw std::out_of_range("bad");
        }

        int temp = array[size - 1];
        size--;
        return temp;
    }

    void resize() {
        capacity *= 2;

        int* newArray = new int[capacity];
        for (int i = 0; i < size; i++) {
            newArray[i] = array[i];
        }
        delete[] array;
        array = newArray;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
private:
    int* array = nullptr;
    int capacity = 1;
    int size;
};

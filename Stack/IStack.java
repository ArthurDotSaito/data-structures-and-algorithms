public interface IStack<T> {
    T push(T element);
    T pop();
    T top();
    boolean isEmpty();
    int size();
}

public class Stack implements IStack{
    public Object[]: MyStack = [];
    private int index = 0;

    public Stack(int _size){
        this.MyStack = new Object[_size];
    };

    public Object push(Object element){
        MyStack[index] = element;
        this.increment();

        return null;
    }
}
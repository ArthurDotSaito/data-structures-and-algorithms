using System;

namespace Question2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] array = { 72, 33, 222, 304, 1, 5, 22 };
            Console.WriteLine("\nArray não ordenado:");
            PrintArray(array);

            int[] orderedArray = BubbleSort(array);

            Console.WriteLine("\nArray ordenado:");
            PrintArray(orderedArray);
        }

        public static int[] BubbleSort(int[] data)
        {
            for (int i = 0; i < data.Length - 1; i++)
            {
                for (int j = 0; j < data.Length - 1; j++)
                {
                    if (data[j] > data[j + 1])
                    {
                        int temp = data[j];
                        data[j] = data[j + 1];
                        data[j + 1] = temp;
                    }
                }
            }
            return data;
        }
        static void PrintArray(int[] arr)
        {
            foreach (int element in arr)
            {
                Console.Write(element + " ");
            }
            Console.WriteLine();
        }
    }
}
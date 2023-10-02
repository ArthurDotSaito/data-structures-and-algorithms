using System;

namespace Question2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] array = { 72, 33, 222, 304, 1, 5, 22, 0, 304, 5 };
            Console.WriteLine("\nArray não ordenado:");
            PrintArray(array);

            MergeSort(array);

            Console.WriteLine("\nArray ordenado:");
            PrintArray(array);
        }
        static void MergeSort(int[] array)
        {
            if (array.Length > 1)
            {
                int middle = array.Length / 2;
                int[] leftArray = new int[middle];
                int[] rightArray = new int[array.Length - middle];

                for (int p = 0; p < middle; p++)
                {
                    leftArray[p] = array[p];
                }

                for (int q = middle; q < array.Length; q++)
                {
                    rightArray[q - middle] = array[q];
                }

                MergeSort(leftArray);
                MergeSort(rightArray);

                int i = 0, j = 0, k = 0;
                while (i < leftArray.Length && j < rightArray.Length)
                {
                    if (leftArray[i] < rightArray[j])
                    {
                        array[k] = leftArray[i];
                        i++;
                    }
                    else
                    {
                        array[k] = rightArray[j];
                        j++;
                    }
                    k++;
                }
                while (i < leftArray.Length)
                {
                    array[k] = leftArray[i];
                    i++;
                    k++;
                }
                while (j < rightArray.Length)
                {
                    array[k] = rightArray[j];
                    j++;
                    k++;
                }
            }
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
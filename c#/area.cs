using System;

class AreaCalculator
{
    static void Main()
    {
        Console.WriteLine("Choose shape to calculate area:");
        Console.WriteLine("1. Rectangle");
        Console.WriteLine("2. Circle");
        Console.WriteLine("3. Triangle");
        Console.Write("Enter choice (1-3): ");
        int choice = int.Parse(Console.ReadLine());

        switch (choice)
        {
            case 1:
                Console.Write("Enter length: ");
                double length = double.Parse(Console.ReadLine());
                Console.Write("Enter width: ");
                double width = double.Parse(Console.ReadLine());
                Console.WriteLine($"Area of Rectangle: {length * width}");
                break;
            case 2:
                Console.Write("Enter radius: ");
                double radius = double.Parse(Console.ReadLine());
                Console.WriteLine($"Area of Circle: {Math.PI * radius * radius}");
                break;
            case 3:
                Console.Write("Enter base: ");
                double b = double.Parse(Console.ReadLine());
                Console.Write("Enter height: ");
                double h = double.Parse(Console.ReadLine());
                Console.WriteLine($"Area of Triangle: {0.5 * b * h}");
                break;
            default:
                Console.WriteLine("Invalid choice.");
                break;
        }
    }
}
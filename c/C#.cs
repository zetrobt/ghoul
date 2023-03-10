using System;
using System.Threading;

namespace Ghoul;

public static class Ghoul
{
	public static void Main()
	{
		int ghoul = 1000;
		while(ghoul > 6)
		{
			Console.WriteLine($"{ghoul}-7={ghoul-7}");
			ghoul -= 7;
			Thread.Sleep(300);
		}
		Console.Write("let me die");
	}
}

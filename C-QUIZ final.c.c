#include <stdio.h>

void save(char[20], int, int, int, int, int);
void highest(int, char[20]);

void greeting();
void askDetails(char* name ,int* date, int* month, int* year);
void mainMenu();
void chaptersMenu();
void selectChapter(int Chapter);
void main()
{
	//quiz vitra use hune 
	int Chapter, scr = 0;
	int ans[500], i = 0;
	
    //user ko details
	int date, month, year;
	char Choice = '_', name[20];	// _ means Uninitialized.

	greeting();    
	//askDetails(&name, &date, &month, &year);
	printf("\n\t\t\t\t\tEnter your name:");
	fflush(stdin);
	gets(name);
	printf("\n\t\t\t\t\tEnter todays date(DD/MM/YYYY):");
	scanf("%d%d%d", &date, &month, &year);
	system("cls");
	printf("\n\t\t\t\t\tHello!!%s :) \n\t\t\t\tWelcome to C-Quiz ", name);

	while (Choice != 'E')
	{
		mainMenu();
		fflush(stdin);
		scanf("%c", &Choice);

		switch (Choice)
		{
		case 'S':
			chaptersMenu();
			scanf("%d", &Chapter);

			switch (Chapter)
			{
			case 1:
			{
				system("cls");
				printf("\ni.Who is the father of C language?\n1.Bjarne Stroustrup\t2.James A.Gosling\n3.Dennis Ritchie\t4.Dr.E.F.Codd");
				printf("\nEnter your answer:");
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 3.Dennis Ritchie");
				}
				printf("\n\nii.C laguage was developed at?\n1.AT & T's Bell Laboratories of USA in 1972\t2.AT &AT's Bell Laboratories of USA in 1970\n3.Sun Microsystems in 1973\t4.Cambridge University in 1972");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 1.AT & T's Bell Laboratories of USA in 1972");
				}
				//system("cls");
				printf("\n\niii.C program are converted into machine language with the help of?\n1.An editor\t2.A complier\n3.A linker\t4.An operating system");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2.A complier");
				}
				printf("\n\niv.C was primarily developed as?\n1.System programming language\t2.General purpose language\n3.Data processing language\t4.None of above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 1.System programming language.");
				}
				system("cls");
				printf("\n\nv.Which is the only function all C program must contain?\n1.start()\t2.system()\n3.main()\t4.printf()");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 3.main().");
				}
				printf("\n\nvi.'C' is often called a?\n1.Object oriented language\t2.High level language\n3.Mid-level programming language\t4.Machine level language");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 3.Mid-level language.");
				}
				system("cls");
				printf("\n\nvii.A graphical or symbolic representation of process is known as?\n1.Algorithm\t2.Flowchart\n3.C program\t4.Graph");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2.Flowchart");
				}
				printf("\n\nviii.A process of set of rules to be followed in calculation or other problem solving operation is known as?\n1.Algorithm\t2.Calculation\n3.Graph\t4.Flowchart");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 1.Algorithm.");
				}
				system("cls");
				printf("\n\nix.A program in a system which helps to link a object modules of program into a single object file is known>\n1.Complier\t2.Linker\n3.Loader\t4.Console screen");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2.Linker.");
				}
				printf("\n\nx.The program of the operating system which loads the executable form the disk into the primary memeory(RAM) for execution is known as?\n1.Linker\t2.Compiler\n3.Console screen\t4.Loader");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 4.Loader.");
				}
				system("cls");
				printf("\n\n\nYou scored %d out of 10 questions", scr);
				save(name, scr, Chapter, date, month, year);
				highest(scr, name);
				break;
			}
			case 2:
			{
				system("cls");
				scr = 0;
				printf("\ni.Which for the following is not a correct variable type?\n1.float\t2.real\n3.int\t4.char");
				printf("\nEnter your answer:");
				i = 0;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2.real");
				}
				printf("\n\nii.Literal means:\n1.a string\t2.a constant\n3.a character\t4.an aplhabet");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2.a constant");
				}
				system("cls");
				printf("\n\niii.Which one is not a reserved word in C?\n1.typedef\t2.auto\n3.reserve\t4.for");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 3.reserve");
				}
				printf("\n\niv.Choose the invalid identifier from the below:\n1.int\t2.volatile\n3.DOUBLE\t4._0_");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 1.int");
				}
				system("cls");
				printf("\n\nv.The storage size of int is?\n1.1 digit\t2.2 to 4 byte\n3.8 byte\t4.10 byte");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2. 2 to 4 byte");
				}
				printf("\n\nvi.Which one is C modifier?\n1.long\t2.small\n3.large\t4.high");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 1.long");
				}
				system("cls");
				printf("\n\nvii.Which one is a basic data type?\n1.pointer\t2.array\n3.void\t4.char");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
				}else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 4.char");
				}
				printf("\n\nviii.Which one of the following is not a valid identifier?\n1._examnccs\t2.1examnccs\n3.exam_nccs\t4.examnccs1");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2. 1examnccs");
				}
				system("cls");
				printf("\n\nix.What will be the output for:\nint a,n;\n..\n..n=sizeof(a);\nprintf(''%%d''),n;\n1. 3\t2. 4\n3. 4 \t4. 1");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 3. 4");
				}
				printf("\n\nx.What type of data is d = 1.5?\n1.int\t2.char\n3.float\t4.None of above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 3.float");
				}
				system("cls");
				printf("\n\n\nYou scored %d out of 10 questions", scr);
				save(name, scr, Chapter, date, month, year);
				highest(scr, name);
				break;
			}
			case 3:
			{
				system("cls");
				scr = 0;
				printf("\ni.Which funtion is used to read a data from the user?\n1.printf()\t2.main()\n3.scanf()\t4.put()");
				printf("\nEnter your answer:");
				i = 0;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 3.scanf()");
				}
				printf("\n\nii.What function does'\t' perform?\n1.new line\t2.horizontal tab\n3.backspace\t4.null");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2.horizonal tab");
				}
				system("cls");
				printf("\n\niii.What value does the format specifier %%n define?\n1.Unsigned interger\t2.Address of pointer\n3.Scientific notation\t4.Nothing");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 4.nothing");
				}
				printf("\n\niv.What is the function of '\b'?\n1.form feed\t2.single quote\n3.vertical tab\t4.backspace");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 4.backspace");
				}
				system("cls");
				printf("\n\nv.What is the function of '//'?1.backspace\t2.carrirage return\n3.backslash\t4.double quote");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 3.backslash");
				}
				printf("\n\nvi.What is the function of %%u?\n1.unsigned integer\t2.octal representation of interger\n3.floating point\t4.signed integer");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 1.unsigned interger");
				}
			    system("cls");
				printf("\n\nvii.What function does '%%' perform?\n1.prints string\t2.prints % character\n3.prints nothing\t4.floating point");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2.prints % chcracter");
				}
				printf("\n\nviii.Which of the following is formatted I/O function?\n1.printf()\t2.get()\n3.puts\t4.puts");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 1.printf()");
				}
				system("cls");
				printf("\n\nix.What function does puts function perform?\n1.prints an integer\t2.prints string\n3.prints a character\t4.prints nothing");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2.prints string");
				}
				printf("\n\nx.What fuunction does get performs?\n1.reads a character\t2.reads a integer\n3.reads character and integer\t4.reads string");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2.reads a character");
				}
				system("cls");
				printf("\n\n\nYou scored %d out of 10 questions", scr);
				save(name, scr, Chapter, date, month, year);
				highest(scr, name);
				break;
			}
			case 4:
			{
				system("cls");
				scr = 0;
				printf("\ni.Which  one of the following is an invalid expression?\n1.a+b;\t\n.a+(2*b);\n3.++a-b\n4.-4+6;");
				printf("\n\nEnter your answer:");
				i = 0;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWORNG ANSWER! The right answer was 3.");
				}
				printf("\n\nii.Which  one of the following is a ternary operator?\n1. &&;\n2. ? :\n3. ++\n4. --;");
				printf("\n\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER! The right answer was 2.");
				}
			    system("cls");
				printf("\n\niii.Output of the following program fragment is: \nx=5;\ny=x++;\nprintf(''%d%d'',x,y);\n1.5,6\n2.5,5\n3.6,5\n4.6,6");
				printf("\n\nEnter yoyr answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER! The right answer was 1.");
				}
				printf("\n\niv.What is the function of '=' operator?\n1.Compare two vales\n2.Assign vale to a variable\n3.None of above");
				printf("\n\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER! The right answer was 2.");
				}
				system("cls");
				printf("\n\nv.What type of expression is 'a>b'?\n1.Simple expression\n2.Complex expression\n3.Logical expression\n4.None of above");
				printf("\n\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER! The right answer was 3.");
				}
				printf("\n\nvi.What is the meaning of '!=' operator?\n1.Equal to\n2.Greater than\n3.Less than\n4.Not equal to");
				printf("\n\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER! The right answer was 4.");
				}
				system("cls");
				printf("\n\nvii.What would be the output of the following program fragment:\nx=5;\nx+=5\nprintf(''%d'',x);\n1.5\n2.0\n3.10\n4.15");
				printf("\n\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER! The right answer was 3.");
				}
				printf("\n\nviii.Which one of the following is an unary operator?\n1.+\n2.-\n3.%\n4.--");
				printf("\n\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER! The right answer was 4.");
				}
				system("cls");
				printf("\n\nix.What is the associativity of '+=' operator?\n1.right to left\n2.left to right");
				printf("\n\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER! The right answer was 1.");
				}
				printf("\n\nx.Which would execute faster'a++' or 'a=a+1'\n1.a=a+1\n2.a++");
				printf("\n\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER! The right answer was 2.");
				}
				system("cls");
				printf("\n\n\nYou scored %d out of 10 questions", scr);
				save(name, scr, Chapter, date, month, year);
				highest(scr, name);
				break;
			}
			case 5:
			{
				system("cls");
				scr = 0;
				printf("\ni.Which is the alternative to SWITCH in C language?\n1.If\t2.Else\n3.If-Else\t4.All of the these");
				printf("\nEnter your answer:");
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 4.");
				}
				printf("\nii.In the switch case block which keyword is used to cover unhandled possibilities?\n1.break \t2.default\n3.continue\t4.all");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 2.");
				}
				system("cls");
				printf("\niii.In the SWITCH-CASE statement the default case must be used?\n1.True\t2.False");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 2.");
				}
				printf("\niv.Within a switch statement?\n1.Continue cannot be used but Break can be used\t2. Continue can be used but Break cannot be used");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 1.");
				}
				system("cls");
				printf("\nv.which of the folowing cannot be checked in switch-case statement?\n1.Character\t2.Integer\n3.Float\t4.enum");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\nRight Answer;");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer was 3.");
				}
				printf("\nvi.Which of the following is the boolean operater for logical-and?\n1.&&\t2.||\n3.&\t4.&&&");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 1.");
				}
				system("cls");
				printf("\nvii.which the following shows the correct syntax for an if statement\n1.if expression\t2.if{expression}\n3.if(expression)\t4.expression if");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 3.");
				}
				printf("\nviii.Evaluate (to true or false)each of the following expressions:\n     14<=14\t14<14\t-9>-25\t-25>-9\n1.true true true true\t2.true false false false\n3.true false true true\t4.true false true false");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 4.");
				}
				system("cls");
				printf("\nix.how many choices are possible when using a single  if-else statement?\n1.1\t2.2\n3.3\t4.4");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The rigt answer was 2.");
				}
				printf("\nx.Evaluate!(1&&!(0 || 1))\n1.True\t2.False\n3.Unevaluatable");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 1.");
				}
				system("cls");
				printf("\n\n\nYou scored %d out of 10 questions", scr);
				save(name, scr, Chapter, date, month, year);
				highest(scr, name);
				break;
			}
			case 6:
			{
				system("cls");
				scr = 0;
				printf("\n\ni.Loops in C Language are implemented using.?");
				printf("\n\n1.While\t\t2.Do while\n3.For\t\t4.All of the above");
				printf("\nEnter your answer:");
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
		
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 4.All of the above.");
				}
				printf("\n\nii.Which loop is faster in C Language?");
				printf("\n\n1.While\t\t2.Do while\n3.For\t\t4.All work at the same speed.");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 4.All work at the same speed.");
				}
				system("cls");
				printf("\n\niii.Choose a correct C Statement.");
				printf("\n\n1.a++ is (a=a+1) POST INCREMENT Operator\t\t2.a-- is (a=a-1) POST DECREMENT Opeartor\n3.++a is (a=a+1) PRE INCRMENT Operator\t\t4.All of the above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 4.All of the above.");
				}
				printf("\n\niv.What is the way to suddenly come out of or Quit any Loop in C Language.?");
				printf("\n\n1.continue; statement\t\t2.break; statement\n3.leave; statement\t\t4.quit; statement");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2.break; statement");
				}
				system("cls");
				printf("\n\nv.What will be the correct syntax for running two variables in for loop simultaneously?");
				printf("\n\n1.for (i = 0; i < n; i++) \nfor (j = 0; j < n; j += 5)\t\t2.for (i = 0, j = 0; i < n, j < n; i++, j += 5)\n3.for (i = 0; i < n;i++){ }\nfor (j = 0; j < n;j += 5){ }\t\t4.None of the above.");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 1.for (i = 0; i < n; i++) \nfor (j = 0; j < n; j += 5)");
				}
				printf("\n\nvi.The conditional operator are also known as");
				printf("\n\n1.Relational operator\t\t2.Binary operator\n3.Ternary operator\t\t4.Arithematic operator");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 3.Ternary operator");
				}
				system("cls");
				printf("\n\nvii.If you have to make decision based on multiple choices, which of the following is best suited?");
				printf("\n\n1.If\t\t2.If Else\n3.If else if \t\t4.All of the above ");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 3.If else if");
				}
				printf("\n\nviii.The continue statment cannot be used with");
				printf("\n\n1.for\t\t2.while\n3.do while  \t\t4.switch");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 4.switch");
				}
				system("cls");
				printf("\n\nix.Using goto inside for loop is equivalent to using");
				printf("\n\n1.continue\t\t2.break\n3.return \t\t4.none of the above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 4.none of above");
				}
				printf("\n\nx.How long the following loop runs?\nfor(x = 1; x = 3; x++)");
				printf("\n\n1.three times\t\t2.four times\n3.forever\t\t4.never");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 4.Never");
				}
				system("cls");
				printf("\n\n\nYou scored %d out of 10 questions", scr);
				save(name, scr, Chapter, date, month, year);
				highest(scr, name);
				break;
			}
			case 7:
			{
				system("cls");
				scr = 0;
				printf("\ni.What is the right way to initialize array?\n1.int num[6]={2,4,12};\n2.int n{}={2,4,12};\n3.int n{6}={2,4,12};\n4.int n(6)={2,4,12};");
				printf("\nEnter your answer:");
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 1.\n");
				}
				printf("\nii.Which of these best describes an array?\n1.A data structure that shows a hierarchical behavior.\n2.Container of objects of similar types.\n3.Arrays are immutable once initialised.\n4.Array is not a data structure");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 2.\n");
				}
				system("cls");
				printf("\niii. What are the Types of Arrays?\n1.int, float, char, double\n2.struct, enum\n3.long\n4.All of the above.");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 4.\n");
				}
				printf("\niv. An array Index starts with.?\n1.-1\n2.0\n3.1\n4.2");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 2.\n");
				}
				system("cls");
				printf("\nv.What does the int(*ptr)[10] declaration mean?\n1.ptr is an array of pointers to 10 integers\n2.ptr is a pointer to an array of 10 integers\n3.ptr is an array of 10 integers\n4.ptr is a pointer to an array");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 2.\n");
				}
				printf("\nvi.If you pass an array as an argument to a function.what actually gets passed?\n1.Value of elements in the array.\n2.First element of the array.\n3.Base address of the array.\n4.Address of the last element of the array");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 3.\n");
				}
				system("cls");
				printf("\nvii.What is the output of C Program.?int main(){ int a[]; a[4] = {1,2,3,4}; printf''%d'', a[0]); }\n1.1\n2.2\n3.4\n4.Compiler error.");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 4.\n");
				}
				printf("\nviii.An entire array is always passed by ___ to a called function.\n1.Call by value\n2.Call by reference\n3.Address relocation\n4.Address restructure");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 2.\n");
				}
			    system("cls");
				printf("\nix.What is an array Base Address in C language.?\n1.Base address is the address of 0th index element.\n2.An array b[] base address is &b[0]\n3.An array b[] base address can be printed with printf('%d', b);\n4.All the above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 2.\n");
				}
				printf("\nx.What is the output of C Program.? int main() { int a[3] = {10,12,14}; a[1]=20; int i=0; while(i<3) { printf(''%d', a[i]); i++; } }\n1.20 12 14\n.2.10 20 14\n3.10 12 20\n.4.Compiler error");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 2.\n");
				}
				system("cls");
				printf("\n\n\nYou scored %d out of 10 questions", scr);
				save(name, scr, Chapter, date, month, year);
				highest(scr, name);
				break;
			}
			case 8:
			{
				system("cls");
				scr = 0;
				printf("\n\ni.Standard library functions are also called as?\n\n1.User defined function\n2.Built-in function\n3.Both of above");
				printf("\nEnter your answer:");
				i = 0;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER!!The right answer was 2.");
				}
				printf("\n\nii.Why are functions used?\n\n1.Avoid repeatedly done task\n2.Divide complex problem into small component\n3.Perform specific task\n4.All of above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER!!The right answer was 4.");
				}
				system("cls");
				printf("\n\niii.Function created by user is called?\n\n1.User defined function\n2.Built-in function\n3.Both of above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER!!The right answer was 1.");
				}
				printf("\n\niv.Can a function return multiple values?\n\n1.No\n2.Yes\n3.May be with the help of pointer variable\n4.Both 1 and 3");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER!!The right answer was 4.");
				}
				system("cls");
				printf("\n\nv.How many agruments can a user-defined function have?\n\n1.According to formal agrument declared in function prototype\n2.According to user's need'\n3.None of above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER!!The right answer was 1.");
				}
				printf("\n\nvi.Function that calls itself is known as?\n\n1.Return type function\n2.Recursive function\n3.Non-return type function");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER!!The right answer was 2.");
				}
				system("cls");
				printf("\n\nvii.There are ____ parts of function prototype?\n\n1.one \n2.two\n3.three\n4.four");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER!!The right answer was 3.");
				}
				printf("\n\nviii.The block of code in which the variable can be access is called?\n\n1.scope of variable \n2.compound area of varaiable\n3.block of variable\n4.location of variable");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER!!The right answer was 1.");
				}
				system("cls");
				printf("\n\nix.Memory is allocated to a local variable at the time of its?\n\n1.declartion \n2.defination\n3.call\n4.destruction");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER!!The right answer was 2.");
				}
				printf("\n\nx.Which of the following variable has more life time??\n\n1.static variable \n2.global variable\n3.local variable");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\n\nRight answer! ;)");
				}
				else
				{
					printf("\n\nWRONG ANSWER!!The right answer was 2.");
				}
				system("cls");
				printf("\n\n\nYou scored %d out of 10 questions", scr);
				save(name, scr, Chapter, date, month, year);
				highest(scr, name);
				break;
			}
			case 9:
			{
				system("cls");
				scr = 0;
				printf("\n\ni.What is the base data type of a pointer variable by which the memory would be allocated to it?");
				printf("\n\n1.unsigning it \t\t2.int \n\n3.float\t\t4.no data type");
				printf("\nEnter your answer:");
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
		
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 1.unsigning it.");
				}
				printf("\n\nii.Prior to using a pointer variable it should be");
				printf("\n\n1.declared\t\t2.initialized\n\n3.botyh declared and initialized\t\t4.none of these");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
		
				if (ans[i] == 2)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2.initialized");
				}
				system("cls");
				printf("\n\niii.In C a pointer variable to an integer can be created by the decalaration");
				printf("\n\n1.int p*;\t\t2.int *p;\n\n3.int +p;\t\t4.int $p;");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2.int *p;");
				}
				printf("\n\niv.In order to fetch the address of the variable we write preceding _________ sign before variable name.");
				printf("\n\n1.Ampersand(&)\t\t2.Comma(,)\t\t3.Asterisk(*)\t\t4.Percent(%)");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 1.Ampersand(&)");
				}
				system("cls");
				printf("\n\nv.Which of the following duplicates the string?");
				printf("\n\n1.strnset\t\t2.strstr\t\t3.strdup\t\t4.stricmp");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is  3.strdup");
				}
				printf("\n\nvi.A pointer variable can be");
				printf("\n\n1.Passed to a function\t\t2.Changed within a function\t\t3. Returned by a function\t\t4.Can be assigned an integer value");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 3.Returned by a function");
				}
				system("cls");
				printf("\n\nvii.What C functions copies the content of one string to another?");
				printf("\n\n1.strcmp\t\t2.strcpy\t\t3.stringcopy\t\t4.ssrcopy");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 2.strcpy.");
				}
				printf("\n\nviii.The string processing related functions are stored in which header file?");
				printf("\n\n1.<stdio.h>\t\t2.<conio.h>\t\t3.<string.h>\t\t4.none of the above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 3.<string.h>");
				}
				system("cls");
				printf("\n\nix.The _______ function appends not more than n characters.");
				printf("\n\n1.strcat()\t\t2.strcon()\t\t3.strncat()\t\t4.memcat()");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 3.strncat()");
				}
				printf("\n\nx.A C string elements are always stored in?");
				printf("\n\n1.Random memory locations\t\t2.Alternate memory locations\t\t3.Sequential memory locations\t\t4.None of the above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\n\nRight answer!:-D");
				}
				else
				{
					printf("\n\nWRONG ANSWER!! The correct answer is 3.Sequential memory locations");
				}
				system("cls");
				printf("\n\n\nYou scored %d out of 10 questions", scr);
				save(name, scr, Chapter, date, month, year);
				highest(scr, name);
				break;
			}
			case 10:
			{
				system("cls");
				scr = 0;
				printf("\ni.What is the size of a C structure?\n1.C structure is always 128 bytes\t                2.Size of C structure is the total bytes of all elements of structure\n3.Size of C structure is the size of largest elements\t4.None of the above");
				printf("\nEnter your answer:");
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 2.");
				}
				printf("\n\nii.A C structure or User defined datatype is also called ________.\n1.Derived data type\t2.Secondary data type\n3.Aggregate data type\t4.all of the above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 4.");
				}
				system("cls");
				printf("\n\niii.Which of the following return-type cannot be used for a function in C?\n1.char*\t2.struct\n3.void\t4.none of the mentioned");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 4.");
				}
				printf("\n\niv.Which of the following is not possible under any scenario?\n1.s1 = &s2;\t        2.s1 = s2;\n3.(*s1).number = 10;\t4.None of the mentioned");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 4.");
				}
				system("cls");
				printf("\n\nv.What is the return type of malloc() or calloc()?\n1.void*\t        2.Pointer of allocated memory type\n3.void**\t4.int");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\nRight Answer;");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer was 1.");
				}
				printf("\n\nvi.Which of the following header files must necessarily be included to use dynamic memory allocation functions?\n1.stdlib.h\t2.stdio.h\n3.memory.h\t4.dos,h");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 1.");
				}
				system("cls");
				// stdlib.h is a header file which stands for the standard library. It consists of the declaration for dynamic memory allocation functions such as malloc(), calloc(), realloc() and free.
				printf("\n\nvii.Which of the following is an example of static memory allocation?\n1.linked list\t2.stack\n3.queue\t        4.array");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 4.");
				} // Array is an example of static memory allocation whereas linked list, queue and stack are examples for dynamic memory allocation.
				printf("\n\nviii.We use malloc and calloc for\n1.Dynamic memory allocation\t                2.Static memory allocation\n3.Both dynamic and static memory allocation\t4.none of the above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 1.");
				}
				system("cls");
				printf("\n\nix.Which operator connects the structure name to its member name?\n1. _\t2. <-\n3. .\t4.Both <- and .");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The rigt answer was 3.");
				}
				printf("\n\nx.Which of the following operation is illegal in structures?\n1.Typecasting of structure\t                2.Pointer to a variable of same structure\n3.Dynamic allocation of memory for structure\t4.All of the mentioned");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\nRight answer ;)");
				}
				else
				{
					printf("\nWORNG ANSWER!!.The right answer was 1.");
				}
				system("cls");
				printf("\n\n\nYou scored %d out of 10 questions", scr);
				save(name, scr, Chapter, date, month, year);
				highest(scr, name);
				break;
			}
			case 11:
			{
				system("cls");
				scr = 0;
				printf("\ni.Which mode is used to open an existing file for both reading and writing?\n1.'w'\n2.'w+'\n3.'r+'\n4.'a+'");
				printf("\nEnter your answer:");
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 3.\n");
				}
				printf("\nii.FILE is of type ____?\n1.int type\n2.char type\n3.struct type\n4.None of the mentioned");
				printf("\nEnter your answer:");
				scanf("%d", &ans[i]);
				i++;
				if (ans[i] == 3)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 3.\n");
				}
				system("cls");
				printf("\niii.Where is a file temporarily stored before read or write operation in C language.?\n1.Notepad\n2.RAM\n3.Hard disk\n4.Buffer");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 4.\n");
				}
				printf("\niv.What is the keyword used to declare a C file pointer.?\n1.file\n2.FILE\n3.FILEFP\n4.filefp");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 2.\n");
				}
				system("cls");
				printf("\nv.What is the need for closing a file in C language.?\n1.fclose(fp) closes a file to release the memory used in opening a file.\n2.Closing a file clears Buffer contents from RAM or memory.\n3.Unclosed files occupy memory and PC hangs when on low memory.\n4.All the above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 4.\n");
				}
				printf("\nvi.What is the C function used to move current pointer to the beginning of file.?FILE *fp;\n1.rev(fp)\n2.rewind(fp)\n3.rew(fp)\n4.wind(fp)");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 2)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 2.\n");
				}
				system("cls");
				printf("\nvii.For binary files, what must be appended to the mode string?\n1.'b'\n2.'B'\n3.'binary'\n4.'01'");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 1)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 1.\n");
				}
				printf("\nviii.FILE reserved word is?\n1.A structure tag declared in stdio.h\n2.One of the basic datatypes in c\n3.Pointer to the structure defined in stdio.h\n4.It is a type name defined in stdio.h");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 4.\n");
				}
				system("cls");
				printf("\nix. Which type of files can't be opened using fopen()?\n1. .txt\n2. .bin\n3. .c\n4. None of the above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 4)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 4.\n");
				}
				printf("\nx.fseek() should be preferred over rewind() mainly because of?\n1.rewind() doesn't work for empty files\n2.rewind() may fail for large files\n3.In rewind, there is no way to check if the operations completed successfully\n4.All of the above");
				printf("\nEnter your answer:");
				i++;
				scanf("%d", &ans[i]);
				if (ans[i] == 3)
				{
					scr++;
					printf("\nRight answer! ;)\n");
				}
				else
				{
					printf("\nWRONG ANSWER!!.The right answer is 3.\n");
				}
			    system("cls");
				printf("\n\n\nYou scored %d out of 10 questions", scr);
				save(name, scr, Chapter, date, month, year);
				highest(scr, name);
				break;
			}
			}
			break;
		case 'H':
		{
			FILE *ptr;
			char c;
			ptr = fopen("score.txt", "r");
			system("cls");
			while (c != EOF)
			{
				c = fgetc(ptr);
				printf("%c", c);
			}
			//	printf("%s",c);
			fclose(ptr);
			printf("\n\n");
			break;
		}
		case 'T':
		{
			FILE *ptr;
			char c;
			ptr = fopen("highest.txt", "r");
			system("cls");
			
			printf("\nTop score was ");
			while (c != EOF)
			{
				c = getc(ptr);
				printf("%c", c);
			}
			fclose(ptr);
			printf("\n\n");
			break;
		}
		case 'N':
		{
			system("cls");
			printf("\n	->C-quiz is a game where you have answer to certain questions realting to C-programming\n	->Your knowldegde about C-programming are evaluated by playing this game\n	->Your have to select the start option (S) to start the game\n	->You are provided 11 different chapters realting to C and you have to choose one chapter you are good at or you like the most\n	->After you choose the question you're presented with 10 questions along with 3 options, where only one option is correct.\n	->You have to choose the correct option, to gain points.\n	->Your result is diplayed after the end of the question i.e after the 10th question.\n	->GOOD LUCK!! Try to score 10/10 ;) ;D");
			break;
		}
		case 'E':
		{
			printf("\n			Thank you for being with us!");
			break;
		}
		default:
			printf("\n			You have to enter right choice!!");
			break;
		}
	}
}

void greeting()
{
	system("cls");
	printf("\n\t\t\t\t\tC QUIZ GAME\n");
	printf("\n\t\t\t________________________________________");
	printf("\n\t\t\t\t\t   WELCOME ");
	printf("\n\t\t\t\t\t      to ");
	printf("\n\t\t\t\t\t   THE GAME ");
	printf("\n\t\t\t________________________________________");
	printf("\n\t\t\t________________________________________");
}

/*void askDetails(char* name, int* date, int* month, int* year)
{
	printf("\n\t\t\t\t\tEnter your name:");
	fflush(stdin);
	gets(name);
	printf("\n\t\t\t\t\tEnter todays date(DD/MM/YYYY):");
	scanf("%d%d%d", &date, &month, &year);
	system("cls");
	printf("\n\t\t\t\t\tHello!!%s :) \n\t\t\t\tWelcome to C-Quiz", name);
}*/

void mainMenu()
{
	printf("\n\t\t\t----------------------** MAIN MENU **--------------------------");
	printf("\n\t\t-----------------------------------------------------------");
	printf("\n\n\t\t\tStart the Game(S)");
	printf("\n\t\t-----------------------------------------------------------");
	printf("\n\t\t\tHistory(H)");
	printf("\n\t\t-----------------------------------------------------------");
	printf("\n\t\t\tTop score(T)");
	printf("\n\t\t-----------------------------------------------------------");
	printf("\n\t\t\tNeed Help(N)");
	printf("\n\t\t-----------------------------------------------------------");
	printf("\n\t\t\tExit(E)");
	printf("\n\t\t-----------------------------------------------------------");
	printf("\n\t\t\tEnter your choice:");
	printf("\n\t\t-----------------------------------------------------------");
}

void chaptersMenu()
{
	system("cls");
	printf("\n\t\t\t\tNow,Lets begin the game!!\n\t\t\t\tFirst choose the chapter you like. :)");
	printf("\nChapter 1:Introduction to the C-language\nChapter 2:Data Types and Variables\nChapter 3:Input/Output Management\nChapter 4:Expressions and Operators\nChapter 5:Selection statements\nChapter 6:Loops\nChapter 7:Arrays\nChapter 8:Modular Programming with Functions\nChapter 9:Pionters and Strings\nChapter 10:Structure and Dynamic Menmory Allocation\nChapter 11:File Input/Output\n\nEnter the chapter you want to answer(Only one integer):");
}

void save(char name[20], int scr, int Chapter, int date, int month, int year)
{
	FILE *ptr;
	ptr = fopen("score.txt", "a");
	if(ptr==0)
	{
		ptr=fopen("score.txt","w");
	}
	fprintf(ptr, "\n\nDate: %d - %d - %d\n%s scored %d. You chose chapter %d.", date, month, year, name, scr, Chapter);
	fclose(ptr);
}

void highest(int scr, char name[20])
{
	FILE *ptr;
	ptr = fopen("highest.txt", "r");
	int l = 0;
	char s[20];
	fscanf(ptr, "%d %s", &l, s);
	fclose(ptr);

//	printf("OLD line: %d %s", l, s);
	//	int l = 0;
	if (scr > l)
	{
		ptr = fopen("highest.txt", "w");
		// putw(file content delete garera arko int halne)
		fprintf(ptr, "%d by %s\n", scr, name);
		fclose(ptr);
	}
	/*
	int l;
	l=getw(ptr);
	if(l>scr)
	{
		 l=scr
	*/
}

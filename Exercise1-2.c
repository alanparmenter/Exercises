//EXPERIMENT WITH OTHER ESCAPE SEQUENCES
#include <stdio.h>
									
main()								
{
//from 'complete set' table on p38:
	printf("hello, world\a");		//hello, world *alert character
	printf("hello, world\b");		//hello, world *backspace
	printf("hello, world\f");		//hello, world *formfeed
	printf("hello, world\n");		//hello, world *newline
	printf("hello, world\r");		//hello, world *carriage return
	printf("hello, world\t");		//hello, world *horizontal tab
	printf("hello, world\v");		//hello, world *vertical tab
	printf("hello, world\\");		//hello, world\ *backslash
	printf("hello, world\?");		//hello, world? *question mark
	printf("hello, world\'");		//hello, world' *single quote
	printf("hello, world\"");		//hello, world" *double quote
	printf("hello, world\111");		//hello, worldI *octal number
	printf("hello, world\x1F");		//hello, world *hexadecimal number
//original alphanumeric experiment:
//    printf("hello, world\a");		//hello, world (*audible alert!)
//    printf("hello, world\b");		//hello, worl (backspace?)
//    printf("hello, world\c");		//hello, worldc (warning generated: unknown escape sequence)
//    printf("hello, world\d");		//hello, worldd (warning generated: unknown escape sequence)
//    printf("hello, world\e");		//hello, world (escape?)
//    printf("hello, world\f");		//hello, world (newline and indent – *formfeed!)
//    printf("hello, world\g");		//hello, worldg (warning generated: unknown escape sequence)
//    printf("hello, world\h");		//hello, worldh (warning generated: unknown escape sequence)
//    printf("hello, world\i");		//hello, worldi (warning generated: unknown escape sequence)
//    printf("hello, world\j");		//hello, worldj (warning generated: unknown escape sequence)
//    printf("hello, world\k");		//hello, worldk (warning generated: unknown escape sequence)
//    printf("hello, world\l");		//hello, worldl (warning generated: unknown escape sequence)
//    printf("hello, world\m");		//hello, worldm (warning generated: unknown escape sequence)
//    printf("hello, world\n");		//hello, world (newline)
//    printf("hello, world\o");		//hello, worldo (warning generated: unknown escape sequence)
//    printf("hello, world\p");		//hello, worldp (warning generated: unknown escape sequence)
//    printf("hello, world\q");		//hello, worldq (warning generated: unknown escape sequence)
//    printf("hello, world\r");		//nothing! (carriage return)
//    printf("hello, world\s");		//hello, worlds (warning generated: unknown escape sequence)
//    printf("hello, world\t");		//hello, world (tab)
//    printf("hello, world\u");		//did not compile (error generated: /u with no following hex)
//    printf("hello, world\v");		//hello, world (newline and indent - *vertical tab!)
//    printf("hello, world\w");		//hello, worldw (warning generated: unknown escape sequence)
//    printf("hello, world\x");		//did not compile (error generated: /x with no following hex)
//    printf("hello, world\y");		//hello, worldy (warning generated: unknown escape sequence)
//    printf("hello, world\z");		//hello, worldz (warning generated: unknown escape sequence)
//    printf("hello, world\0");		//hello, world (*interpreted as octal!)
//    printf("hello, world\1");		//hello, world (*interpreted as octal!)
//    printf("hello, world\2");		//hello, world (*interpreted as octal!)
//    printf("hello, world\3");		//hello, world (*interpreted as octal!)
//    printf("hello, world\4");		//hello, world (*interpreted as octal!)
//    printf("hello, world\5");		//hello, world (*interpreted as octal!)
//    printf("hello, world\6");		//hello, world (*interpreted as octal!)
//    printf("hello, world\7");		//hello, world (*interpreted as octal!)
//    printf("hello, world\8");		//hello, world8 (warning generated: unknown escape sequence)
//    printf("hello, world\9");		//hello, world9 (warning generated: unknown escape sequence)
//    printf("hello, world\'");		//hello, world?
//

}

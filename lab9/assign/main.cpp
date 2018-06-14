#include <iostream>
#include "pokedex.h"
using namespace std;
int main() 
{
	std::string inputType, inputName;
	Pokedex pokedex;

	pokedex.insert(PokemonType_Grass, "Bulbasaur", "                                           /\n                        _,.------....___,.' ',.-.\n                     ,-'          _,.--\"        |\n                   ,'         _.-'              .\n                  /   ,     ,'                   `\n                 .   /     /                     ``.\n                 |  |     .                       \\.\\ \n       ____      |___._.  |       __               \\ `.\n     .'    `---\"\"       ``\"-.--\"'`  \\               .  \\\n    .  ,            __               `              |   .\n    `,'         ,-\"'  .               \\             |    L\n   ,'          '    _.'                -._          /    |\n  ,`-.    ,\".   `--'                      >.      ,'     |\n . .'\'   `-'       __    ,  ,-.         /  `.__.-      ,'\n ||:, .           ,'  ;  /  / \\ `        `.    .      .'/\n j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , /\n/ L:_  |                 .  \"' :_;                `.'.'\n.    \"\"'                  \"\"\"\"\"'                    V\n `.                                 .    `.   _,..  `\n   `,_   .    .                _,-'/    .. `,'   __  `\n    ) \\`._        ___....----\"'  ,'   .'  \\ |   '  \\  .\n   /   `. \"`-.--\"'         _,' ,'     `---' |    `./  |\n  .   _  `\"\"'--.._____..--\"   ,             '         |\n  | .\" `. `-.                /-.           /          ,\n  | `._.'    `,_            ;  /         ,'          .\n .'          /| `-.        . ,'         ,           ,\n '-.__ __ _,','    '`-..___;-...__   ,.'\\ ____.___.'\n `\"^--'..'   '-`-^-'\"--    `-^-'`.''\"\"\"\"\"`.,^.`.--' \n");
	pokedex.insert(PokemonType_Grass, "Ivysaur", "		                               ,'\"`.,./.\n                             ,'        Y',\"..\n                           ,'           \\  | \\\n                          /              . |  `\n                         /               | |   \\\n            __          .                | |    .\n       _   \\  `. ---.   |                | j    |\n      / `-._\\   `Y   \\  |                |.     |\n     _`.    ``    \\   \\ |..              '      |,-'\"\"7,....\n     l     '-.     . , `|  | , |`. , ,  /,     ,'    '/   ,'_,.-.\n     `-..     `-.  : :     |/ `   ' \"\\,' | _  /          '-'    /___\n      \\\"\"' __.,.-`.: :        /   /._    l'.,'\n       `--,   _.-' `\".           /__ `'-.' '         .\n       ,---..._,.--\"\"\"\"\"\"\"--.__..----,-.'   .  /    .'   ,.--\n       |                          ,':| /    | /     ;.,-'--      ,.-\n       |     .---.              .'  :|'     |/ ,.-='\"-.`\"`' _   -.'\n       /    \\    /               `. :|--.  _L,\"---.._        \"----'\n     ,' `.   \\ ,'           _,     `''   ``.-'       `-  -..___,'\n    . ,.  .   `   __     .-'  _.-           `.     .__    \\\n    |. |`        \"  ;   !   ,.  |             `.    `.`'---'\n    ,| |C\\       ` /    | ,' |(]|            -. |-..--`\n   /  \"'--'       '      /___|__]        `.  `- |`.\n  .       ,'                   ,   /       .    `. \\\n    \\                      .,-'  ,'         .     `-.\n     x---..`.  -'  __..--'\"/\"\"\"\"\"  ,-.      |   |   |\n    / \\--._'-.,.--'     _`-    _. ' /       |     -.|\n   ,   .   `-..__ ...--'  _,.-' | `   ,.-.  ;   /  '|\n  .  _,'         '\"-----\"\"      |    `   | /  ,'    ;\n  |-'  .-.    `._               |     `._// ,'     /\n _|    `-'   _,' \"`--.._________|        `,'    _ /.\n//\\   ,-._.'\"/\\__,.   _,\"     /_\\__/`. /'.-.'.-/_,`-' \n`-\"`\"' v'    `\"  `-`-\"              `-'`-`  `'");
	pokedex.insert(PokemonType_Grass, "Venusaur", "		                           _._       _,._\n                        _.'   `. ' .'   _`.\n                ,\"\"\"/`\"\"-.-.,/. ` V'\\-,`.,--/\"\"\".\"-..\n              ,'    `...,' . ,\\-----._|     `.   /   \\\n             `.            .`  -'`\"\" .._   :> `-'   `.\n            ,'  ,-.  _,.-'| `..___ ,'   |'-..__   .._ L\n           .    \\_ -'   `-'     ..      `.-' `.`-.'_ .|\n           |   ,',-,--..  ,--../  `.  .-.    , `-.  ``.\n           `.,' ,  |   |  `.  /'/,,.\\/  |    \\|   |\n                `  `---'    `j   .   \\  .     '   j\n              ,__`\"        ,'|`'\\_/`.'\'        |\\-'-, _,.\n       .--...`-. `-`. /    '- ..      _,    /\\ ,' .--\"'  ,'\".\n     _'-\"\"-    --  _`'-.../ __ '.'`-^,_`-\"\"\"\"---....__  ' _,-`\n   _.----`  _..--.'        |  \"`-..-\" __|'\"'         .\"\"-. \"\"'--.._\n  /        '    /     ,  _.+-.'  ||._'   \"\"\"\". .          `     .__\\\n `---    /        /  / j'       _/|..`  -. `-`\\ \\   \\  \\   `.  \\ `-..\n,\" _.-' /    /` ./  /`_|_,-\"   ','|       `. | -'`._,   L  \\ .  `.   |\n`\"' /  /  / ,__...-----| _.,  ,'            `|----.._`-.|' |. .` ..  .\n   /  '| /.,/   \\--.._ `-,' ,          .  '`.'  __,., '  ''``._ \\ \\`,'\n  /_,'---  ,     \\`._,-` \\ //  / . \\    `._,  -`,  / / _   |   `-L -\n   /       `.     ,  ..._ ' `_/ '| |\\ `._'       '-.'   `.,'     |\n  '         /    /  ..   `.  `./ | ; `.'    ,\"\" ,.  `.    \\      |\n   `.     ,'   ,'   | |\\  |       \"        |  ,'\\ |   \\    `    ,L\n   /|`.  /    '     | `-| '                  /`-' |    L    `._/  \\\n  / | .`|    |  .   `._.'                   `.__,'   .  |     |  (`\n '-\"\"-'_|    `. `.__,._____     .    _,        ____ ,-  j     \".-'\"'\n        \\      `-.  \\/.    `\"--.._    _,.---'\"\"\\/  \"_,.'     /-'\n         )        `-._ '-.        `--\"      _.-'.-\"\"        `.\n        ./            `,. `\".._________...\"\"_.-\"`.          _j\n       /_\\.__,\"\".   ,.'  \"`-...________.---\"     .\".   ,.  / \\\n              \\_/\"\"\"-'                           `-'--(_,`\"`-` ");
	pokedex.insert(PokemonType_Fire, "Charmander", "	              _.--\"\"`-..\n            ,'          `.\n          ,'          __  `.\n         /|          \" __   \\\n        , |           / |.   .\n        |,'          !_.'|   |\n      ,'             '   |   |\n     /              |`--'|   |\n    |                `---'   |\n     .   ,                   |                       ,\".\n      ._     '           _'  |                    , ' \\ `\n  `.. `.`-...___,...---\"\"    |       __,.        ,`\"   L,|\n  |, `- .`._        _,-,.'   .  __.-'-. /        .   ,    \\\n-:..     `. `-..--_.,.<       `\"      / `.        `-/ |   .\n  `,         \"\"\"\"'     `.              ,'         |   |  ',,\n    `.      '            '            /          '    |'. |/\n      `.   |              \\       _,-'           |       ''\n        `._'               \\   '\"\\                .      |\n           |                '     \\                `._  ,'\n           |                 '     \\                 .'|\n           |                 .      \\                | |\n           |                 |       L              ,' |\n           `                 |       |             /   '\n            \\                |       |           ,'   /\n          ,' \\               |  _.._ ,-..___,..-'    ,'\n         /     .             .      `!             ,j'\n        /       `.          /        .           .'/\n       .          `.       /         |        _.'.'\n        `.          7`'---'          |------\"'_.'\n       _,.`,_     _'                ,''-----\"'\n   _,-_    '       `.     .'      ,\\\n   -\" /`.         _,'     | _  _  _.|\n    \"\"--'---\"\"\"\"\"'        `' '! |! /\n                            `\" \" -' ");
	pokedex.insert(PokemonType_Fire, "Charmeleon", "		                      ,-'`\\\n                  _,\"'    j\n           __....+       /               .\n       ,-'\"             /               ; `-._.'.\n      /                (              ,'       .'\n     |            _.    \\             \\   ---._ `-.\n     ,|    ,   _.'  Y    \\             `- ,'   \\   `.`.\n     l'    \\ ,'._,\\ `.    .              /       ,--. l\n  .,-        `._  |  |    |              \\       _   l .\n /              `\"--'    /              .'       ``. |  )\n.\\    ,                 |                .        \\ `. '\n`.                .     |                '._  __   ;. \'\n  `-..--------...'       \\                  `'  `-\"'.  \\\n      `......___          `._                        |  \\\n               /`            `..                     |   .\n              /|                `-.                  |    L\n             / |               \\   `._               .    |\n           ,'  |,-\"-.   .       .     `.            /     |\n         ,'    |     '   \\      |       `.         /      |\n       ,'     /|       \\  .     |         .       /       |\n     ,'      / |        \\  .    +          \\    ,'       .'\n    .       .  |         \\ |     \\          \\_,'        / j\n    |       |  L          `|      .          `        ,' '\n    |    _. |   \\          /      |           .     .' ,'\n    |   /  `|    \\        .       |  /        |   ,' .'\n    |   ,-..\\     -.     ,        | /         |,.' ,'\n    `. |___,`    /  `.   /`.       '          |  .'\n      '-`-'     j     ` /.\"7-..../|          ,`-'\n                |        .'  / _/_|          .\n                `,       `\"'/\"'    \\          `.\n                  `,       '.       `.         |\n             __,.-'         `.        \\'       |\n            /_,-'\\          ,'        |        _.\n             |___.---.   ,-'        .-':,-\"`\\,' .\n                  L,.--\"'           '-' |  ,' `-.\\\n                                        `.'\n                                        ");
	pokedex.insert(PokemonType_Fire, "Charizard", "		                 .\"-,.__\n                 `.     `.  ,\n              .--'  .._,'\"-' `.\n             .    .'         `'\n             `.   /          ,'\n               `  '--.   ,-\"'\n                `\"`   |  \\\n                   -. \\, |\n                    `--Y.'      ___.\n                         \\     L._, \\\n               _.,        `.   <  <\\               _\n             ,' '           `, `.   | \\            ( `\n          ../, `.            `  |    .\\`.           \\ \\_\n         ,' ,..  .           _.,'    ||\\l            )  '\".\n        , ,'   \\           ,'.-.`-._,'  |           .  _._`.\n      ,' /      \\ \\        `' ' `--/   | \\          / /   ..\\\n    .'  /        \\ .         |\\__ - _ ,'` `        / /     `.`.\n    |  '          ..         `-...-\"  |  `-'      / /        . `.\n    | /           |L__           |    |          / /          `. `.\n   , /            .   .          |    |         / /             ` `\n  / /          ,. ,`._ `-_       |    |  _   ,-' /               ` \\\n / .           \"`_/. `-_ \\_,.  ,'    +-' `-'  _,        ..,-.    \\`.\n.  '         .-f    ,'   `    '.       \\__.---'     _   .'   '     \\ \\\n' /          `.'    l     .' /          \\..      ,_|/   `.  ,'`     L`\n|'      _.-\"\"` `.    \\ _,'  `            \\ `.___`.'\"`-.  , |   |    | \\\n||    ,'      `. `.   '       _,...._        `  |    `/ '  |   '     .|\n||  ,'          `. ;.,.---' ,'       `.   `.. `-'  .-' /_ .'    ;_   ||\n|| '              V      / /           `   | `   ,'   ,' '.    !  `. ||\n||/            _,-------7 '              . |  `-'    l         /    `||\n. |          ,' .-   ,' ||               | .-.        `.      .'     ||\n `'        ,'    `\".'    |               |    `.        '. -.'       `'\n          /      ,'      |               |,'    \\-.._,.'/'\n          .     /        .               .       \\    .''\n        .`.    |         `.             /         :_,'.'\n          \\ `...\\   _     ,'-.        .'         /_.-'\n           `-.__ `,  `'   .  _.>----''.  _  __  /\n                .'        /\"'          |  \"'   '_\n               /_|.-'\\ ,\".             '.'`__'-( \\\n                 / ,\"'\"\\,'               `/  `-.|\"");
	pokedex.insert(PokemonType_Water, "Squirtle", "               _,........__\n            ,-'            \"`-.\n          ,'                   `-.\n        ,'                        \\\n      ,'                           .\n      .'\\               ,\"\".       `\n     ._.'|             / |  `       \\\n     |   |            `-.'  ||       `.\n     |   |            '-._,'||       | \\\n     .`.,'             `..,'.'       , |`-.\n     l                       .'`.  _/  |   `.\n     `-.._'-   ,          _ _'   -\" \\  .     `\n`.\"\"\"\"\"'-.`-...,---------','         `. `....__.\n.'        `\"-..___      __,'\\          \\  \\     \\\n\\_ .          |   `\"\"\"\"'    `.           . \\     \\\n  `.          |              `.          |  .     L\n    `.        |`--...________.'.        j   |     |\n      `._    .'      |          `.     .|   ,     |\n         `--,\\       .            `7\"\"' |  ,      |\n            ` `      `            /     |  |      |    _,-'\"\"\"`-.\n             \\ `.     .          /      |  '      |  ,'          `.\n              \\  v.__  .        '       .   \\    /| /              \\\n               \\/    `\"\"\"\\\"\"\"\"\"\"`.       \\   \\  /.''                |\n                `        .        `._ ___,j.  `/ .-       ,---.     |\n                ,`-.      \\         .\"     `.  |/        j     `    |\n               /    `.     \\       /         \\ /         |     /    j\n              |       `-.   7-.._ .          |\"          '         /\n              |          `./_    `|          |            .     _,'\n              `.           / `----|          |-............`---'\n                \\          \\      |          |\n               ,'           )     `.         |\n                7____,,..--'      /          |\n                                  `---.__,--.'mh");
	pokedex.insert(PokemonType_Water, "Wartortle", "     __                                _.--'\"7\n    `. `--._                        ,-'_,-  ,'\n     ,'  `-.`-.                   /' .'    ,|\n     `.     `. `-     __...___   /  /     - j\n       `.     `  `.-\"\"        \" .  /       /\n         \\     /                ` /       /\n          \\   /                         ,'\n          '._'_               ,-'       |\n             | \\            ,|  |   ...-'\n             || `         ,|_|  |   | `             _..__\n            /|| |          | |  |   |  \\  _,_    .-\"     `-.\n           | '.-'          |_|_,' __!  | /|  |  /           \\\n   ,-...___ .=                  ._..'  /`.| ,`,.      _,.._ |\n  |   |,.. \\     '  `'        ____,  ,' `--','  |    /      |\n ,`-..'  _)  .`-..___,---'_...._/  .'      '-...'   |      /\n'.__' \"\"'      `.,------'\"'      ,/            ,     `.._.' `.\n  `.             | `--........,-'.            .         \\     \\\n    `-.          .   '.,--\"\"     |           ,'\\        |      .\n       `.       /     |          L          ,\\  .       |  .,---.\n         `._   '      |           \\        /  .  L      | /   __ `.\n            `-.       |            `._   ,    l   .    j |   '  `. .\n              |       |               `\"' |  .    |   /  '      .' |\n              |       |                   j  |    |  /  , `.__,'   |\n              `.      L                 _.   `    j ,'-'           |\n               |`\"---..\\._______,...,--' |   |   /|'      /        j\n               '       |                 |   .  / |      '        /\n                .      .              ____L   \'  j    -',       /\n               / `.     .          _,\"     \\   | /  ,-','      ,'\n              /    `.  ,'`-._     /         \\  i'.,'_,'      .'\n             .       `.      `-..'             |_,-'      _.'\n             |         `._      |            ''/      _,-'\n             |            '-..._\\             `__,.--'\n            ,'           ,' `-.._`.            .\n           `.    __      |       \"'`.          |\n             `-\"'  `\"\"\"\"'            7         `.\n                                    `---'--.,'\"`'");
	pokedex.insert(PokemonType_Water, "Blastoise", "                       _\n            _,..-\"\"\"--' `,.-\".\n          ,'      __.. --',  |\n        _/   _.-\"' |    .' | |       ____\n  ,.-\"\"'    `-\"+.._|     `.' | `-..,',--.`.\n |   ,.                      '    j 7    l \\__\n |.-'                            /| |    j||  .\n `.                   |         / L`.`\"\"','|\\  \\\n   `.,----..._       ,'`\"'-.  ,'   \\ `\"\"'  | |  l\n     Y        `-----'       v'    ,'`,.__..' |   .\n      `.                   /     /   /     `.|   |\n        `.                /     l   j       ,^.  |L\n          `._            L       +. |._   .' \\|  | \\\n            .`--...__,..-'\"\"'-._  l L  \"\"\"    |  |  \\\n          .'  ,`-......L_       \\  \\ \\     _.'  ,'.  l\n       ,-\"`. / ,-.---.'  `.      \\  L..--\"'  _.-^.|   l\n .-\"\".'\"`.  Y  `._'   '    `.     | | _,.--'\"     |   |\n  `._'   |  |,-'|      l     `.   | |\"..          |   l\n  ,'.    |  |`._'      |      `.  | |_,...---\"\"\"\"\"`    L\n /   |   j _|-' `.     L       | j ,|              |   |\n`--,\"._,-+' /`---^..../._____,.L',' `.             |\\  |\n   |,'      L                   |     `-.          | \\j\n            .                    \\       `,        |  |\n             \\                __`.Y._      -.     j   |\n              \\           _.,'       `._     \\    |  j\n              ,-\"`-----\"\"\"\"'           |`.    \\  7   |\n             /  `.        '            |  \\    \\ /   |\n            |     `      /             |   \\    Y    |\n            |      \\    .             ,'    |   L_.-')\n             L      `.  |            /      ]     _.-^._\n              \\   ,'  `-7         ,-'      / |  ,'      `-._\n             _,`._       `.   _,-'        ,',^.-            `.\n          ,-'     v....  _.`\"',          _:'--....._______,.-'\n        ._______./     /',,-'\"'`'--.  ,-'  `.\n                 \"\"\"\"\"`.,'         _\\`----...'\n                        --------\"\"'");

	while (true) 
	{
		std::cout << "========================" << std::endl;
		std::cout << "ASCII POKEDEX" << std::endl;
		std::cout << "Has a total of 9 pokemon! " << std::endl;
		std::cout << std::endl;
		std::cout << "Grass = 1" << std::endl;
		std::cout << "Fire = 2" << std::endl;
		std::cout << "Water = 3" << std::endl;
		std::cout << "Enter Pokedex type number and name (or -1 q to quit)." << std::endl;
		std::cin >> inputType >> inputName;
		
		// if input is -1 q, quit the program
		if (inputType == "-1" && inputName == "q")
		{
			break;
		}

		std::cout << "Trying to find " << inputType << " " << inputName << std::endl;
		
		// WILL THROW EXCEPTION
		int number;
		try {number = std::stoi(inputType.c_str());}
		catch (std::out_of_range& e) {
			cout << "stoi: out of range" << endl;
			continue;
		}
		catch (invalid_argument& e) {
			cout << "stoi: unable to convert" << endl;
			continue;
		}

		PokemonType type = (PokemonType) (number - 1);

		// SHOULD HANDLE SEGFAULT
		try {std::cout << pokedex.getImage(type, inputName) << std::endl;}
		catch (std::out_of_range& e) {
			cout << e.what() << endl;
		}
		catch (invalid_argument& e) {
			cout << e.what() << endl;
		}
		catch (int& e) {
			break;
		}
	}
}

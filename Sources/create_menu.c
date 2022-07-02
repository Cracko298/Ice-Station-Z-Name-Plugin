#include "cheats.h"

#define ENTRY_COUNT 300

typedef struct s_menu
{
	int         count;
	int         status;
	u32         f[ENTRY_COUNT];
	u32         s[ENTRY_COUNT];
	int         a[ENTRY_COUNT];
	const char  *t[ENTRY_COUNT];
	const char  *n[ENTRY_COUNT];
	void        (*fp[ENTRY_COUNT])();
}             t_menu;


typedef void    (*FuncPointer)(void);
extern t_menu menu;


void    new_super_unselectable_entry(char *str, FuncPointer function)
{
	int index;

	index = menu.count;
	if (index >= 300)
		return;
	new_unselectable_entry(str);
	menu.f[index] |= BIT(0) | BIT(1);
	menu.fp[index] = function;
}

void with_note_common(const char *name, const char *note, void (*cheatfunction)(void), int type)
{
	int     index;

	if (type == 0)
		index = new_entry((char *)name, cheatfunction);
	else if (type == 1)
		index = new_radio_entry((char *)name, cheatfunction);
	else if (type == 2)
		index = new_spoiler((char *)name);
	else return;
	set_note(note, index);
}

void new_entry_with_note(const char *name, const char *note, void (*cheatfunction)(void))
{
	with_note_common(name, note, cheatfunction, 0);
}

void new_radio_entry_with_note(const char *name, const char *note, void (*cheatfunction)(void))
{
	with_note_common(name, note, cheatfunction, 1);
}

void new_spoiler_with_note(const char *name, const char *note)
{
	with_note_common(name, note, NULL, 2);
}

char	*builder_name = "Cracko298";


void	my_menus(void)
{
	new_spoiler("Status Codes");

		new_entry("All Status Max", All_Status_Max);
		new_entry("Max Health", Max_Health);
		new_entry("Max Food", Max_Food);
		new_entry("Max Water", Max_Water);
		new_entry("Max Battery", Max_Battery);
		new_entry("Always Day v1", Always_Day_vOne);
		new_entry("Faster Load Times", Faster_Load_Times);

	exit_spoiler();

	new_spoiler("Name Codes");

		new_spoiler("Hacker Player Names");

			new_entry("Online Name  Cracko298", Online_Name__CrackoTwoNineEight);
			new_entry("Online Name  Owl  Gbc", Online_Name__Owl__Gbc);
			new_entry("Online Name  DarkCrowL", Online_Name__DarkCrowL);
			new_entry("Online Name  Gage C NC", Online_Name__Gage_C_NC);
			new_entry("Online Name  goldfishRX", Online_Name__goldfishRX);
			new_entry("Online Name  VIRUS_K1NG", Online_Name__VIRUS_KOneNG);
			new_entry("Online Name  TIME BOMB ", Online_Name__TIME_BOMB_);
			new_entry("Online Name  Zamasu EXE", Online_Name__Zamasu_EXE);
			new_entry("Online Name  Hunter CAT", Online_Name__Hunter_CAT);
			new_entry("Online Name  GamerX CAT", Online_Name__GamerX_CAT);
			new_entry("Online Name  Tumpet2019", Online_Name__TumpetTwoZeroOneNine);
			new_entry("Online Name  Spring 512", Online_Name__Spring_FiveOneTwo);
			new_entry("Online Name  ImNotNoxii", Online_Name__ImNotNoxii);
			new_entry("Online Name    Yunix  ", Online_Name____Yunix__);
			new_entry("Online Name  Ixar", Online_Name__Ixar);
			new_entry("Online Name  Sage", Online_Name__Sage);
			new_entry("Online Name  BluKrono", Online_Name__BluKrono);

		exit_spoiler();

		new_spoiler("Normal Player Names");

			new_entry("Online Name  Aber", Online_Name__Aber);
			new_entry("Online Name  MarineOne", Online_Name__MarineOne);
			new_entry("Online Name  RI0T PGM", Online_Name__RIZeroT_PGM);
			new_entry("Online Name  FC7u7", Online_Name__FCSevenuSeven);
			new_entry("Online Name  Nova", Online_Name__Nova);

		exit_spoiler();
	exit_spoiler();

	new_spoiler("ID Codes");
		
		new_spoiler("Worded ID's");
			new_entry("Offline ID  DEAD-FACE", Offline_ID__DEAD_FACE);
			new_entry("Offline ID  DEAD", Offline_ID__DEAD);
			new_entry("Offline ID  DECAF-DEAD-FACED", Offline_ID__DECAF_DEAD_FACED);
			new_entry("Offline ID  DEAD-FADED-BED", Offline_ID__DEAD_FADED_BED);
		exit_spoiler();

		new_spoiler("Numbered ID's");

			new_entry("Offline ID  12345678", Offline_ID__OneTwoThreeFourFiveSixSevenEight);
			new_entry("Offline ID  11111111", Offline_ID__OneOneOneOneOneOneOneOne);
			new_entry("Offline ID  22222222", Offline_ID__TwoTwoTwoTwoTwoTwoTwoTwo);
			new_entry("Offline ID  33333333", Offline_ID__ThreeThreeThreeThreeThreeThreeThreeThree);
			new_entry("Offline ID  44444444", Offline_ID__FourFourFourFourFourFourFourFour);
			new_entry("Offline ID  55555555", Offline_ID__FiveFiveFiveFiveFiveFiveFiveFive);
			new_entry("Offline ID  66666666", Offline_ID__SixSixSixSixSixSixSixSix);
			new_entry("Offline ID  77777777", Offline_ID__SevenSevenSevenSevenSevenSevenSevenSeven);
			new_entry("Offline ID  88888888", Offline_ID__EightEightEightEightEightEightEightEight);
			new_entry("Offline ID  99999999", Offline_ID__NineNineNineNineNineNineNineNine);
		exit_spoiler();
	exit_spoiler();

	new_spoiler("Messaging Codes");

		new_entry("Save Load Messages", Save_Load_Messages);
		new_entry("Chat Spammer", Chat_Spammer);
		new_entry("Uppercase Lowercase Keyboard", Uppercase_Lowercase_Keyboard);
		new_entry("Special Symbol Keyboard", Special_Symbol_Keyboard);
		new_entry("Animated Text v2", Animated_Text_vTwo);
	exit_spoiler();

	new_spoiler("User Interface Codes");
	
		new_entry("Messages App Custom Colour", Messages_App_Custom_Colour);
		new_entry("People App UI Colours", People_App_UI_Colours);
		new_entry("Data Select Menu Custom Colours", Data_Select_Menu_Custom_Colours);
		new_entry("Customizable Quit Menu", Customizable_Quit_Menu);
		new_entry("Cleaner Action UI", Cleaner_Action_UI);
	exit_spoiler();
}

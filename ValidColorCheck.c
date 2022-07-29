#include <stdio.h>

#define ForEachColor(_act) \
_act(0, 	BLACK,      	                    "Black")\
_act(1, 	BLUE,               	            "Blue")\
_act(2,	    GREEN,              	            "Green")\
_act(3,	    DARK_TURQUOISE,	                    "Dark Turquoise")\
_act(4, 	RED,        	                    "Red")\
_act(5,	    DARK_PINK,  	                    "Dark Pink")\
_act(6,	    BROWN,              	            "Brown")\
_act(7,	    LIGHT_GREY,                     	"Light Grey")\
_act(8, 	DARK_GREY,	                        "Dark Grey")\
_act(9,	    LIGHT_BLUE,     	                "Light Blue")\
_act(10,	BRIGHT_GREEN,   	                "Bright Green")\
_act(11,	LIGHT_TURQUOISE,	                "Light Turquoise")\
_act(12,	SALMON,	                            "Salmon")\
_act(13,	PINK,               	            "Pink")\
_act(14,	YELLOW,	                            "Yellow")\
_act(15,	WHITE,              	            "White")\
_act(17,	LIGHT_GREEN,	                    "Light Green")\
_act(18,	LIGHT_YELLOW,	                    "Light Yellow")\
_act(19,	TAN,	                            "Tan")\
_act(20,	LIGHT_VIOLET,	                    "Light Violet")\
_act(22,	PURPLE,	                            "Purple")\
_act(23,	DARK_BLUE_VIOLET,   	            "Dark Blue Violet")\
_act(25,	ORANGE,	                            "Orange")\
_act(26,	MAGENTA,	                        "Magenta")\
_act(27,	LIME,               	            "Lime")\
_act(28,	DARK_TAN,	                        "Dark Tan")\
_act(29,	BRIGHT_PINK,	                    "Bright Pink")\
_act(30,	MEDIUM_LAVENDER,	                "Medium Lavender")\
_act(31,	LAVENDER,           	            "Lavender")\
_act(68,	VERY_LIGHT_ORANGE,  	            "Very Light Orange")\
_act(69,	BRIGHT_REDDISH_LILAC,	            "Bright Reddish Lilac")\
_act(70,	REDDISH_BROWN,	                    "Reddish Brown")\
_act(71,	LIGHT_BLUISH_GREY,  	            "Light Bluish Grey")\
_act(72,	DARK_BLUISH_GREY,	                "Dark Bluish Grey")\
_act(73,	MEDIUM_BLUE,	                    "Medium Blue")\
_act(74,	MEDIUM_GREEN,	                    "Medium Green")\
_act(77,	LIGHT_PINK,         	            "Light Pink")\
_act(78,	LIGHT_NOUGAT,	                    "Light Nougat")\
_act(84,	MEDIUM_NOUGAT,	                    "Medium Nougat")\
_act(85,	MEDIUM_LILAC,	                    "Medium Lilac")\
_act(86,	MEDIUM_BROWN,	                    "Medium Brown")\
_act(89,	BLUE_VIOLET,	                    "Blue Violet")\
_act(92,	NOUGAT,	                            "Nougat")\
_act(100,	LIGHT_SALMON,	                    "Light Salmon")\
_act(110,	VIOLET,	                            "Violet")\
_act(112,	MEDIUM_VIOLET,	                    "Medium Violet")\
_act(115,	MEDIUM_LIME,	                    "Medium Lime")\
_act(118,	AQUA,	                            "Aqua")\
_act(120,	LIGHT_LIME,	                        "Light Lime")\
_act(125,	LIGHT_ORANGE,	                    "Light Orange")\
_act(128,	DARK_NOUGAT,	                    "Dark Nougat")\
_act(151,	VERY_LIGHT_BLUISH_GREY,	            "Very Light Bluish Grey")\
_act(191,	BRIGHT_LIGHT_ORANGE,	            "Bright Light Orange")\
_act(212,	BRIGHT_LIGHT_BLUE,	                "Bright Light Blue")\
_act(216,	RUST,	                            "Rust")\
_act(218,	REDDISH_LILAC,	                    "Reddish Lilac")\
_act(219,	LILAC,	                            "Lilac")\
_act(226,	BRIGHT_LIGHT_YELLOW,	            "Bright Light Yellow")\
_act(232,	SKY_BLUE,	                        "Sky Blue")\
_act(272,	DARK_BLUE,	                        "Dark Blue")\
_act(288,	DARK_GREEN,	                        "Dark Green")\
_act(295,	FLAMINGO_PINK,	                    "Flamingo Pink")\
_act(308,	DARK_BROWN,	                        "Dark Brown")\
_act(313,	MAERSK_BLUE,	                    "Maersk Blue")\
_act(320,	DARK_RED,	                        "Dark Red")\
_act(321,	DARK_AZURE,	                        "Dark Azure")\
_act(322,	MEDIUM_AZURE,       	            "Medium Azure")\
_act(323,	LIGHT_AQUA,	                        "Light Aqua")\
_act(326,	YELLOWISH_GREEN,    	            "Yellowish Green")\
_act(330,	OLIVE_GREEN,        	            "Olive Green")\
_act(335,	SAND_RED,	                        "Sand Red")\
_act(351,	MEDIUM_DARK_PINK,   	            "Medium Dark Pink")\
_act(353,	CORAL,	                            "Coral")\
_act(366,	EARTH_ORANGE,	                    "Earth Orange")\
_act(368,	VIBRANT_YELLOW,     	            "Vibrant Yellow")\
_act(370,	MEDIUM_BROWN2,       	            "Medium Brown")\
_act(373,	SAND_PURPLE,	                    "Sand Purple")\
_act(378,	SAND_GREEN,	                        "Sand Green")\
_act(379,	SAND_BLUE,	                        "Sand Blue")\
_act(450,	FABULAND_BROWN,	                    "Fabuland Brown")\
_act(462,	MEDIUM_ORANGE,	                    "Medium Orange")\
_act(484,	DARK_ORANGE,        	            "Dark Orange")\
_act(503,	VERY_LIGHT_GREY,    	            "Very Light Grey")\
_act(507,	LIGHT_ORANGE_BROWN,  	            "Light Orange Brown")\
_act(508,	FABULAND_RED,	                    "Fabuland Red")\
_act(509,	FABULAND_ORANGE,	                "Fabuland Orange")\
_act(510,	FABULAND_PASTEL_GREEN,	            "Fabuland Pastel Green")\
_act(33,	TRANS_DARK_BLUE,    	            "Trans Dark Blue")\
_act(34,	TRANS_GREEN,	                    "Trans Green")\
_act(35,	TRANS_BRIGHT_GREEN,	                "Trans Bright Green")\
_act(36,	TRANS_RED,	                        "Trans Red")\
_act(37,	TRANS_DARK_PINK,	                "Trans Dark Pink")\
_act(38,	TRANS_NEON_ORANGE,  	            "Trans Neon Orange")\
_act(39,	TRANS_VERY_LIGHT_BLUE,	            "Trans Very Light Blue")\
_act(40,	TRANS_BLACK,	                    "Trans Black")\
_act(41,	TRANS_MEDIUM_BLUE,  	            "Trans Medium Blue")\
_act(42,	TRANS_NEON_GREEN,   	            "Trans Neon Green")\
_act(43,	TRANS_LIGHT_BLUE,       	        "Trans Light Blue")\
_act(44,	TRANS_BRIGHT_REDDISH_LILAC,	        "Trans Bright Reddish Lilac")\
_act(45,	TRANS_PINK,	                        "Trans Pink")\
_act(46,	TRANS_YELLOW,	                    "Trans Yellow")\
_act(47,	TRANS_CLEAR,            	        "Trans Clear")\
_act(52,	TRANS_PURPLE,           	        "Trans Purple")\
_act(54,	TRANS_NEON_YELLOW,         	        "Trans Neon Yellow")\
_act(57,	TRANS_ORANGE,           	        "Trans Orange")\
_act(227,	TRANS_BRIGHT_LIGHT_GREEN,	        "Trans Bright Light Green")\
_act(231,	TRANS_BRIGHT_LIGHT_ORANGE,	        "Trans Bright Light Orange")\
_act(234,	TRANS_FIRE_YELLOW,	                "Trans Fire Yellow")\
_act(284,	TRANS_REDDISH_LILAC,    	        "Trans Reddish Lilac")\
_act(285,	TRANS_LIGHT_GREEN,	                "Trans Light Green")\
_act(293,	TRANS_LIGHT_BLUE_VIOLET,    	    "Trans Light Blue Violet")\
_act(60,	CHROME_ANTIQUE_BRASS,	            "Chrome Antique Brass")\
_act(61,	CHROME_BLUE,                    	"Chrome Blue")\
_act(62,	CHROME_GREEN,                   	"Chrome Green")\
_act(63,	CHROME_PINK,                    	"Chrome Pink")\
_act(64,	CHROME_BLACK,           	        "Chrome Black")\
_act(334,	CHROME_GOLD,            	        "Chrome Gold")\
_act(383,	CHROME_SILVER,          	        "Chrome Silver")\
_act(83,	METALLIC_BLACK,         	        "Metallic Black")\
_act(134,	COPPER,                         	"Copper")\
_act(135,	PEARL_LIGHT_GREY,               	"Pearl Light Grey")\
_act(137,	METALLIC_BLUE,                  	"Metallic Blue")\
_act(142,	PEARL_LIGHT_GOLD,	                "Pearl Light Gold")\
_act(148,	PEARL_DARK_GREY,	                "Pearl Dark Grey")\
_act(150,	PEARL_VERY_LIGHT_GREY,	            "Pearl Very Light Grey")\
_act(178,	FLAT_DARK_GOLD,	                    "Flat Dark Gold")\
_act(179,	FLAT_SILVER,	                    "Flat Silver")\
_act(183,	PEARL_WHITE,	                    "Pearl White")\
_act(184,	METALLIC_BRIGHT_RED,	            "Metallic Bright Red")\
_act(185,	METALLIC_BRIGHT_BLUE,	            "Metallic Bright Blue")\
_act(186,	METALLIC_DARK_GREEN,	            "Metallic Dark Green")\
_act(189,	REDDISH_GOLD,	                    "Reddish Gold")\
_act(200,	LEMON_METALLIC,                 	"Lemon Metallic")\
_act(297,	PEARL_GOLD,	                        "Pearl Gold")\
_act(80,	METALLIC_SILVER,                	"Metallic Silver")\
_act(81,	METALLIC_GREEN,	                    "Metallic Green")\
_act(82,	METALLIC_GOLD,	                    "Metallic Gold")\
_act(87,	METALLIC_DARK_GREY,	                "Metallic Dark Grey")\
_act(300,	METALLIC_COPPER,	                "Metallic Copper")\
_act(10045,	METALLIC_LIGHT_BLUE,            	"Metallic Light Blue")\
_act(10046,	METALLIC_PINK,	                    "Metallic Pink")\
_act(10049,	METALLIC_LIGHT_PINK,	            "Metallic Light Pink")\
_act(79,	MILKY_WHITE,	                    "Milky White")\
_act(21,	GLOW_IN_DARK_OPAQUE,               	"Glow In Dark Opaque")\
_act(294,	GLOW_IN_DARK_TRANS,	                "Glow In Dark Trans")\
_act(329,	GLOW_IN_DARK_WHITE,	                "Glow In Dark White")\
_act(114,	GLITTER_TRANS_DARK_PINK,        	"Glitter Trans Dark Pink")\
_act(117,	GLITTER_TRANS_CLEAR,	            "Glitter Trans Clear")\
_act(129,	GLITTER_TRANS_PURPLE,           	"Glitter Trans Purple")\
_act(302,	GLITTER_TRANS_LIGHT_BLUE,       	"Glitter Trans Light Blue")\
_act(339,	GLITTER_TRANS_NEON_GREEN,	        "Glitter Trans Neon Green")\
_act(341,	GLITTER_TRANS_ORANGE,           	"Glitter Trans Orange")\
_act(360,	OPAL_TRANS_CLEAR,	                "Opal Trans Clear")\
_act(362,	OPAL_TRANS_LIGHT_BLUE,	            "Opal Trans Light Blue")\
_act(363,	OPAL_TRANS_BLACK,	                "Opal Trans Black")\
_act(364,	OPAL_TRANS_DARK_PINK,           	"Opal Trans Dark Pink")\
_act(365,	OPAL_TRANS_PURPLE,	                "Opal Trans Purple")\
_act(367,	OPAL_TRANS_GREEN,	                "Opal Trans Green")\
_act(10351,	GLITTER_TRANS_BRIGHT_GREEN,     	"Glitter Trans Bright Green")\
_act(10366,	OPAL_TRANS_DARK_BLUE,	            "Opal Trans Dark Blue")\
_act(75,	SPECKLE_BLACK_COPPER,           	"Speckle Black Copper")\
_act(76,	SPECKLE_DARK_BLUISH_GREY_SILVER,    "Speckle Dark Bluish Grey Silver")\
_act(132,	SPECKLE_BLACK_SILVER,           	"Speckle Black Silver")\
_act(133,	SPECKLE_BLACK_GOLD,             	"Speckle Black Gold")\
_act(65,	RUBBER_YELLOW,                  	"Rubber Yellow")\
_act(256,	RUBBER_BLACK,                   	"Rubber Black")\
_act(273,	RUBBER_BLUE,                    	"Rubber Blue")\
_act(324,	RUBBER_RED,                         "Rubber Red")\
_act(350,	RUBBER_ORANGE,                  	"Rubber Orange")\
_act(375,	RUBBER_LIGHT_GREY,	                "Rubber Light Grey")\
_act(406,	RUBBER_DARK_BLUE,	                "Rubber Dark Blue")\
_act(449,	RUBBER_PURPLE,	                    "Rubber Purple")\
_act(490,	RUBBER_LIME,	                    "Rubber Lime")\
_act(496,	RUBBER_LIGHT_BLUISH_GREY,       	"Rubber Light Bluish Grey")\
_act(504,	RUBBER_FLAT_SILVER,	                "Rubber Flat Silver")\
_act(511,	RUBBER_WHITE,	                    "Rubber White")\
_act(10002,	RUBBER_GREEN,                   	"Rubber Green")\
_act(10010,	RUBBER_BRIGHT_GREEN,            	"Rubber Bright Green")\
_act(10026,	RUBBER_MAGENTA,	                    "Rubber Magenta")\
_act(10030,	RUBBER_MEDIUM_LAVENDER,         	"Rubber Medium Lavender")\
_act(10031,	RUBBER_LAVENDER,	                "Rubber Lavender")\
_act(10070,	RUBBER_REDDISH_BROWN,	            "Rubber Reddish Brown")\
_act(10073,	RUBBER_MEDIUM_BLUE,	                "Rubber Medium Blue")\
_act(10078,	RUBBER_LIGHT_NOUGAT,	            "Rubber Light Nougat")\
_act(10226,	RUBBER_BRIGHT_LIGHT_YELLOW,	        "Rubber Bright Light Yellow")\
_act(10308,	RUBBER_DARK_BROWN,	                "Rubber Dark Brown")\
_act(10320,	RUBBER_DARK_RED,	                "Rubber Dark Red")\
_act(10321,	RUBBER_DARK_AZURE,	                "Rubber Dark Azure")\
_act(10322,	RUBBER_MEDIUM_AZURE,            	"Rubber Medium Azure")\
_act(10323,	RUBBER_LIGHT_AQUA,	                "Rubber Light Aqua")\
_act(10378,	RUBBER_SAND_GREEN,	                "Rubber Sand Green")\
_act(10484,	RUBBER_DARK_ORANGE,	                "Rubber Dark Orange")\
_act(66,	RUBBER_TRANS_YELLOW,	            "Rubber Trans Yellow")\
_act(67,	RUBBER_TRANS_CLEAR,	                "Rubber Trans Clear")\
_act(10035,	RUBBER_TRANS_BRIGHT_GREEN,	        "Rubber Trans Bright Green")\
_act(10036,	RUBBER_TRANS_RED,	                "Rubber Trans Red")\
_act(10043,	RUBBER_TRANS_LIGHT_BLUE,        	"Rubber Trans Light Blue")\
_act(16,	MAIN_COLOUR,	                    "Main Colour")\
_act(24,	EDGE_COLOUR,                    	"Edge Colour")\
_act(32,	TRANS_BLACK_IR_LENS,	            "Trans Black IR Lens")\
_act(493,	MAGNET,	                            "Magnet")\
_act(494,	ELECTRIC_CONTACT_ALLOY,	            "Electric Contact Alloy")\
_act(495,	ELECTRIC_CONTACT_COPPER,        	"Electric Contact Copper")\
_act(10047,	TRANS_STICKER,                  	"Trans Sticker")\

#define DeclareEnum(_Id,_Label,_Name) cn##_Label=_Id,
enum ColorNames {
	ForEachColor(DeclareEnum)
	cnLastColor=16384
};
#undef DeclareEnum
#define InitArray(_Id,_Label,_Name) [_Id]=_Name,
static char* pzColor[cnLastColor] = {
	ForEachColor(InitArray)	
};
#undef InitArray

int main()
{	
printf("%i\t%s\n", cnBLACK,								pzColor[cnBLACK]);
printf("%i\t%s\n", cnBLUE,								pzColor[cnBLUE]);
printf("%i\t%s\n", cnGREEN,								pzColor[cnGREEN]);	
printf("%i\t%s\n", cnDARK_TURQUOISE,					pzColor[cnDARK_TURQUOISE]);
printf("%i\t%s\n", cnRED,								pzColor[cnRED]);
printf("%i\t%s\n", cnDARK_PINK,							pzColor[cnDARK_PINK]);
printf("%i\t%s\n", cnBROWN,								pzColor[cnBROWN]);
printf("%i\t%s\n", cnLIGHT_GREY,						pzColor[cnLIGHT_GREY]);
printf("%i\t%s\n", cnDARK_GREY,							pzColor[cnDARK_GREY]);
printf("%i\t%s\n", cnLIGHT_BLUE,						pzColor[cnLIGHT_BLUE]);
printf("%i\t%s\n", cnBRIGHT_GREEN,						pzColor[cnBRIGHT_GREEN]);
printf("%i\t%s\n", cnLIGHT_TURQUOISE,					pzColor[cnLIGHT_TURQUOISE]);	
printf("%i\t%s\n", cnSALMON,							pzColor[cnSALMON]);
printf("%i\t%s\n", cnPINK,								pzColor[cnPINK]);
printf("%i\t%s\n", cnYELLOW,							pzColor[cnYELLOW]);
printf("%i\t%s\n", cnWHITE,								pzColor[cnWHITE]);
printf("%i\t%s\n", cnLIGHT_GREEN,						pzColor[cnLIGHT_GREEN]);
printf("%i\t%s\n", cnLIGHT_YELLOW,						pzColor[cnLIGHT_YELLOW]);
printf("%i\t%s\n", cnTAN,								pzColor[cnTAN]);
printf("%i\t%s\n", cnLIGHT_VIOLET,						pzColor[cnLIGHT_VIOLET]);
printf("%i\t%s\n", cnPURPLE,							pzColor[cnPURPLE]);
printf("%i\t%s\n", cnDARK_BLUE_VIOLET,					pzColor[cnDARK_BLUE_VIOLET]);
printf("%i\t%s\n", cnORANGE,							pzColor[cnORANGE]);
printf("%i\t%s\n", cnMAGENTA,							pzColor[cnMAGENTA]);
printf("%i\t%s\n", cnLIME,								pzColor[cnLIME]);
printf("%i\t%s\n", cnDARK_TAN,							pzColor[cnDARK_TAN]);
printf("%i\t%s\n", cnBRIGHT_PINK,						pzColor[cnBRIGHT_PINK]);
printf("%i\t%s\n", cnMEDIUM_LAVENDER,					pzColor[cnMEDIUM_LAVENDER]);
printf("%i\t%s\n", cnLAVENDER,							pzColor[cnLAVENDER]);
printf("%i\t%s\n", cnVERY_LIGHT_ORANGE,					pzColor[cnVERY_LIGHT_ORANGE]);
printf("%i\t%s\n", cnBRIGHT_REDDISH_LILAC,			    pzColor[cnBRIGHT_REDDISH_LILAC]);
printf("%i\t%s\n", cnREDDISH_BROWN,						pzColor[cnREDDISH_BROWN]);
printf("%i\t%s\n", cnLIGHT_BLUISH_GREY,					pzColor[cnLIGHT_BLUISH_GREY]);
printf("%i\t%s\n", cnDARK_BLUISH_GREY, 					pzColor[cnDARK_BLUISH_GREY]);
printf("%i\t%s\n", cnMEDIUM_BLUE,						pzColor[cnMEDIUM_BLUE]);
printf("%i\t%s\n", cnMEDIUM_GREEN,						pzColor[cnMEDIUM_GREEN]);
printf("%i\t%s\n", cnLIGHT_PINK,						pzColor[cnLIGHT_PINK]);	
printf("%i\t%s\n", cnLIGHT_NOUGAT,						pzColor[cnLIGHT_NOUGAT]);
printf("%i\t%s\n", cnMEDIUM_NOUGAT,						pzColor[cnMEDIUM_NOUGAT]);	
printf("%i\t%s\n", cnMEDIUM_LILAC,						pzColor[cnMEDIUM_LILAC]);
printf("%i\t%s\n", cnMEDIUM_BROWN,					    pzColor[cnMEDIUM_BROWN]);	
printf("%i\t%s\n", cnBLUE_VIOLET,						pzColor[cnBLUE_VIOLET]);	
printf("%i\t%s\n", cnNOUGAT,							pzColor[cnNOUGAT]);
printf("%i\t%s\n", cnLIGHT_SALMON,	 					pzColor[cnLIGHT_SALMON]);
printf("%i\t%s\n", cnVIOLET,							pzColor[cnVIOLET]);	
printf("%i\t%s\n", cnMEDIUM_VIOLET,						pzColor[cnMEDIUM_VIOLET]);	
printf("%i\t%s\n", cnMEDIUM_LIME,						pzColor[cnMEDIUM_LIME]);
printf("%i\t%s\n", cnAQUA,								pzColor[cnAQUA]);	
printf("%i\t%s\n", cnLIGHT_LIME,						pzColor[cnLIGHT_LIME]);
printf("%i\t%s\n", cnLIGHT_ORANGE,						pzColor[cnLIGHT_ORANGE]);
printf("%i\t%s\n", cnDARK_NOUGAT,						pzColor[cnDARK_NOUGAT]);
printf("%i\t%s\n", cnVERY_LIGHT_BLUISH_GREY,			pzColor[cnVERY_LIGHT_BLUISH_GREY]);	
printf("%i\t%s\n", cnBRIGHT_LIGHT_ORANGE,			    pzColor[cnBRIGHT_LIGHT_ORANGE]);
printf("%i\t%s\n", cnBRIGHT_LIGHT_BLUE,					pzColor[cnBRIGHT_LIGHT_BLUE]);
printf("%i\t%s\n", cnRUST,								pzColor[cnRUST]);
printf("%i\t%s\n", cnREDDISH_LILAC,						pzColor[cnREDDISH_LILAC]);
printf("%i\t%s\n", cnLILAC,							    pzColor[cnLILAC]);
printf("%i\t%s\n", cnBRIGHT_LIGHT_YELLOW,				pzColor[cnBRIGHT_LIGHT_YELLOW]);
printf("%i\t%s\n", cnSKY_BLUE,							pzColor[cnSKY_BLUE]);
printf("%i\t%s\n", cnDARK_BLUE,							pzColor[cnDARK_BLUE]);
printf("%i\t%s\n", cnDARK_GREEN,						pzColor[cnDARK_GREEN]);
printf("%i\t%s\n", cnFLAMINGO_PINK,						pzColor[cnFLAMINGO_PINK]);	
printf("%i\t%s\n", cnDARK_BROWN,						pzColor[cnDARK_BROWN]);
printf("%i\t%s\n", cnMAERSK_BLUE,						pzColor[cnMAERSK_BLUE]);
printf("%i\t%s\n", cnDARK_RED,							pzColor[cnDARK_RED]);
printf("%i\t%s\n", cnDARK_AZURE,						pzColor[cnDARK_AZURE]);
printf("%i\t%s\n", cnMEDIUM_AZURE,						pzColor[cnMEDIUM_AZURE]);
printf("%i\t%s\n", cnLIGHT_AQUA,						pzColor[cnLIGHT_AQUA]);
printf("%i\t%s\n", cnYELLOWISH_GREEN,				    pzColor[cnYELLOWISH_GREEN]);
printf("%i\t%s\n", cnOLIVE_GREEN,						pzColor[cnOLIVE_GREEN]);
printf("%i\t%s\n", cnSAND_RED,							pzColor[cnSAND_RED]);
printf("%i\t%s\n", cnMEDIUM_DARK_PINK,					pzColor[cnMEDIUM_DARK_PINK]);
printf("%i\t%s\n", cnCORAL,								pzColor[cnCORAL]);
printf("%i\t%s\n", cnEARTH_ORANGE,						pzColor[cnEARTH_ORANGE]);
printf("%i\t%s\n", cnVIBRANT_YELLOW,					pzColor[cnVIBRANT_YELLOW]);
printf("%i\t%s\n", cnMEDIUM_BROWN,						pzColor[cnMEDIUM_BROWN]);
printf("%i\t%s\n", cnSAND_PURPLE,						pzColor[cnSAND_PURPLE]);
printf("%i\t%s\n", cnSAND_GREEN,						pzColor[cnSAND_GREEN]);
printf("%i\t%s\n", cnSAND_BLUE,							pzColor[cnSAND_BLUE]);
printf("%i\t%s\n", cnFABULAND_BROWN,					pzColor[cnFABULAND_BROWN]);	
printf("%i\t%s\n", cnMEDIUM_ORANGE,						pzColor[cnMEDIUM_ORANGE]);	
printf("%i\t%s\n", cnDARK_ORANGE,						pzColor[cnDARK_ORANGE]);
printf("%i\t%s\n", cnVERY_LIGHT_GREY,					pzColor[cnVERY_LIGHT_GREY]);
printf("%i\t%s\n", cnLIGHT_ORANGE_BROWN,				pzColor[cnLIGHT_ORANGE_BROWN]);	
printf("%i\t%s\n", cnFABULAND_RED, 						pzColor[cnFABULAND_RED]);
printf("%i\t%s\n", cnFABULAND_ORANGE,					pzColor[cnFABULAND_ORANGE]);
printf("%i\t%s\n", cnFABULAND_PASTEL_GREEN,				pzColor[cnFABULAND_PASTEL_GREEN]);	
printf("%i\t%s\n", cnTRANS_DARK_BLUE,					pzColor[cnTRANS_DARK_BLUE]);	
printf("%i\t%s\n", cnTRANS_GREEN,						pzColor[cnTRANS_GREEN]);
printf("%i\t%s\n", cnTRANS_BRIGHT_GREEN,				pzColor[cnTRANS_BRIGHT_GREEN]);	
printf("%i\t%s\n", cnTRANS_RED,							pzColor[cnTRANS_RED]);	
printf("%i\t%s\n", cnTRANS_DARK_PINK,					pzColor[cnTRANS_DARK_PINK]);	
printf("%i\t%s\n", cnTRANS_NEON_ORANGE,					pzColor[cnTRANS_NEON_ORANGE]);	
printf("%i\t%s\n", cnTRANS_VERY_LIGHT_BLUE,				pzColor[cnTRANS_VERY_LIGHT_BLUE]);	
printf("%i\t%s\n", cnTRANS_BLACK,						pzColor[cnTRANS_BLACK]);	
printf("%i\t%s\n", cnTRANS_MEDIUM_BLUE,					pzColor[cnTRANS_MEDIUM_BLUE]);
printf("%i\t%s\n", cnTRANS_NEON_GREEN,				    pzColor[cnTRANS_NEON_GREEN]);
printf("%i\t%s\n", cnTRANS_LIGHT_BLUE,					pzColor[cnTRANS_LIGHT_BLUE]);
printf("%i\t%s\n", cnTRANS_BRIGHT_REDDISH_LILAC,		pzColor[cnTRANS_BRIGHT_REDDISH_LILAC]);	
printf("%i\t%s\n", cnTRANS_PINK,						pzColor[cnTRANS_PINK]);
printf("%i\t%s\n", cnTRANS_YELLOW,						pzColor[cnTRANS_YELLOW]);
printf("%i\t%s\n", cnTRANS_CLEAR,						pzColor[cnTRANS_CLEAR]);
printf("%i\t%s\n", cnTRANS_PURPLE,						pzColor[cnTRANS_PURPLE]);
printf("%i\t%s\n", cnTRANS_NEON_YELLOW,					pzColor[cnTRANS_NEON_YELLOW]);
printf("%i\t%s\n", cnTRANS_ORANGE,						pzColor[cnTRANS_ORANGE]);
printf("%i\t%s\n", cnTRANS_BRIGHT_LIGHT_GREEN,			pzColor[cnTRANS_BRIGHT_LIGHT_GREEN]);
printf("%i\t%s\n", cnTRANS_BRIGHT_LIGHT_ORANGE,			pzColor[cnTRANS_BRIGHT_LIGHT_ORANGE]);	
printf("%i\t%s\n", cnTRANS_FIRE_YELLOW,					pzColor[cnTRANS_FIRE_YELLOW]);
printf("%i\t%s\n", cnTRANS_REDDISH_LILAC,				pzColor[cnTRANS_REDDISH_LILAC]);	
printf("%i\t%s\n", cnTRANS_LIGHT_GREEN,				    pzColor[cnTRANS_LIGHT_GREEN]);	
printf("%i\t%s\n", cnTRANS_LIGHT_BLUE_VIOLET,			pzColor[cnTRANS_LIGHT_BLUE_VIOLET]);	
printf("%i\t%s\n", cnCHROME_ANTIQUE_BRASS,				pzColor[cnCHROME_ANTIQUE_BRASS]);	
printf("%i\t%s\n", cnCHROME_BLUE,						pzColor[cnCHROME_BLUE]);
printf("%i\t%s\n", cnCHROME_GREEN,						pzColor[cnCHROME_GREEN]);
printf("%i\t%s\n", cnCHROME_PINK,						pzColor[cnCHROME_PINK]);
printf("%i\t%s\n", cnCHROME_BLACK,						pzColor[cnCHROME_BLACK]);
printf("%i\t%s\n", cnCHROME_GOLD,						pzColor[cnCHROME_GOLD]);
printf("%i\t%s\n", cnCHROME_SILVER,						pzColor[cnCHROME_SILVER]);
printf("%i\t%s\n", cnMETALLIC_BLACK,					pzColor[cnMETALLIC_BLACK]);
printf("%i\t%s\n", cnCOPPER,							pzColor[cnCOPPER]);	
printf("%i\t%s\n", cnPEARL_LIGHT_GREY,					pzColor[cnPEARL_LIGHT_GREY]);
printf("%i\t%s\n", cnMETALLIC_BLUE,						pzColor[cnMETALLIC_BLUE]);
printf("%i\t%s\n", cnPEARL_LIGHT_GOLD,					pzColor[cnPEARL_LIGHT_GOLD]);
printf("%i\t%s\n", cnPEARL_DARK_GREY,					pzColor[cnPEARL_DARK_GREY]);
printf("%i\t%s\n", cnPEARL_VERY_LIGHT_GREY,				pzColor[cnPEARL_VERY_LIGHT_GREY]);	
printf("%i\t%s\n", cnFLAT_DARK_GOLD,					pzColor[cnFLAT_DARK_GOLD]);	
printf("%i\t%s\n", cnFLAT_SILVER,						pzColor[cnFLAT_SILVER]);	
printf("%i\t%s\n", cnPEARL_WHITE,						pzColor[cnPEARL_WHITE]);
printf("%i\t%s\n", cnMETALLIC_BRIGHT_RED,				pzColor[cnMETALLIC_BRIGHT_RED]);
printf("%i\t%s\n", cnMETALLIC_BRIGHT_BLUE,				pzColor[cnMETALLIC_BRIGHT_BLUE]);	
printf("%i\t%s\n", cnMETALLIC_DARK_GREEN,				pzColor[cnMETALLIC_DARK_GREEN]);
printf("%i\t%s\n", cnREDDISH_GOLD,						pzColor[cnREDDISH_GOLD]);
printf("%i\t%s\n", cnLEMON_METALLIC,					pzColor[cnLEMON_METALLIC]);	
printf("%i\t%s\n", cnPEARL_GOLD,						pzColor[cnPEARL_GOLD]);	
printf("%i\t%s\n", cnMETALLIC_SILVER,					pzColor[cnMETALLIC_SILVER]);
printf("%i\t%s\n", cnMETALLIC_GREEN,					pzColor[cnMETALLIC_GREEN]);
printf("%i\t%s\n", cnMETALLIC_GOLD,						pzColor[cnMETALLIC_GOLD]);
printf("%i\t%s\n", cnMETALLIC_DARK_GREY,				pzColor[cnMETALLIC_DARK_GREY]);
printf("%i\t%s\n", cnMETALLIC_COPPER,					pzColor[cnMETALLIC_COPPER]);
printf("%i\t%s\n", cnMETALLIC_LIGHT_BLUE,				pzColor[cnMETALLIC_LIGHT_BLUE]);
printf("%i\t%s\n", cnMETALLIC_PINK,						pzColor[cnMETALLIC_PINK]);
printf("%i\t%s\n", cnMETALLIC_LIGHT_PINK,			    pzColor[cnMETALLIC_LIGHT_PINK]);	
printf("%i\t%s\n", cnMILKY_WHITE,						pzColor[cnMILKY_WHITE]);
printf("%i\t%s\n", cnGLOW_IN_DARK_OPAQUE,				pzColor[cnGLOW_IN_DARK_OPAQUE]);
printf("%i\t%s\n", cnGLOW_IN_DARK_TRANS,			    pzColor[cnGLOW_IN_DARK_TRANS]);	
printf("%i\t%s\n", cnGLOW_IN_DARK_WHITE,				pzColor[cnGLOW_IN_DARK_WHITE]);
printf("%i\t%s\n", cnGLITTER_TRANS_DARK_PINK,			pzColor[cnGLITTER_TRANS_DARK_PINK]);	
printf("%i\t%s\n", cnGLITTER_TRANS_CLEAR,			    pzColor[cnGLITTER_TRANS_CLEAR]);
printf("%i\t%s\n", cnGLITTER_TRANS_PURPLE,				pzColor[cnGLITTER_TRANS_PURPLE]);
printf("%i\t%s\n", cnGLITTER_TRANS_LIGHT_BLUE,			pzColor[cnGLITTER_TRANS_LIGHT_BLUE]);	
printf("%i\t%s\n", cnGLITTER_TRANS_NEON_GREEN,			pzColor[cnGLITTER_TRANS_NEON_GREEN]);
printf("%i\t%s\n", cnGLITTER_TRANS_ORANGE,				pzColor[cnGLITTER_TRANS_ORANGE]);
printf("%i\t%s\n", cnOPAL_TRANS_CLEAR,					pzColor[cnOPAL_TRANS_CLEAR]);
printf("%i\t%s\n", cnOPAL_TRANS_LIGHT_BLUE,			    pzColor[cnOPAL_TRANS_LIGHT_BLUE]);
printf("%i\t%s\n", cnOPAL_TRANS_BLACK,					pzColor[cnOPAL_TRANS_BLACK]);
printf("%i\t%s\n", cnOPAL_TRANS_DARK_PINK,			    pzColor[cnOPAL_TRANS_DARK_PINK]);
printf("%i\t%s\n", cnOPAL_TRANS_PURPLE,					pzColor[cnOPAL_TRANS_PURPLE]);	
printf("%i\t%s\n", cnOPAL_TRANS_GREEN,					pzColor[cnOPAL_TRANS_GREEN]);
printf("%i\t%s\n", cnGLITTER_TRANS_BRIGHT_GREEN,		pzColor[cnGLITTER_TRANS_BRIGHT_GREEN]);	
printf("%i\t%s\n", cnOPAL_TRANS_DARK_BLUE,				pzColor[cnOPAL_TRANS_DARK_BLUE]);	
printf("%i\t%s\n", cnSPECKLE_BLACK_COPPER,				pzColor[cnSPECKLE_BLACK_COPPER]);
printf("%i\t%s\n", cnSPECKLE_DARK_BLUISH_GREY_SILVER,   pzColor[cnSPECKLE_DARK_BLUISH_GREY_SILVER]);	
printf("%i\t%s\n", cnSPECKLE_BLACK_SILVER,				pzColor[cnSPECKLE_BLACK_SILVER]);
printf("%i\t%s\n", cnSPECKLE_BLACK_GOLD,				pzColor[cnSPECKLE_BLACK_GOLD]);	
printf("%i\t%s\n", cnRUBBER_YELLOW,						pzColor[cnRUBBER_YELLOW]);
printf("%i\t%s\n", cnRUBBER_BLACK,						pzColor[cnRUBBER_BLACK]);
printf("%i\t%s\n", cnRUBBER_BLUE,						pzColor[cnRUBBER_BLUE]);
printf("%i\t%s\n", cnRUBBER_RED,						pzColor[cnRUBBER_RED]);
printf("%i\t%s\n", cnRUBBER_ORANGE,						pzColor[cnRUBBER_ORANGE]);	
printf("%i\t%s\n", cnRUBBER_LIGHT_GREY,				    pzColor[cnRUBBER_LIGHT_GREY]);	
printf("%i\t%s\n", cnRUBBER_DARK_BLUE,					pzColor[cnRUBBER_DARK_BLUE]);
printf("%i\t%s\n", cnRUBBER_PURPLE,						pzColor[cnRUBBER_PURPLE]);	
printf("%i\t%s\n", cnRUBBER_LIME,						pzColor[cnRUBBER_LIME]);
printf("%i\t%s\n", cnRUBBER_LIGHT_BLUISH_GREY,	 		pzColor[cnRUBBER_LIGHT_BLUISH_GREY]);
printf("%i\t%s\n", cnRUBBER_FLAT_SILVER,				pzColor[cnRUBBER_FLAT_SILVER]);
printf("%i\t%s\n", cnRUBBER_WHITE,					    pzColor[cnRUBBER_WHITE]);
printf("%i\t%s\n", cnRUBBER_GREEN,						pzColor[cnRUBBER_GREEN]);	
printf("%i\t%s\n", cnRUBBER_BRIGHT_GREEN,				pzColor[cnRUBBER_BRIGHT_GREEN]);	
printf("%i\t%s\n", cnRUBBER_MAGENTA,					pzColor[cnRUBBER_MAGENTA]);
printf("%i\t%s\n", cnRUBBER_MEDIUM_LAVENDER,			pzColor[cnRUBBER_MEDIUM_LAVENDER]);	
printf("%i\t%s\n", cnRUBBER_LAVENDER,					pzColor[cnRUBBER_LAVENDER]);
printf("%i\t%s\n", cnRUBBER_REDDISH_BROWN,			    pzColor[cnRUBBER_REDDISH_BROWN]);	
printf("%i\t%s\n", cnRUBBER_MEDIUM_BLUE,				pzColor[cnRUBBER_MEDIUM_BLUE]);
printf("%i\t%s\n", cnRUBBER_LIGHT_NOUGAT,				pzColor[cnRUBBER_LIGHT_NOUGAT]);
printf("%i\t%s\n", cnRUBBER_BRIGHT_LIGHT_YELLOW,		pzColor[cnRUBBER_BRIGHT_LIGHT_YELLOW]);
printf("%i\t%s\n", cnRUBBER_DARK_BROWN,				    pzColor[cnRUBBER_DARK_BROWN]);
printf("%i\t%s\n", cnRUBBER_DARK_RED,				    pzColor[cnRUBBER_DARK_RED]);
printf("%i\t%s\n", cnRUBBER_DARK_AZURE,					pzColor[cnRUBBER_DARK_AZURE]);	
printf("%i\t%s\n", cnRUBBER_MEDIUM_AZURE,				pzColor[cnRUBBER_MEDIUM_AZURE]);	
printf("%i\t%s\n", cnRUBBER_LIGHT_AQUA,				    pzColor[cnRUBBER_LIGHT_AQUA]);
printf("%i\t%s\n", cnRUBBER_SAND_GREEN,					pzColor[cnRUBBER_SAND_GREEN]);
printf("%i\t%s\n", cnRUBBER_DARK_ORANGE,				pzColor[cnRUBBER_DARK_ORANGE]);
printf("%i\t%s\n", cnRUBBER_TRANS_YELLOW,			    pzColor[cnRUBBER_TRANS_YELLOW]);
printf("%i\t%s\n", cnRUBBER_TRANS_CLEAR,				pzColor[cnRUBBER_TRANS_CLEAR]);	
printf("%i\t%s\n", cnRUBBER_TRANS_BRIGHT_GREEN,			pzColor[cnRUBBER_TRANS_BRIGHT_GREEN]);	
printf("%i\t%s\n", cnRUBBER_TRANS_RED,					pzColor[cnRUBBER_TRANS_RED]);
printf("%i\t%s\n", cnRUBBER_TRANS_LIGHT_BLUE,		    pzColor[cnRUBBER_TRANS_LIGHT_BLUE]);	
printf("%i\t%s\n", cnMAIN_COLOUR,						pzColor[cnMAIN_COLOUR]);
printf("%i\t%s\n", cnEDGE_COLOUR,						pzColor[cnEDGE_COLOUR]);
printf("%i\t%s\n", cnTRANS_BLACK_IR_LENS,			    pzColor[cnTRANS_BLACK_IR_LENS]);
printf("%i\t%s\n", cnMAGNET,							pzColor[cnMAGNET]);
printf("%i\t%s\n", cnELECTRIC_CONTACT_ALLOY,			pzColor[cnELECTRIC_CONTACT_ALLOY]);	
printf("%i\t%s\n", cnELECTRIC_CONTACT_COPPER,		    pzColor[cnELECTRIC_CONTACT_COPPER]);	
printf("%i\t%s\n", cnTRANS_STICKER,						pzColor[cnTRANS_STICKER]);	

    return 0;
}


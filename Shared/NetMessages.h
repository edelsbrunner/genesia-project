#ifndef	NETMESSAGES_H
#define NETMESSAGES_H
#pragma	once

// NetMessages.h
#include "version.h"

#define VERSIONPLUSMODIFIER					(LOWER_VERSION % 5)

#define	PLUSMSGMODIFIER_1					0x01 + VERSIONPLUSMODIFIER
#define	PLUSMSGMODIFIER_2					0x03 + VERSIONPLUSMODIFIER
#define	PLUSMSGMODIFIER_3					0x09 + VERSIONPLUSMODIFIER
#define	PLUSMSGMODIFIER_4					0x07 + VERSIONPLUSMODIFIER
#define	PLUSMSGMODIFIER_5					0x05 + VERSIONPLUSMODIFIER

#define MSGTYPE_CONFIRM					0x0F14
#define MSGTYPE_REJECT					0x0F15



#define COMMONTYPE_ITEMDROP					0x0A01		+PLUSMSGMODIFIER_2
#define COMMONTYPE_EQUIPITEM				0x0A02		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_LISTCONTENTS				0x0A03		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_PURCHASEITEM				0x0A04		+PLUSMSGMODIFIER_2
#define COMMONTYPE_GIVEITEMTOCHAR				0x0A05		+PLUSMSGMODIFIER_2
#define COMMONTYPE_JOINGUILDAPPROVE				0x0A06		+PLUSMSGMODIFIER_2
#define COMMONTYPE_JOINGUILDREJECT				0x0A07		+PLUSMSGMODIFIER_2
#define COMMONTYPE_DISMISSGUILDAPPROVE			0x0A08		+PLUSMSGMODIFIER_2
#define COMMONTYPE_DISMISSGUILDREJECT			0x0A09		+PLUSMSGMODIFIER_2
#define COMMONTYPE_RELEASEITEM				0x0A0A		+PLUSMSGMODIFIER_2
#define COMMONTYPE_TOGGLECOMBATMODE				0x0A0B		+PLUSMSGMODIFIER_2
#define COMMONTYPE_SETITEM					0x0A0C		+PLUSMSGMODIFIER_2
#define COMMONTYPE_MAGIC					0x0A0D		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_STUDYMAGIC				0x0A0E		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_TRAINSKILL				0x0A0F		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_GETREWARDMONEY			0x0A10		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_USEITEM				0x0A11		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_USESKILL				0x0A12		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_SELLITEM				0x0A13		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_REPAIRITEM				0x0A14		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_SELLITEMCONFIRM			0x0A15		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_REPAIRITEMCONFIRM			0x0A16		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_GETFISHTHISTIME			0x0A17		+PLUSMSGMODIFIER_2
#define COMMONTYPE_TOGGLESAFEATTACKMODE    			0x0A18		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_CREATEPOTION			0x0A19		+PLUSMSGMODIFIER_2
#define COMMONTYPE_TALKTONPC				0x0A1A		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_SETDOWNSKILLINDEX			0x0A1B		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_GETOCCUPYFLAG       			0x0A1C		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQ_GETHEROMANTLE			0x0A1D		+PLUSMSGMODIFIER_2
#define COMMONTYPE_EXCHANGEITEMTOCHAR			0x0A1E		+PLUSMSGMODIFIER_2
#define COMMONTYPE_SETEXCHANGEITEM				0x0A1F		+PLUSMSGMODIFIER_2
#define COMMONTYPE_CONFIRMEXCHANGEITEM			0x0A20		+PLUSMSGMODIFIER_2
#define COMMONTYPE_CANCELEXCHANGEITEM			0x0A21		+PLUSMSGMODIFIER_2
#define COMMONTYPE_QUESTACCEPTED				0x0A22		+PLUSMSGMODIFIER_2
#define COMMONTYPE_BUILDITEM				0x0A23		+PLUSMSGMODIFIER_2
#define COMMONTYPE_GETMAGICABILITY				0x0A24		+PLUSMSGMODIFIER_2
#define COMMONTYPE_CLEARGUILDNAME				0x0A25		+PLUSMSGMODIFIER_2

#define COMMONTYPE_REQ_GETOCCUPYFIGHTZONETICKET		0x0A25		+PLUSMSGMODIFIER_2
#define COMMONTYPE_BANGUILD					0x0A26		+PLUSMSGMODIFIER_2

#define COMMONTYPE_REQUEST_ACCEPTJOINPARTY			0x0A30		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQUEST_JOINPARTY			0x0A31		+PLUSMSGMODIFIER_2
#define COMMONTYPE_RESPONSE_JOINPARTY			0x0A32		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQUEST_ACTIVATESPECABLTY		0x0A40		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQUEST_CANCELQUEST			0x0A50		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQUEST_SELECTCRUSADEDUTY		0x0A51		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQUEST_MAPSTATUS			0x0A52		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQUEST_HELP				0x0A53		+PLUSMSGMODIFIER_2

#define COMMONTYPE_SETGUILDTELEPORTLOC			0x0A54		+PLUSMSGMODIFIER_2
#define COMMONTYPE_GUILDTELEPORT				0x0A55		+PLUSMSGMODIFIER_2
#define COMMONTYPE_SUMMONWARUNIT				0x0A56		+PLUSMSGMODIFIER_2
#define COMMONTYPE_SETGUILDCONSTRUCTLOC			0x0A57		+PLUSMSGMODIFIER_2
#define COMMONTYPE_UPGRADEITEM				0x0A58		+PLUSMSGMODIFIER_2
#define COMMONTYPE_REQGUILDNAME				0x0A59		+PLUSMSGMODIFIER_2

#define MSGID_NOTIFY						0x0FA314D0	+PLUSMSGMODIFIER_5

#define NOTIFY_ITEMOBTAINED				0x0B01		+PLUSMSGMODIFIER_1
#define NOTIFY_QUERY_JOINGUILDREQPERMISSION		0x0B02		+PLUSMSGMODIFIER_1
#define NOTIFY_QUERY_DISMISSGUILDREQPERMISSION		0x0B03 		+PLUSMSGMODIFIER_1
#define NOTIFY_WAITFORGUILDOPERATION			0x0B04		+PLUSMSGMODIFIER_1
#define NOTIFY_CANNOTCARRYMOREITEM				0x0B05		+PLUSMSGMODIFIER_1
#define NOTIFY_ITEMPURCHASED				0x0B06		+PLUSMSGMODIFIER_1
#define NOTIFY_HP						0x0B07		+PLUSMSGMODIFIER_1
#define NOTIFY_NOTENOUGHGOLD				0x0B08		+PLUSMSGMODIFIER_1
#define NOTIFY_KILLED					0x0B09		+PLUSMSGMODIFIER_1
#define NOTIFY_EXP						0x0B0A		+PLUSMSGMODIFIER_1
#define NOTIFY_GUILDDISBANDED				0x0B0B		+PLUSMSGMODIFIER_1
#define NOTIFY_EVENTMSGSTRING				0x0B0C		+PLUSMSGMODIFIER_1
#define NOTIFY_CANNOTJOINMOREGUILDSMAN			0x0B0D		+PLUSMSGMODIFIER_1
#define NOTIFY_NEWGUILDSMAN				0x0B0E		+PLUSMSGMODIFIER_1
#define NOTIFY_DISMISSGUILDSMAN				0x0B0F		+PLUSMSGMODIFIER_1
#define NOTIFY_MAGICSTUDYSUCCESS				0x0B10		+PLUSMSGMODIFIER_1
#define NOTIFY_MAGICSTUDYFAIL				0x0B11		+PLUSMSGMODIFIER_1
#define NOTIFY_SKILLTRAINSUCCESS				0x0B12		+PLUSMSGMODIFIER_1
#define NOTIFY_SKILLTRAINFAIL				0x0B13		+PLUSMSGMODIFIER_1
#define NOTIFY_MP						0x0B14		+PLUSMSGMODIFIER_1
#define NOTIFY_SP						0x0B15		+PLUSMSGMODIFIER_1
#define NOTIFY_LEVELUP					0x0B16		+PLUSMSGMODIFIER_1
#define NOTIFY_ITEMLIFESPANEND				0x0B17		+PLUSMSGMODIFIER_1
#define NOTIFY_LIMITEDLEVEL				0x0B18		+PLUSMSGMODIFIER_1
#define NOTIFY_ITEMTOBANK					0x0B19		+PLUSMSGMODIFIER_1
#define NOTIFY_PKPENALTY					0x0B1A		+PLUSMSGMODIFIER_1
#define NOTIFY_PKCAPTURED					0x0B1B		+PLUSMSGMODIFIER_1
#define NOTIFY_ENEMYKILLREWARD				0x0B1C		+PLUSMSGMODIFIER_1
#define NOTIFY_GIVEITEMFIN_ERASEITEM           		0x0B1D		+PLUSMSGMODIFIER_1
#define NOTIFY_DROPITEMFIN_ERASEITEM			0x0B1F		+PLUSMSGMODIFIER_1
#define NOTIFY_ITEMDEPLETED_ERASEITEM			0x0B20		+PLUSMSGMODIFIER_1
#define NOTIFY_NEWDYNAMICOBJECT				0x0B21		+PLUSMSGMODIFIER_1
#define NOTIFY_DELDYNAMICOBJECT				0x0B22		+PLUSMSGMODIFIER_1
#define NOTIFY_SKILL					0x0B23		+PLUSMSGMODIFIER_1
#define NOTIFY_SERVERCHANGE				0x0B24		+PLUSMSGMODIFIER_1
#define NOTIFY_SETITEMCOUNT				0x0B25		+PLUSMSGMODIFIER_1
#define NOTIFY_CANNOTITEMTOBANK				0x0B26		+PLUSMSGMODIFIER_1
#define NOTIFY_MAGICEFFECTON				0x0B27		+PLUSMSGMODIFIER_1
#define NOTIFY_MAGICEFFECTOFF				0x0B28		+PLUSMSGMODIFIER_1
#define NOTIFY_TOTALUSERS					0x0B29		+PLUSMSGMODIFIER_1
#define NOTIFY_SKILLUSINGEND				0x0B2A		+PLUSMSGMODIFIER_1
#define NOTIFY_SHOWMAP					0x0B2B		+PLUSMSGMODIFIER_1
#define NOTIFY_CANNOTSELLITEM				0x0B2C		+PLUSMSGMODIFIER_1
#define NOTIFY_SELLITEMPRICE				0x0B2D		+PLUSMSGMODIFIER_1
#define NOTIFY_CANNOTREPAIRITEM				0x0B2E		+PLUSMSGMODIFIER_1
#define NOTIFY_REPAIRITEMPRICE				0x0B2F		+PLUSMSGMODIFIER_1
#define NOTIFY_ITEMREPAIRED				0x0B30		+PLUSMSGMODIFIER_1
#define NOTIFY_ITEMSOLD					0x0B31		+PLUSMSGMODIFIER_1
#define NOTIFY_CHARISMA					0x0B32		+PLUSMSGMODIFIER_1
#define NOTIFY_PLAYERONGAME				0x0B33		+PLUSMSGMODIFIER_1
#define NOTIFY_PLAYERNOTONGAME				0x0B34		+PLUSMSGMODIFIER_1
#define NOTIFY_WHISPERMODEON				0x0B35		+PLUSMSGMODIFIER_1
#define NOTIFY_WHISPERMODEOFF				0x0B36		+PLUSMSGMODIFIER_1
#define NOTIFY_PLAYERPROFILE				0x0B37		+PLUSMSGMODIFIER_1
#define NOTIFY_TRAVELERLIMITEDLEVEL			0x0B38		+PLUSMSGMODIFIER_1
#define NOTIFY_HUNGER					0x0B39		+PLUSMSGMODIFIER_1
#define NOTIFY_TOBERECALLED				0x0B40		+PLUSMSGMODIFIER_1
#define NOTIFY_TIMECHANGE					0x0B41		+PLUSMSGMODIFIER_1
#define NOTIFY_PLAYERSHUTUP				0x0B42		+PLUSMSGMODIFIER_1
#define NOTIFY_ADMINUSERLEVELLOW				0x0B43		+PLUSMSGMODIFIER_1
#define NOTIFY_CANNOTRATING				0x0B44		+PLUSMSGMODIFIER_1
#define NOTIFY_RATINGPLAYER				0x0B45		+PLUSMSGMODIFIER_1
#define NOTIFY_NOTICEMSG					0x0B46		+PLUSMSGMODIFIER_1
#define NOTIFY_EVENTFISHMODE				0x0B47		+PLUSMSGMODIFIER_1
#define NOTIFY_FISHCHANCE					0x0B48		+PLUSMSGMODIFIER_1
#define NOTIFY_DEBUGMSG					0x0B49		+PLUSMSGMODIFIER_1
#define NOTIFY_FISHSUCCESS					0x0B4A		+PLUSMSGMODIFIER_1
#define NOTIFY_FISHFAIL					0x0B4B		+PLUSMSGMODIFIER_1
#define NOTIFY_FISHCANCELED				0x0B4C		+PLUSMSGMODIFIER_1
#define NOTIFY_WHETHERCHANGE				0x0B4D		+PLUSMSGMODIFIER_1
#define NOTIFY_SERVERSHUTDOWN				0x0B4E		+PLUSMSGMODIFIER_1
#define NOTIFY_REWARDGOLD					0x0B4F		+PLUSMSGMODIFIER_1
#define NOTIFY_IPACCOUNTINFO				0x0B50		+PLUSMSGMODIFIER_1
#define NOTIFY_SAFEATTACKMODE				0x0B51		+PLUSMSGMODIFIER_1
#define NOTIFY_SUPERATTACKLEFT				0x0B52		+PLUSMSGMODIFIER_1
#define NOTIFY_NOMATCHINGPORTION				0x0B53		+PLUSMSGMODIFIER_1
#define NOTIFY_LOWPORTIONSKILL				0x0B54		+PLUSMSGMODIFIER_1
#define NOTIFY_PORTIONFAIL					0x0B55		+PLUSMSGMODIFIER_1
#define NOTIFY_PORTIONSUCCESS				0x0B56		+PLUSMSGMODIFIER_1
#define NOTIFY_NPCTALK					0x0B57		+PLUSMSGMODIFIER_1
#define NOTIFY_ADMINIFO					0x0B58		+PLUSMSGMODIFIER_1
#define NOTIFY_DOWNSKILLINDEXSET				0x0B59		+PLUSMSGMODIFIER_1
#define NOTIFY_ENEMYKILLS					0x0B5A		+PLUSMSGMODIFIER_1
#define NOTIFY_ITEMPOSLIST					0x0B5B		+PLUSMSGMODIFIER_1
#define NOTIFY_ITEMRELEASED				0x0B5C		+PLUSMSGMODIFIER_1
#define NOTIFY_NOTFLAGSPOT					0x0B5D		+PLUSMSGMODIFIER_1
#define NOTIFY_OPENEXCHANGEWINDOW				0x0B5E		+PLUSMSGMODIFIER_1
#define NOTIFY_SETEXCHANGEITEM				0x0B5F		+PLUSMSGMODIFIER_1
#define NOTIFY_CANCELEXCHANGEITEM				0x0B60		+PLUSMSGMODIFIER_1
#define NOTIFY_EXCHANGEITEMCOMPLETE			0x0B61		+PLUSMSGMODIFIER_1
#define NOTIFY_CANNOTGIVEITEM				0x0B62		+PLUSMSGMODIFIER_1
#define NOTIFY_GIVEITEMFIN_COUNTCHANGED        		0x0B63		+PLUSMSGMODIFIER_1
#define NOTIFY_DROPITEMFIN_COUNTCHANGED			0x0B64		+PLUSMSGMODIFIER_1
#define NOTIFY_ITEMCOLORCHANGE				0x0B65		+PLUSMSGMODIFIER_1
#define NOTIFY_QUESTCONTENTS				0x0B66		+PLUSMSGMODIFIER_1
#define NOTIFY_QUESTABORTED				0x0B67		+PLUSMSGMODIFIER_1
#define NOTIFY_QUESTCOMPLETED				0x0B68		+PLUSMSGMODIFIER_1
#define NOTIFY_QUESTREWARD					0x0B69		+PLUSMSGMODIFIER_1
#define NOTIFY_BUILDITEMSUCCESS				0x0B70		+PLUSMSGMODIFIER_1
#define NOTIFY_BUILDITEMFAIL				0x0B71		+PLUSMSGMODIFIER_1
#define NOTIFY_OBSERVERMODE				0x0B72		+PLUSMSGMODIFIER_1
#define NOTIFY_GLOBALATTACKMODE				0x0B73		+PLUSMSGMODIFIER_1
#define NOTIFY_DAMAGEMOVE					0x0B74		+PLUSMSGMODIFIER_1
#define NOTIFY_FORCEDISCONN				0x0B75		+PLUSMSGMODIFIER_1

#define NOTIFY_FIGHTZONERESERVE				0x0B76		+PLUSMSGMODIFIER_2
#define NOTIFY_NOGUILDMASTERLEVEL				0x0B77		+PLUSMSGMODIFIER_2
#define NOTIFY_SUCCESSBANGUILDMAN				0x0B78		+PLUSMSGMODIFIER_2
#define NOTIFY_CANNOTBANGUILDMAN				0x0B79		+PLUSMSGMODIFIER_2

#define NOTIFY_RESPONSE_CREATENEWPARTY			0x0B80		+PLUSMSGMODIFIER_2
#define NOTIFY_QUERY_JOINPARTY				0x0B81		+PLUSMSGMODIFIER_2

#define NOTIFY_ENERGYSPHERECREATED				0x0B90		+PLUSMSGMODIFIER_2
#define NOTIFY_ENERGYSPHEREGOALIN				0x0B91		+PLUSMSGMODIFIER_2
#define NOTIFY_SPECIALABILITYENABLED			0x0B92		+PLUSMSGMODIFIER_2
#define NOTIFY_SPECIALABILITYSTATUS			0x0B93		+PLUSMSGMODIFIER_2

#define NOTIFY_CRUSADE					0x0B94		+PLUSMSGMODIFIER_2
#define NOTIFY_LOCKEDMAP					0x0B95		+PLUSMSGMODIFIER_2
#define NOTIFY_DUTYSELECTED				0x0B96		+PLUSMSGMODIFIER_2
#define NOTIFY_MAPSTATUSNEXT				0x0B97		+PLUSMSGMODIFIER_2
#define NOTIFY_MAPSTATUSLAST				0x0B98		+PLUSMSGMODIFIER_2
#define NOTIFY_HELP								0x0B99		+PLUSMSGMODIFIER_2
#define NOTIFY_HELPFAILED						0x0B9A		+PLUSMSGMODIFIER_2
#define NOTIFY_METEORSTRIKECOMING			0x0B9B		+PLUSMSGMODIFIER_2
#define NOTIFY_METEORSTRIKEHIT				0x0B9C		+PLUSMSGMODIFIER_2
#define NOTIFY_GRANDMAGICRESULT				0x0B9D		+PLUSMSGMODIFIER_2
#define NOTIFY_NOMORECRUSADESTRUCTURE		0x0B9E		+PLUSMSGMODIFIER_2
#define NOTIFY_CONSTRUCTIONPOINT				0x0B9F		+PLUSMSGMODIFIER_2
#define NOTIFY_TCLOC								0x0BA0		+PLUSMSGMODIFIER_2
#define NOTIFY_CANNOTCONSTRUCT				0X0BA1		+PLUSMSGMODIFIER_2
#define NOTIFY_PARTY								0x0BA2		+PLUSMSGMODIFIER_2
#define NOTIFY_ITEMATTRIBUTECHANGE			0x0BA3		+PLUSMSGMODIFIER_2
#define NOTIFY_GIZONITEMUPGRADELEFT			0x0BA4		+PLUSMSGMODIFIER_2
#define NOTIFY_GIZONEITEMCHANGE				0x0BA5		+PLUSMSGMODIFIER_2
#define NOTIFY_REQGUILDNAMEANSWER			0x0BA6 		+PLUSMSGMODIFIER_2
#define NOTIFY_FORCERECALLTIME				0x0BA7		+PLUSMSGMODIFIER_2
#define NOTIFY_ITEMUPGRADEFAIL				0x0BA8		+PLUSMSGMODIFIER_2
#define NOTIFY_RESPONSE_HUNTMODE				0x0BA9		+PLUSMSGMODIFIER_2
#define NOTIFY_MONSTEREVENT_POSITION		0x0BAA		+PLUSMSGMODIFIER_2
#define NOTIFY_NOMOREAGRICULTURE				0x0BB0  	+PLUSMSGMODIFIER_2
#define NOTIFY_AGRICULTURESKILLLIMIT		0x0BB1  	+PLUSMSGMODIFIER_2
#define NOTIFY_AGRICULTURENOAREA				0x0BB2  	+PLUSMSGMODIFIER_2
#define NOTIFY_SETTING_SUCCESS				0x0BB3		+PLUSMSGMODIFIER_2
#define NOTIFY_SETTING_FAILED					0x0BB4		+PLUSMSGMODIFIER_2
#define NOTIFY_FRIENDONGAME					0x0BB5		+PLUSMSGMODIFIER_2

#define NOTIFY_STATECHANGE_SUCCESS			0x0BB6  +PLUSMSGMODIFIER_2 // Your stat has been changed. // MJ Stats Change - Diuuude
#define NOTIFY_STATECHANGE_FAILED			0x0BB7  +PLUSMSGMODIFIER_2 // MJ Stats Change - Diuuude

#define NOTIFY_SLATE_CREATESUCCESS			0x0BC1   	+PLUSMSGMODIFIER_2
#define NOTIFY_SLATE_CREATEFAIL				0x0BC2   	+PLUSMSGMODIFIER_2

#define NOTIFY_NORECALL						0x0BD1   	+PLUSMSGMODIFIER_2 // "You cannot recall on this map"
#define NOTIFY_APOCGATESTARTMSG			0x0BD2   	+PLUSMSGMODIFIER_2 // "The portal to the appoclypse gate is open."
#define NOTIFY_APOCGATEENDMSG				0x0BD3   	+PLUSMSGMODIFIER_2 // "The portal to the Apocalypse is closed."
#define NOTIFY_APOCGATEOPEN				0x0BD4   	+PLUSMSGMODIFIER_2
#define NOTIFY_APOCGATECLOSE				0x0BD5   	+PLUSMSGMODIFIER_2 
#define NOTIFY_ABADDONKILLED				0x0BD6   	+PLUSMSGMODIFIER_2 // "Abaddon destroyed by (playername)"
#define NOTIFY_APOCFORCERECALLPLAYERS	0x0BD7   	+PLUSMSGMODIFIER_2 // "You are forced to recall, because the apoclypse has started"

#define NOTIFY_SLATE_INVINCIBLE			0x0BD8   	+PLUSMSGMODIFIER_2
#define NOTIFY_SLATE_MANA					0x0BD9   	+PLUSMSGMODIFIER_2
#define NOTIFY_SLATE_EXP 					0x0BE0   	+PLUSMSGMODIFIER_2
#define NOTIFY_SLATE_STATUS				0x0BE1   	+PLUSMSGMODIFIER_2
#define NOTIFY_SLATE_BERSERK				0x0BE2   	+PLUSMSGMODIFIER_2
#define NOTIFY_MONSTERCOUNT				0x0BE3		+PLUSMSGMODIFIER_2  // Rest Monsters %d ... Used only by Admin order
#define NOTIFY_QUESTCOUNTER				0x0BE4	+PLUSMSGMODIFIER_2

#define NOTIFY_HELDENIANTELEPORT			0x0BE6 +PLUSMSGMODIFIER_2// Teleport to Heldinian field is available from now on as Heldenian holy
// war begins. Magic casting is forbidden until real battle.
#define NOTIFY_HELDENIANEND				0x0BE7 +PLUSMSGMODIFIER_2// Heldenian holy war has been closed.
#define NOTIFY_0BE8							0x0BE8 	+PLUSMSGMODIFIER_2// Characters will be recalled by force as Heldenian begins.
#define NOTIFY_RESURRECTPLAYER			0x0BE9   	+PLUSMSGMODIFIER_2
#define NOTIFY_HELDENIANSTART				0x0BEA	+PLUSMSGMODIFIER_2 // Heldenian real battle has been started form now on.
#define NOTIFY_HELDENIANVICTORY			0x0BEB	+PLUSMSGMODIFIER_2 // HELDENIAN FINISHED FOR Elvine/aresden
#define NOTIFY_HELDENIANCOUNT				0x0BEC +PLUSMSGMODIFIER_2// Sends client nbe of destroyed towers, deaths....
#define NOTIFY_LOTERY_LOST					0x0BEE   +PLUSMSGMODIFIER_2 // You draw a blank. Please try again next time..
#define NOTIFY_0BEF							0x0BEF   +PLUSMSGMODIFIER_2 // Strange behaviour, exits client?
#define NOTIFY_CRAFTING_SUCCESS			0x0BF0	+PLUSMSGMODIFIER_2
#define NOTIFY_CRAFTING_FAIL				0x0BF1   	+PLUSMSGMODIFIER_2
#define NOTIFY_LOWCRAFTINGSKILL			0x0BF2   	+PLUSMSGMODIFIER_2
#define NOTIFY_ANGELIC_STATS				0x0BF2   +PLUSMSGMODIFIER_2 // Sends m_iAngelicStr, Int, Dex, Mag to client
#define NOTIFY_ITEM_CANT_RELEASE			0x0BF3  +PLUSMSGMODIFIER_2  // "Item cannot be released"
#define NOTIFY_ANGEL_FAILED				0x0BF4   +PLUSMSGMODIFIER_2 // Failed receiving an Angel pendent
#define NOTIFY_ANGEL_RECEIVED				0x0BF5   +PLUSMSGMODIFIER_2 // "You have received the Tutelary Angel"
#define NOTIFY_SPELL_SKILL					0x0BF6   +PLUSMSGMODIFIER_2 // Loads Spell list skill list silently
#define NOTIFY_LGNPTS						0x0BF7		+PLUSMSGMODIFIER_2

#define NOTIFY_EVENTSPELL					0x0BF8		+PLUSMSGMODIFIER_2
#define NOTIFY_EVENTARMOR					0x0BF9		+PLUSMSGMODIFIER_2
#define NOTIFY_EVENTSHIELD					0x0BFA		+PLUSMSGMODIFIER_2
#define NOTIFY_EVENTCHAT					0x0BFB		+PLUSMSGMODIFIER_2
#define NOTIFY_EVENTPARTY					0x0BFC		+PLUSMSGMODIFIER_2
#define NOTIFY_EVENTRESET					0x0BFD		+PLUSMSGMODIFIER_2

#define NOTIFY_PARTY_COORDS				0x0BFE		+PLUSMSGMODIFIER_2
#define NOTIFY_CANNOTRECALL				0x0BFF		+PLUSMSGMODIFIER_2 // "You can't recall within 10 seconds of taking damage"


#define NOTIFY_EVENTSTART					0x0C00		+PLUSMSGMODIFIER_2
#define NOTIFY_EVENTSTARTING				0x0C01		+PLUSMSGMODIFIER_2
#define NOTIFY_EVENTSTARTING2				0x0C02		+PLUSMSGMODIFIER_2
#define NOTIFY_EVENTSTARTING3				0x0C03		+PLUSMSGMODIFIER_2
#define NOTIFY_CASUALTIES					0x0C04		+PLUSMSGMODIFIER_2
#define NOTIFY_RELICINALTAR				0x0C05		+PLUSMSGMODIFIER_2
#define NOTIFY_RELICGRABBED				0x0C06		+PLUSMSGMODIFIER_2
#define NOTIFY_CTRWINNER					0x0C07		+PLUSMSGMODIFIER_2 // %s won the Capture the Relic event!

#define NOTIFY_EVENTTP						0x0C08		+PLUSMSGMODIFIER_2
#define NOTIFY_EVENTILLUSION				0x0C09		+PLUSMSGMODIFIER_2

#define NOTIFY_RELICPOSITION				0x0C0A		+PLUSMSGMODIFIER_2

#define NOTIFY_TELEPORT_REJECTED			0x0C0B		+PLUSMSGMODIFIER_2
#define NOTIFY_SPRITEEKON					0x0C0D		+PLUSMSGMODIFIER_2
#define NOTIFY_SLATECLEAR					99

//50Cent - HP Bar
#define COMMONTYPE_REQ_GETNPCHP					0x1F12 +PLUSMSGMODIFIER_2
#define SEND_NPCHP								0x1F13 +PLUSMSGMODIFIER_2



#define COMMONTYPE_REQ_CREATESLATE			0x0A61


#define MSGID_REQUEST_INITPLAYER				0x05040205	+PLUSMSGMODIFIER_3
#define MSGID_RESPONSE_INITPLAYER				0x05040206	+PLUSMSGMODIFIER_3

#define MSGID_REQUEST_INITDATA					0x05080404	+PLUSMSGMODIFIER_4
#define MSGID_RESPONSE_INITDATA					0x05080405	+PLUSMSGMODIFIER_4

#define MSGID_COMMAND_MOTION					0x0FA314D5	+PLUSMSGMODIFIER_4
#define MSGID_RESPONSE_MOTION					0x0FA314D6	+PLUSMSGMODIFIER_4
#define MSGID_EVENT_MOTION					0x0FA314D7	+PLUSMSGMODIFIER_4
#define MSGID_EVENT_LOG						0x0FA314D8	+PLUSMSGMODIFIER_4
#define MSGID_EVENT_COMMON					0x0FA314DB	+PLUSMSGMODIFIER_4
#define MSGID_COMMAND_COMMON					0x0FA314DC	+PLUSMSGMODIFIER_4

#define MSGID_COMMAND_TYPINGON				0x28010EEC  +PLUSMSGMODIFIER_2		// Status Typing by Revan 5/19/2016
#define MSGID_COMMAND_TYPINGOFF				0x28010EED  +PLUSMSGMODIFIER_2		// Status Typing by Revan 5/19/2016

#define MSGID_ITEMCONFIGURATIONCONTENTS				0x0FA314D9	+PLUSMSGMODIFIER_4
#define MSGID_NPCCONFIGURATIONCONTENTS				0x0FA314DA	+PLUSMSGMODIFIER_4
#define MSGID_MAGICCONFIGURATIONCONTENTS			0x0FA314DB	+PLUSMSGMODIFIER_4
#define MSGID_SKILLCONFIGURATIONCONTENTS			0x0FA314DC	+PLUSMSGMODIFIER_4
#define MSGID_PLAYERITEMLISTCONTENTS				0x0FA314DD	+PLUSMSGMODIFIER_4
#define MSGID_PORTIONCONFIGURATIONCONTENTS			0x0FA314DE	+PLUSMSGMODIFIER_4
#define MSGID_PLAYERCHARACTERCONTENTS				0x0FA40000	+PLUSMSGMODIFIER_4
#define MSGID_QUESTCONFIGURATIONCONTENTS			0x0FA40001	+PLUSMSGMODIFIER_4
#define MSGID_BUILDITEMCONFIGURATIONCONTENTS			0x0FA40002	+PLUSMSGMODIFIER_4
#define MSGID_DUPITEMIDFILECONTENTS				0x0FA40003	+PLUSMSGMODIFIER_4
#define MSGID_NOTICEMENTFILECONTENTS				0x0FA40004	+PLUSMSGMODIFIER_4

#define MSGID_COMMAND_CHECKCONNECTION				0x03203203	+PLUSMSGMODIFIER_4
#define MSGID_COMMAND_CHATMSG					0x03203204	+PLUSMSGMODIFIER_4

#define MSGID_REQUEST_REGISTERGAMESERVER			0x0512A3F4	+PLUSMSGMODIFIER_5
#define MSGID_RESPONSE_REGISTERGAMESERVER			0x0512A3F5	+PLUSMSGMODIFIER_5
#define MSGID_REQUEST_REGISTERDBSERVER				0x0512A3F6	+PLUSMSGMODIFIER_5
#define MSGID_RESPONSE_REGISTERDBSERVER				0x0512A3F7	+PLUSMSGMODIFIER_5

#define MSGID_REQUEST_LOGIN							0x0AC94201
#define MSGID_REQUEST_CREATENEWACCOUNT				0x0FC94202	+PLUSMSGMODIFIER_4
#define MSGID_RESPONSE_LOG							0x0AC94203
#define MSGID_REQUEST_CREATENEWCHARACTER			0x0FC94204	+PLUSMSGMODIFIER_4
#define MSGID_REQUEST_ENTERGAME						0x0FC94205	+PLUSMSGMODIFIER_4
#define MSGID_RESPONSE_ENTERGAME					0x0FC94206	+PLUSMSGMODIFIER_4
#define MSGID_REQUEST_DELETECHARACTER				0x0FC94207	+PLUSMSGMODIFIER_4
#define MSGID_REQUEST_CREATENEWGUILD				0x0FC94208	+PLUSMSGMODIFIER_4
#define MSGID_RESPONSE_CREATENEWGUILD				0x0FC94209	+PLUSMSGMODIFIER_4
#define MSGID_REQUEST_DISBANDGUILD					0x0FC9420A	+PLUSMSGMODIFIER_4
#define MSGID_RESPONSE_DISBANDGUILD					0x0FC9420B	+PLUSMSGMODIFIER_4

#define MSGID_REQUEST_UPDATEGUILDINFO_NEWGUILDSMAN		0x0FC9420C	+PLUSMSGMODIFIER_4
#define MSGID_REQUEST_UPDATEGUILDINFO_DELGUILDSMAN		0x0FC9420D	+PLUSMSGMODIFIER_4

#define MSGID_REQUEST_CIVILRIGHT				0x0FC9420E	+PLUSMSGMODIFIER_4
#define MSGID_RESPONSE_CIVILRIGHT				0x0FC9420F	+PLUSMSGMODIFIER_4

#define MSGID_REQUEST_CHANGEPASSWORD			0x0FC94210	+PLUSMSGMODIFIER_4
#define MSGID_RESPONSE_CHANGEPASSWORD			0x0FC94211	+PLUSMSGMODIFIER_4

#define MSGID_REQUEST_INPUTKEYCODE				0x0FC94212	+PLUSMSGMODIFIER_4
#define MSGID_RESPONSE_INPUTKEYCODE				0x0FC94213	+PLUSMSGMODIFIER_4

#define MSGID_REQUEST_ANGEL						0x0FC9421E	+PLUSMSGMODIFIER_4
#define MSGID_REQUEST_DKITEM					0x0FC9421F	+PLUSMSGMODIFIER_4

#define MSGID_REQUEST_UPDATE_FRIENDS			0x0FC94220	+PLUSMSGMODIFIER_4

#define MSGID_REQUEST_LGNPTS					0x0FC94221	+PLUSMSGMODIFIER_4
#define MSGID_RESPONSE_LGNPTS					0x0FC94222	+PLUSMSGMODIFIER_4
#define MSGID_REQUEST_LGNSVC					0x0FC94223	+PLUSMSGMODIFIER_4
#define MSGID_RESPONSE_LGNSVC					0x0FC94224	+PLUSMSGMODIFIER_4
#define MSGID_SUBCASH							0x0FC94225	+PLUSMSGMODIFIER_4

#define MSGID_REQUEST_SETRECALLPNT			0x0FC94226	+PLUSMSGMODIFIER_4

#define LOGRESMSGTYPE_CONFIRM					0x0F14
#define LOGRESMSGTYPE_REJECT					0x0F15
#define LOGRESMSGTYPE_PASSWORDMISMATCH			0x0F16
#define LOGRESMSGTYPE_NOTEXISTINGACCOUNT		0x0F17
#define LOGRESMSGTYPE_NEWACCOUNTCREATED		0x0F18
#define LOGRESMSGTYPE_NEWACCOUNTFAILED			0x0F19
#define LOGRESMSGTYPE_ALREADYEXISTINGACCOUNT	0x0F1A
#define LOGRESMSGTYPE_NOTEXISTINGCHARACTER		0x0F1B
#define LOGRESMSGTYPE_NEWCHARACTERCREATED		0x0F1C
#define LOGRESMSGTYPE_NEWCHARACTERFAILED		0x0F1D
#define LOGRESMSGTYPE_ALREADYEXISTINGCHARACTER	0x0F1E
#define LOGRESMSGTYPE_CHARACTERDELETED			0x0F1F
#define LOGRESMSGTYPE_NOTENOUGHPOINT			0x0F30
#define LOGRESMSGTYPE_ACCOUNTLOCKED			0x0F31
#define LOGRESMSGTYPE_SERVICENOTAVAILABLE		0x0F32
#define LOGRESMSGTYPE_PASSWORDCHANGESUCCESS   	0x0A00
#define LOGRESMSGTYPE_PASSWORDCHANGEFAIL		0x0A01
#define LOGRESMSGTYPE_NOTEXISTINGWORLDSERVER	0x0A02
#define LOGRESMSGTYPE_INPUTKEYCODE				0x0A03
#define LOGRESMSGTYPE_REALACCOUNT				0x0A04
#define LOGRESMSGTYPE_FORCECHANGEPASSWORD		0x0A05

#define LOGRESMSGTYPE_INVALIDKOREANSSN			0x0A06
#define LOGRESMSGTYPE_LESSTHENFIFTEEN			0x0A07

#define ENTERGAMEMSGTYPE_NEW				0x0F1C		+PLUSMSGMODIFIER_2
#define ENTERGAMEMSGTYPE_NOENTER_FORCEDISCONN		0x0F1D		+PLUSMSGMODIFIER_2
#define ENTERGAMEMSGTYPE_CHANGINGSERVER			0x0F1E		+PLUSMSGMODIFIER_2

#define ENTERGAMERESTYPE_PLAYING				0x0F20		+PLUSMSGMODIFIER_2
#define ENTERGAMERESTYPE_REJECT				0x0F21		+PLUSMSGMODIFIER_2
#define ENTERGAMERESTYPE_CONFIRM				0x0F22		+PLUSMSGMODIFIER_2
#define ENTERGAMERESTYPE_FORCEDISCONN			0x0F23		+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_PLAYERDATA				0x0C152210	+PLUSMSGMODIFIER_3
#define MSGID_RESPONSE_PLAYERDATA				0x0C152211	+PLUSMSGMODIFIER_3
#define MSGID_RESPONSE_SAVEPLAYERDATA_REPLY			0x0C152212	+PLUSMSGMODIFIER_3
#define MSGID_REQUEST_SAVEPLAYERDATA				0x0DF3076F	+PLUSMSGMODIFIER_3
#define MSGID_REQUEST_SAVEPLAYERDATA_REPLY			0x0DF30770	+PLUSMSGMODIFIER_3
#define MSGID_REQUEST_SAVEPLAYERDATALOGOUT			0x0DF3074F	+PLUSMSGMODIFIER_3
#define MSGID_REQUEST_NOSAVELOGOUT				0x0DF30750	+PLUSMSGMODIFIER_3


#define MSGID_REQUEST_RETRIEVEITEM				0x0DF30751	+PLUSMSGMODIFIER_2
#define MSGID_RESPONSE_RETRIEVEITEM				0x0DF30752	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_FULLOBJECTDATA				0x0DF40000	+PLUSMSGMODIFIER_2

#define MSGID_GUILDNOTIFY					0x0DF30760	+PLUSMSGMODIFIER_2
#define GUILDNOTIFY_NEWGUILDSMAN				0x1F00		+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_TELEPORT					0x0EA03201	+PLUSMSGMODIFIER_2

#define MSGID_LEVELUPSETTINGS					0x11A01000	+PLUSMSGMODIFIER_2
#define MSGID_DYNAMICOBJECT					0x12A01001	+PLUSMSGMODIFIER_2

#define MSGID_GAMESERVERALIVE					0x12A01002	+PLUSMSGMODIFIER_2

#define MSGID_GAMESERVERDOWN					0x12A01004	+PLUSMSGMODIFIER_2
#define MSGID_TOTALGAMESERVERCLIENTS				0x12A01005	+PLUSMSGMODIFIER_2

#define MSGID_ENTERGAMECONFIRM					0x12A01006	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_FIGHTZONE_RESERVE				0x12A01007	+PLUSMSGMODIFIER_2
#define MSGID_RESPONSE_FIGHTZONE_RESERVE			0x12A01008	+PLUSMSGMODIFIER_2

#define MSGID_CONFIRMEDIP				0x12A01008	+PLUSMSGMODIFIER_2

#define MSGID_ANNOUNCEACCOUNT				0x13000000	+PLUSMSGMODIFIER_2

#define MSGID_ACCOUNTINFOCHANGE					0x13000001	+PLUSMSGMODIFIER_2
#define MSGID_IPINFOCHANGE					0x13000002	+PLUSMSGMODIFIER_2

#define MSGID_GAMESERVERSHUTDOWNED				0x14000000	+PLUSMSGMODIFIER_2
#define MSGID_ANNOUNCEACCOUNTNEWPASSWORD			0x14000010	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_IPIDSTATUS				0x14E91200	+PLUSMSGMODIFIER_2
#define MSGID_RESPONSE_IPIDSTATUS				0x14E91201	+PLUSMSGMODIFIER_2
#define MSGID_REQUEST_ACCOUNTCONNSTATUS				0x14E91202	+PLUSMSGMODIFIER_2
#define MSGID_RESPONSE_ACCOUNTCONNSTATUS			0x14E91203	+PLUSMSGMODIFIER_2
#define MSGID_REQUEST_CLEARACCOUNTCONNSTATUS			0x14E91204	+PLUSMSGMODIFIER_2
#define MSGID_RESPONSE_CLEARACCOUNTCONNSTATUS			0x14E91205	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_FORCEDISCONECTACCOUNT			0x15000000	+PLUSMSGMODIFIER_2
#define MSGID_REQUEST_NOCOUNTINGSAVELOGOUT	    		0x15000001	+PLUSMSGMODIFIER_2

#define MSGID_OCCUPYFLAGDATA					0x167C0A30	+PLUSMSGMODIFIER_2
#define MSGID_REQUEST_SAVEARESDENOCCUPYFLAGDATA			0x167C0A31	+PLUSMSGMODIFIER_2
#define MSGID_REQUEST_SAVEELVINEOCCUPYFLAGDATA			0x167C0A32	+PLUSMSGMODIFIER_2

#define MSGID_ARESDENOCCUPYFLAGSAVEFILECONTENTS 		0x17081034	+PLUSMSGMODIFIER_2
#define MSGID_ELVINEOCCUPYFLAGSAVEFILECONTENTS  		0x17081035	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_SETITEMPOS				0x180ACE0A	+PLUSMSGMODIFIER_2

#define MSGID_SENDSERVERSHUTDOWNMSG				0x20000000	+PLUSMSGMODIFIER_2
#define MSGID_ITEMLOG						0x210A914D	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_NOTICEMENT				0x220B2F00	+PLUSMSGMODIFIER_2
#define MSGID_RESPONSE_NOTICEMENT				0x220B2F01	+PLUSMSGMODIFIER_2

#define MSGID_REGISTER_WORLDSERVER				0x23AA210E	+PLUSMSGMODIFIER_2
#define MSGID_REGISTER_WORLDSERVERSOCKET			0x23AA210F	+PLUSMSGMODIFIER_2
#define MSGID_REGISTER_WORLDSERVER_GAMESERVER			0x23AB211F	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_CHARINFOLIST				0x23AB2200	+PLUSMSGMODIFIER_2
#define MSGID_RESPONSE_CHARINFOLIST				0x23AB2201	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_REMOVEGAMESERVER				0x2400000A	+PLUSMSGMODIFIER_2
#define MSGID_REQUEST_CLEARACCOUNTSTATUS			0x24021EE0	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_SETACCOUNTINITSTATUS			0x25000198	+PLUSMSGMODIFIER_2
#define MSGID_REQUEST_SETACCOUNTWAITSTATUS			0x25000199	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_CHECKACCOUNTPASSWORD			0x2654203A	+PLUSMSGMODIFIER_2
#define MSGID_WORLDSERVERACTIVATED				0x27049D0C	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_PANNING					0x27B314D0	+PLUSMSGMODIFIER_2
#define MSGID_RESPONSE_PANNING					0x27B314D1	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_RESTART					0x28010EEE	+PLUSMSGMODIFIER_2
#define MSGID_RESPONSE_REGISTER_WORLDSERVERSOCKET		0x280120A0	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_BLOCKACCOUNT				0x2900AD10	+PLUSMSGMODIFIER_2
#define MSGID_IPTIMECHANGE					0x2900AD20	+PLUSMSGMODIFIER_2
#define MSGID_ACCOUNTTIMECHANGE					0x2900AD22	+PLUSMSGMODIFIER_2
#define MSGID_REQUEST_IPTIME					0x2900AD30	+PLUSMSGMODIFIER_2
#define MSGID_RESPONSE_IPTIME					0x2900AD31	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_SELLITEMLIST				0x2900AD30	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_ALL_SERVER_REBOOT				0x3AE8270A	+PLUSMSGMODIFIER_2
#define MSGID_REQUEST_EXEC_1DOTBAT				0x3AE8370A	+PLUSMSGMODIFIER_2
#define MSGID_REQUEST_EXEC_2DOTBAT				0x3AE8470A	+PLUSMSGMODIFIER_2
#define MSGID_MONITORALIVE					0x3AE8570A	+PLUSMSGMODIFIER_2

#define MSGID_COLLECTEDMANA					0x3AE90000	+PLUSMSGMODIFIER_2
#define MSGID_METEORSTRIKE					0x3AE90001	+PLUSMSGMODIFIER_2

#define MSGID_SERVERSTOCKMSG					0x3AE90013	+PLUSMSGMODIFIER_2
#define MSGID_GATEWAY_CURRENTCONN				0x3B000000	+PLUSMSGMODIFIER_2
#define MSGID_GETMINIMUMLOADGATEWAY				0x3B1890EA	+PLUSMSGMODIFIER_2


#define GSM_REQUEST_FINDCHARACTER				0x01		+PLUSMSGMODIFIER_2
#define GSM_RESPONSE_FINDCHARACTER				0x02		+PLUSMSGMODIFIER_2
#define GSM_GRANDMAGICRESULT					0x03		+PLUSMSGMODIFIER_2
#define GSM_GRANDMAGICLAUNCH					0x04		+PLUSMSGMODIFIER_2
#define GSM_COLLECTEDMANA					0x05		+PLUSMSGMODIFIER_2
#define GSM_BEGINCRUSADE					0x06		+PLUSMSGMODIFIER_2
#define GSM_ENDCRUSADE						0x07		+PLUSMSGMODIFIER_2
#define GSM_MIDDLEMAPSTATUS					0x08		+PLUSMSGMODIFIER_2
#define GSM_SETGUILDTELEPORTLOC					0x09		+PLUSMSGMODIFIER_2
#define GSM_CONSTRUCTIONPOINT					0x0A		+PLUSMSGMODIFIER_2
#define GSM_SETGUILDCONSTRUCTLOC				0x0B		+PLUSMSGMODIFIER_2
#define GSM_CHATMSG						0x0C		+PLUSMSGMODIFIER_2
#define GSM_WHISPERMSG						0x0D		+PLUSMSGMODIFIER_2
#define GSM_DISCONNECT						0x0E		+PLUSMSGMODIFIER_2
#define GSM_REQUEST_SUMMONPLAYER				0x0F		+PLUSMSGMODIFIER_2
#define GSM_REQUEST_SHUTUPPLAYER				0x10		+PLUSMSGMODIFIER_2
#define GSM_RESPONSE_SHUTUPPLAYER				0x11		+PLUSMSGMODIFIER_2

#define GSM_REQUEST_SETFORCERECALLTIME				0x12		+PLUSMSGMODIFIER_2
#define GSM_REQUEST_SUMMONGUILD				0x13		+PLUSMSGMODIFIER_2

#define GSM_BEGINAPOCALYPSE					0x14	+PLUSMSGMODIFIER_2
#define GSM_ENDAPOCALYPSE					0x15	+PLUSMSGMODIFIER_2

#define GSM_STARTHELDENIAN					0x16	+PLUSMSGMODIFIER_2
#define GSM_ENDHELDENIAN					0x17	+PLUSMSGMODIFIER_2

#define GSM_REQUEST_FINDFRIEND			0x18	+PLUSMSGMODIFIER_2
#define GSM_RESPONSE_FINDFRIEND			0x19	+PLUSMSGMODIFIER_2


#define MSGID_PARTYOPERATION					0x3C00123A	+PLUSMSGMODIFIER_2

#define MSGID_REQUEST_TELEPORT_LIST				0x0EA03202	+PLUSMSGMODIFIER_2
#define MSGID_RESPONSE_TELEPORT_LIST				0x0EA03203	+PLUSMSGMODIFIER_2
#define MSGID_REQUEST_CHARGED_TELEPORT				0x0EA03204	+PLUSMSGMODIFIER_2
#define MSGID_RESPONSE_CHARGED_TELEPORT				0x0EA03205	+PLUSMSGMODIFIER_2

//====HGSERVER==============================================================================

#define MSGID_REQUEST_REGISTERGAMESERVERSOCKET			0x0512A3F8	+PLUSMSGMODIFIER_2

#define MSGID_GAMEMASTERLOG					0x210A914E	+PLUSMSGMODIFIER_2
#define MSGID_GAMEITEMLOG                       		0x210A914F	+PLUSMSGMODIFIER_2
#define MSGID_GAMECRUSADELOG                    		0x210A9150	+PLUSMSGMODIFIER_2
#define MSGID_PLAYERLOG                    		0x210A9151	+PLUSMSGMODIFIER_2

#define MSGID_MANAGER_INIT					0x19CC0F85	+PLUSMSGMODIFIER_2
#define MSGID_MANAGER_SHUTDOWN  				0x19CC0F86	+PLUSMSGMODIFIER_2

#define MSGID_TELEPORTLISTCONTENTS				0x0FA40008 	+PLUSMSGMODIFIER_4
#define MSGID_UPDATECONFIGFILES					0x0FA40009	+PLUSMSGMODIFIER_4

#define MSGID_RESPONSE_CHECKCONNECTION				0x03203205	+PLUSMSGMODIFIER_2

//==========================================================================================
#define REJECTTYPE_CHARABOVETRIALLEVEL             		0x01
#define REJECTTYPE_MAXREGISTEREDIPREACHED          	0x02
#define REJECTTYPE_GAMESERVERNOTONLINE             	0x03
#define REJECTTYPE_DATADIFFERENCE                  	0x04
#define REJECTTYPE_GAMESERVEROFFLINE                  	0x05
#define REJECTTYPE_MAXSERVERUSERLIMITREACHED       	0x06
#define REJECTTYPE_WORLDSERVERISFULL               	0x07
#define REJECTTYPE_LOGINERROR                      	0x08

#define COMMONTYPE_CRAFTITEM				0x0A28   	+PLUSMSGMODIFIER_2
#define MSGID_CRAFTINGCONFIGURATIONCONTENTS				0x0FA40005	+PLUSMSGMODIFIER_3
#define NOTIFY_NOMATCHINGCRAFTING				0x0A29   	+PLUSMSGMODIFIER_2
#define NOTIFY_NO_CRAFT_CONTRIB				0x0A30   	+PLUSMSGMODIFIER_2


#define MSGID_REQUEST_HELDENIAN_WINNER			0x3D001240 // gserver -> world
#define MSGID_REQUEST_HELDENIAN_SCROLL			0x3D001244 // client -> gserver, Add by Snoopy for client buying Heldenian scrolls

// Ressurection
#define MSGID_REQUEST_RESURRECTPLAYER_YES		0x0FC94214 	+PLUSMSGMODIFIER_4// Resurection
#define MSGID_REQUEST_RESURRECTPLAYER_NO		0x0FC94215	+PLUSMSGMODIFIER_4// Resurection

// MJ Stats Change
#define MSGID_STATECHANGEPOINT				0x11A01001  +PLUSMSGMODIFIER_5 
#define MJSTAT_STR							0x01  +PLUSMSGMODIFIER_5 
#define MJSTAT_DEX							0x02  +PLUSMSGMODIFIER_5 
#define MJSTAT_INT							0x03  +PLUSMSGMODIFIER_5 
#define MJSTAT_VIT							0x04  +PLUSMSGMODIFIER_5 
#define MJSTAT_MAG							0x05  +PLUSMSGMODIFIER_5 
#define MJSTAT_CHR							0x06  +PLUSMSGMODIFIER_5 



#endif
/*
 * This file was generated automatically by xsubpp version 1.9508 from the
 * contents of tmp. Do not edit this file, edit tmp instead.
 *
 *		ANY CHANGES MADE HERE WILL BE LOST!
 *
 */


/*  EQEMu:  Everquest Server Emulator
	Copyright (C) 2001-2004  EQEMu Development Team (http://eqemulator.net)

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; version 2 of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY except by those people which sell it, which
		are required to give you total support for your newly bought product;
		without even the implied warranty of MERCHANTABILITY or FITNESS FOR
		A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

typedef const char Const_char;

#ifdef EMBPERL
#include "../common/debug.h"
#include "EQWParser.h"
#include "EQW.h"

#ifdef seed
#undef seed
#endif

#ifdef THIS	 /* this macro seems to leak out on some systems */
#undef THIS
#endif


XS(XS_EQW_GetConfig); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_GetConfig)
{
	dXSARGS;
	if (items != 2)
		Perl_croak(aTHX_ "Usage: EQW::GetConfig(THIS, var_name)");
	{
		EQW *		THIS;
		Const_char *		RETVAL;
		dXSTARG;
		Const_char *		var_name = (Const_char *)SvPV_nolen(ST(1));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->GetConfig(var_name);
		sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
	}
	XSRETURN(1);
}

XS(XS_EQW_LockWorld); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_LockWorld)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: EQW::LockWorld(THIS)");
	{
		EQW *		THIS;

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		THIS->LockWorld();
	}
	XSRETURN_EMPTY;
}

XS(XS_EQW_UnlockWorld); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_UnlockWorld)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: EQW::UnlockWorld(THIS)");
	{
		EQW *		THIS;

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		THIS->UnlockWorld();
	}
	XSRETURN_EMPTY;
}

XS(XS_EQW_LSConnected); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_LSConnected)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: EQW::LSConnected(THIS)");
	{
		EQW *		THIS;
		bool		RETVAL;

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->LSConnected();
		ST(0) = boolSV(RETVAL);
		sv_2mortal(ST(0));
	}
	XSRETURN(1);
}

XS(XS_EQW_LSReconnect); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_LSReconnect)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: EQW::LSReconnect(THIS)");
	{
		EQW *		THIS;

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		THIS->LSReconnect();
	}
	XSRETURN_EMPTY;
}

XS(XS_EQW_CountZones); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_CountZones)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: EQW::CountZones(THIS)");
	{
		EQW *		THIS;
		int		RETVAL;
		dXSTARG;

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->CountZones();
		XSprePUSH; PUSHi((IV)RETVAL);
	}
	XSRETURN(1);
}

XS(XS_EQW_ListBootedZones); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_ListBootedZones)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: EQW::ListBootedZones(THIS)");
	{
		EQW *		THIS;
		vector<string>		RETVAL;

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->ListBootedZones();
		ST(0) = sv_newmortal();
	{
			U32 ix_RETVAL;
			/* pop crap off the stack we dont really want */
			POPs;
			POPs;
			/* grow the stack to the number of elements being returned */
			EXTEND(SP, RETVAL.size());
			for (ix_RETVAL = 0; ix_RETVAL < RETVAL.size(); ix_RETVAL++) {
					const string &it = RETVAL[ix_RETVAL];
					ST(ix_RETVAL) = sv_newmortal();
					sv_setpvn(ST(ix_RETVAL), it.c_str(), it.length());
			}
			/* hackish, but im over it. The normal xsubpp return will be right below this */
			XSRETURN(RETVAL.size());
	}
	}
	XSRETURN(1);
}

XS(XS_EQW_GetZoneDetails); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_GetZoneDetails)
{
	dXSARGS;
	if (items != 2)
		Perl_croak(aTHX_ "Usage: EQW::GetZoneDetails(THIS, zone_ref)");
	{
		EQW *		THIS;
		map<string,string>		RETVAL;
		Const_char *		zone_ref = (Const_char *)SvPV_nolen(ST(1));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->GetZoneDetails(zone_ref);
		ST(0) = sv_newmortal();
		if (RETVAL.begin()!=RETVAL.end())
		{
				//NOTE: we are leaking the original ST(0) right now
				HV *hv = newHV();
				sv_2mortal((SV*)hv);
				ST(0) = newRV((SV*)hv);

				map<string,string>::const_iterator cur, end;
				cur = RETVAL.begin();
				end = RETVAL.end();
				for(; cur != end; cur++) {
						/* get the element from the hash, creating if needed (will be needed) */
						SV**ele = hv_fetch(hv, cur->first.c_str(), cur->first.length(), TRUE);
						if(ele == nullptr) {
								Perl_croak(aTHX_ "Unable to create a hash element for RETVAL");
								break;
						}
						/* put our string in the SV associated with this element in the hash */
						sv_setpvn(*ele, cur->second.c_str(), cur->second.length());
				}
		}

















	}
	XSRETURN(1);
}

XS(XS_EQW_CountPlayers); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_CountPlayers)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: EQW::CountPlayers(THIS)");
	{
		EQW *		THIS;
		int		RETVAL;
		dXSTARG;

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->CountPlayers();
		XSprePUSH; PUSHi((IV)RETVAL);
	}
	XSRETURN(1);
}

XS(XS_EQW_ListPlayers); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_ListPlayers)
{
	dXSARGS;
	if (items < 1 || items > 2)
		Perl_croak(aTHX_ "Usage: EQW::ListPlayers(THIS, zone_name= \"\")");
	{
		EQW *		THIS;
		vector<string>		RETVAL;
		Const_char *		zone_name;

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		if (items < 2)
			zone_name = "";
		else {
			zone_name = (Const_char *)SvPV_nolen(ST(1));
		}

		RETVAL = THIS->ListPlayers(zone_name);
		ST(0) = sv_newmortal();
	{
			U32 ix_RETVAL;
			/* pop crap off the stack we dont really want */
			POPs;
			POPs;
			/* grow the stack to the number of elements being returned */
			EXTEND(SP, RETVAL.size());
			for (ix_RETVAL = 0; ix_RETVAL < RETVAL.size(); ix_RETVAL++) {
					const string &it = RETVAL[ix_RETVAL];
					ST(ix_RETVAL) = sv_newmortal();
					sv_setpvn(ST(ix_RETVAL), it.c_str(), it.length());
			}
			/* hackish, but im over it. The normal xsubpp return will be right below this */
			XSRETURN(RETVAL.size());
	}
	}
	XSRETURN(1);
}

XS(XS_EQW_GetPlayerDetails); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_GetPlayerDetails)
{
	dXSARGS;
	if (items != 2)
		Perl_croak(aTHX_ "Usage: EQW::GetPlayerDetails(THIS, player_ref)");
	{
		EQW *		THIS;
		map<string,string>		RETVAL;
		Const_char *		player_ref = (Const_char *)SvPV_nolen(ST(1));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->GetPlayerDetails(player_ref);
		ST(0) = sv_newmortal();
		if (RETVAL.begin()!=RETVAL.end())
		{
				//NOTE: we are leaking the original ST(0) right now
				HV *hv = newHV();
				sv_2mortal((SV*)hv);
				ST(0) = newRV((SV*)hv);

				map<string,string>::const_iterator cur, end;
				cur = RETVAL.begin();
				end = RETVAL.end();
				for(; cur != end; cur++) {
						/* get the element from the hash, creating if needed (will be needed) */
						SV**ele = hv_fetch(hv, cur->first.c_str(), cur->first.length(), TRUE);
						if(ele == nullptr) {
								Perl_croak(aTHX_ "Unable to create a hash element for RETVAL");
								break;
						}
						/* put our string in the SV associated with this element in the hash */
						sv_setpvn(*ele, cur->second.c_str(), cur->second.length());
				}
		}

















	}
	XSRETURN(1);
}

XS(XS_EQW_CountLaunchers); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_CountLaunchers)
{
	dXSARGS;
	if (items != 2)
		Perl_croak(aTHX_ "Usage: EQW::CountLaunchers(THIS, active_only)");
	{
		EQW *		THIS;
		int		RETVAL;
		dXSTARG;
		bool		active_only = (bool)SvTRUE(ST(1));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->CountLaunchers(active_only);
		XSprePUSH; PUSHi((IV)RETVAL);
	}
	XSRETURN(1);
}

XS(XS_EQW_ListLaunchers); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_ListLaunchers)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: EQW::ListLaunchers(THIS)");
	{
		EQW *		THIS;
		vector<string>		RETVAL;

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->ListLaunchers();
		ST(0) = sv_newmortal();
	{
			U32 ix_RETVAL;
			/* pop crap off the stack we dont really want */
			POPs;
			POPs;
			/* grow the stack to the number of elements being returned */
			EXTEND(SP, RETVAL.size());
			for (ix_RETVAL = 0; ix_RETVAL < RETVAL.size(); ix_RETVAL++) {
					const string &it = RETVAL[ix_RETVAL];
					ST(ix_RETVAL) = sv_newmortal();
					sv_setpvn(ST(ix_RETVAL), it.c_str(), it.length());
			}
			/* hackish, but im over it. The normal xsubpp return will be right below this */
			XSRETURN(RETVAL.size());
	}
	}
	XSRETURN(1);
}

XS(XS_EQW_GetLauncher); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_GetLauncher)
{
	dXSARGS;
	if (items != 2)
		Perl_croak(aTHX_ "Usage: EQW::GetLauncher(THIS, launcher_name)");
	{
		EQW *		THIS;
		EQLConfig *		RETVAL;
		Const_char *		launcher_name = (Const_char *)SvPV_nolen(ST(1));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->GetLauncher(launcher_name);
		ST(0) = sv_newmortal();
		sv_setref_pv(ST(0), "EQLConfig", (void*)RETVAL);
	}
	XSRETURN(1);
}

XS(XS_EQW_CreateLauncher); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_CreateLauncher)
{
	dXSARGS;
	if (items != 3)
		Perl_croak(aTHX_ "Usage: EQW::CreateLauncher(THIS, launcher_name, dynamic_count)");
	{
		EQW *		THIS;
		Const_char *		launcher_name = (Const_char *)SvPV_nolen(ST(1));
		int		dynamic_count = (int)SvIV(ST(2));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		THIS->CreateLauncher(launcher_name, dynamic_count);
	}
	XSRETURN_EMPTY;
}

XS(XS_EQW_CreateGuild); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_CreateGuild)
{
	dXSARGS;
	if (items != 3)
		Perl_croak(aTHX_ "Usage: EQW::CreateGuild(THIS, name, leader_char_id)");
	{
		EQW *		THIS;
		uint32		RETVAL;
		dXSTARG;
		char*		name = (char *)SvPV_nolen(ST(1));
		uint32		leader_char_id = (uint32)SvUV(ST(2));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->CreateGuild(name, leader_char_id);
		XSprePUSH; PUSHu((UV)RETVAL);
	}
	XSRETURN(1);
}

XS(XS_EQW_DeleteGuild); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_DeleteGuild)
{
	dXSARGS;
	if (items != 2)
		Perl_croak(aTHX_ "Usage: EQW::DeleteGuild(THIS, guild_id)");
	{
		EQW *		THIS;
		bool		RETVAL;
		uint32		guild_id = (uint32)SvUV(ST(1));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->DeleteGuild(guild_id);
		ST(0) = boolSV(RETVAL);
		sv_2mortal(ST(0));
	}
	XSRETURN(1);
}

XS(XS_EQW_RenameGuild); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_RenameGuild)
{
	dXSARGS;
	if (items != 3)
		Perl_croak(aTHX_ "Usage: EQW::RenameGuild(THIS, guild_id, name)");
	{
		EQW *		THIS;
		bool		RETVAL;
		uint32		guild_id = (uint32)SvUV(ST(1));
		char*		name = (char *)SvPV_nolen(ST(2));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->RenameGuild(guild_id, name);
		ST(0) = boolSV(RETVAL);
		sv_2mortal(ST(0));
	}
	XSRETURN(1);
}

XS(XS_EQW_SetGuildMOTD); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_SetGuildMOTD)
{
	dXSARGS;
	if (items != 4)
		Perl_croak(aTHX_ "Usage: EQW::SetGuildMOTD(THIS, guild_id, motd, setter)");
	{
		EQW *		THIS;
		bool		RETVAL;
		uint32		guild_id = (uint32)SvUV(ST(1));
		char*		motd = (char *)SvPV_nolen(ST(2));
		char *		setter = (char *)SvPV_nolen(ST(3));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->SetGuildMOTD(guild_id, motd, setter);
		ST(0) = boolSV(RETVAL);
		sv_2mortal(ST(0));
	}
	XSRETURN(1);
}

XS(XS_EQW_SetGuildLeader); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_SetGuildLeader)
{
	dXSARGS;
	if (items != 3)
		Perl_croak(aTHX_ "Usage: EQW::SetGuildLeader(THIS, guild_id, leader_char_id)");
	{
		EQW *		THIS;
		bool		RETVAL;
		uint32		guild_id = (uint32)SvUV(ST(1));
		uint32		leader_char_id = (uint32)SvUV(ST(2));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->SetGuildLeader(guild_id, leader_char_id);
		ST(0) = boolSV(RETVAL);
		sv_2mortal(ST(0));
	}
	XSRETURN(1);
}

XS(XS_EQW_SetGuild); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_SetGuild)
{
	dXSARGS;
	if (items != 4)
		Perl_croak(aTHX_ "Usage: EQW::SetGuild(THIS, charid, guild_id, rank)");
	{
		EQW *		THIS;
		bool		RETVAL;
		uint32		charid = (uint32)SvUV(ST(1));
		uint32		guild_id = (uint32)SvUV(ST(2));
		uint8		rank = (uint8)SvUV(ST(3));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->SetGuild(charid, guild_id, rank);
		ST(0) = boolSV(RETVAL);
		sv_2mortal(ST(0));
	}
	XSRETURN(1);
}

XS(XS_EQW_SetGuildRank); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_SetGuildRank)
{
	dXSARGS;
	if (items != 3)
		Perl_croak(aTHX_ "Usage: EQW::SetGuildRank(THIS, charid, rank)");
	{
		EQW *		THIS;
		bool		RETVAL;
		uint32		charid = (uint32)SvUV(ST(1));
		uint8		rank = (uint8)SvUV(ST(2));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->SetGuildRank(charid, rank);
		ST(0) = boolSV(RETVAL);
		sv_2mortal(ST(0));
	}
	XSRETURN(1);
}

XS(XS_EQW_SetBankerFlag); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_SetBankerFlag)
{
	dXSARGS;
	if (items != 3)
		Perl_croak(aTHX_ "Usage: EQW::SetBankerFlag(THIS, charid, is_banker)");
	{
		EQW *		THIS;
		bool		RETVAL;
		uint32		charid = (uint32)SvUV(ST(1));
		bool		is_banker = (bool)SvTRUE(ST(2));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->SetBankerFlag(charid, is_banker);
		ST(0) = boolSV(RETVAL);
		sv_2mortal(ST(0));
	}
	XSRETURN(1);
}

XS(XS_EQW_SetTributeFlag); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_SetTributeFlag)
{
	dXSARGS;
	if (items != 3)
		Perl_croak(aTHX_ "Usage: EQW::SetTributeFlag(THIS, charid, enabled)");
	{
		EQW *		THIS;
		bool		RETVAL;
		uint32		charid = (uint32)SvUV(ST(1));
		bool		enabled = (bool)SvTRUE(ST(2));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->SetTributeFlag(charid, enabled);
		ST(0) = boolSV(RETVAL);
		sv_2mortal(ST(0));
	}
	XSRETURN(1);
}

XS(XS_EQW_SetPublicNote); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_SetPublicNote)
{
	dXSARGS;
	if (items != 3)
		Perl_croak(aTHX_ "Usage: EQW::SetPublicNote(THIS, charid, note)");
	{
		EQW *		THIS;
		bool		RETVAL;
		uint32		charid = (uint32)SvUV(ST(1));
		char *		note = (char *)SvPV_nolen(ST(2));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->SetPublicNote(charid, note);
		ST(0) = boolSV(RETVAL);
		sv_2mortal(ST(0));
	}
	XSRETURN(1);
}

XS(XS_EQW_CountBugs); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_CountBugs)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: EQW::CountBugs(THIS)");
	{
		EQW *		THIS;
		int		RETVAL;
		dXSTARG;

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->CountBugs();
		XSprePUSH; PUSHi((IV)RETVAL);
	}
	XSRETURN(1);
}

XS(XS_EQW_ListBugs); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_ListBugs)
{
	dXSARGS;
	if (items != 2)
		Perl_croak(aTHX_ "Usage: EQW::ListBugs(THIS, id)");
	{
		EQW *		THIS;
        uint32      id = (uint32)SvUV(ST(1));
		vector<string>		RETVAL;


		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");
        
		RETVAL = THIS->ListBugs(id);
		ST(0) = sv_newmortal();
	{
			U32 ix_RETVAL;
			/* pop crap off the stack we dont really want */
			POPs;
			POPs;
			/* grow the stack to the number of elements being returned */
			EXTEND(SP, RETVAL.size());
			for (ix_RETVAL = 0; ix_RETVAL < RETVAL.size(); ix_RETVAL++) {
					const string &it = RETVAL[ix_RETVAL];
					ST(ix_RETVAL) = sv_newmortal();
					sv_setpvn(ST(ix_RETVAL), it.c_str(), it.length());
			}
			/* hackish, but im over it. The normal xsubpp return will be right below this */
			XSRETURN(RETVAL.size());
	}
	}
	XSRETURN(1);
}

XS(XS_EQW_GetBugDetails); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_GetBugDetails)
{
	dXSARGS;
	if (items != 2)
		Perl_croak(aTHX_ "Usage: EQW::GetBugDetails(THIS, bug_ref)");
	{
		EQW *		THIS;
		map<string,string>		RETVAL;
		Const_char *		bug_ref = (Const_char *)SvPV_nolen(ST(1));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->GetBugDetails(bug_ref);
		ST(0) = sv_newmortal();
		if (RETVAL.begin()!=RETVAL.end())
		{
				//NOTE: we are leaking the original ST(0) right now
				HV *hv = newHV();
				sv_2mortal((SV*)hv);
				ST(0) = newRV((SV*)hv);

				map<string,string>::const_iterator cur, end;
				cur = RETVAL.begin();
				end = RETVAL.end();
				for(; cur != end; cur++) {
						/* get the element from the hash, creating if needed (will be needed) */
						SV**ele = hv_fetch(hv, cur->first.c_str(), cur->first.length(), TRUE);
						if(ele == nullptr) {
								Perl_croak(aTHX_ "Unable to create a hash element for RETVAL");
								break;
						}
						/* put our string in the SV associated with this element in the hash */
						sv_setpvn(*ele, cur->second.c_str(), cur->second.length());
				}
		}
	}
	XSRETURN(1);
}

XS(XS_EQW_ResolveBug); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_ResolveBug)
{
	dXSARGS;
	if (items != 2)
		Perl_croak(aTHX_ "Usage: EQW::ResolveBug(THIS, id)");
	{
		EQW *		THIS;
        const char *id = (const char*)SvPV_nolen(ST(1));

		if (sv_derived_from(ST(0), "EQW")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQW *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQW");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");
        
		THIS->ResolveBug(id);
	}
	XSRETURN_EMPTY;
}

XS(XS_EQW_SendMessage); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_SendMessage)
{
    dXSARGS;
    if (items != 3)
        Perl_croak(aTHX_ "Usage: EQW::SendMessage(THIS, type, message)");
    {
        EQW *       THIS;
        dXSTARG;
        uint32      msgtype = (uint32)SvUV(ST(1));
        char*       msg = (char *)SvPV_nolen(ST(2));

        if (sv_derived_from(ST(0), "EQW")) {
            IV tmp = SvIV((SV*)SvRV(ST(0)));
            THIS = INT2PTR(EQW *,tmp);
        }
        else
            Perl_croak(aTHX_ "THIS is not of type EQW");
        if(THIS == NULL)
            Perl_croak(aTHX_ "THIS is NULL, avoiding crash.");

        THIS->SendMessage(msgtype, msg);
    }
    XSRETURN_EMPTY;
}

XS(XS_EQW_WorldShutDown); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQW_WorldShutDown)
{
    dXSARGS;
    if (items != 3)
        Perl_croak(aTHX_ "Usage: EQW::WorldShutDown(THIS, time, interval)");
    {
        EQW *       THIS;
        dXSTARG;
        uint32      time = (uint32)SvUV(ST(1));
        uint32      interval = (uint32)SvUV(ST(2));

        if (sv_derived_from(ST(0), "EQW")) {
            IV tmp = SvIV((SV*)SvRV(ST(0)));
            THIS = INT2PTR(EQW *,tmp);
        }
        else
            Perl_croak(aTHX_ "THIS is not of type EQW");
        if(THIS == NULL)
            Perl_croak(aTHX_ "THIS is NULL, avoiding crash.");

        THIS->WorldShutDown(time, interval);
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_EQW); /* prototype to pass -Wmissing-prototypes */
XS(boot_EQW)
{
	dXSARGS;
	char file[256];
	strncpy(file, __FILE__, 256);
	file[255] = 0;

	if(items != 1)
		fprintf(stderr, "boot_quest does not take any arguments.");
	char buf[128];

	//add the strcpy stuff to get rid of const warnings....



	XS_VERSION_BOOTCHECK ;

		newXSproto(strcpy(buf, "GetConfig"), XS_EQW_GetConfig, file, "$$");
		newXSproto(strcpy(buf, "LockWorld"), XS_EQW_LockWorld, file, "$");
		newXSproto(strcpy(buf, "UnlockWorld"), XS_EQW_UnlockWorld, file, "$");
		newXSproto(strcpy(buf, "LSConnected"), XS_EQW_LSConnected, file, "$");
		newXSproto(strcpy(buf, "LSReconnect"), XS_EQW_LSReconnect, file, "$");
		newXSproto(strcpy(buf, "CountZones"), XS_EQW_CountZones, file, "$");
		newXSproto(strcpy(buf, "ListBootedZones"), XS_EQW_ListBootedZones, file, "$");
		newXSproto(strcpy(buf, "GetZoneDetails"), XS_EQW_GetZoneDetails, file, "$$");
		newXSproto(strcpy(buf, "CountPlayers"), XS_EQW_CountPlayers, file, "$");
		newXSproto(strcpy(buf, "ListPlayers"), XS_EQW_ListPlayers, file, "$;$");
		newXSproto(strcpy(buf, "GetPlayerDetails"), XS_EQW_GetPlayerDetails, file, "$$");
		newXSproto(strcpy(buf, "CountLaunchers"), XS_EQW_CountLaunchers, file, "$$");
		newXSproto(strcpy(buf, "ListLaunchers"), XS_EQW_ListLaunchers, file, "$");
		newXSproto(strcpy(buf, "GetLauncher"), XS_EQW_GetLauncher, file, "$$");
		newXSproto(strcpy(buf, "CreateLauncher"), XS_EQW_CreateLauncher, file, "$$$");
		newXSproto(strcpy(buf, "CreateGuild"), XS_EQW_CreateGuild, file, "$$$");
		newXSproto(strcpy(buf, "DeleteGuild"), XS_EQW_DeleteGuild, file, "$$");
		newXSproto(strcpy(buf, "RenameGuild"), XS_EQW_RenameGuild, file, "$$$");
		newXSproto(strcpy(buf, "SetGuildMOTD"), XS_EQW_SetGuildMOTD, file, "$$$$");
		newXSproto(strcpy(buf, "SetGuildLeader"), XS_EQW_SetGuildLeader, file, "$$$");
		newXSproto(strcpy(buf, "SetGuild"), XS_EQW_SetGuild, file, "$$$$");
		newXSproto(strcpy(buf, "SetGuildRank"), XS_EQW_SetGuildRank, file, "$$$");
		newXSproto(strcpy(buf, "SetBankerFlag"), XS_EQW_SetBankerFlag, file, "$$$");
		newXSproto(strcpy(buf, "SetTributeFlag"), XS_EQW_SetTributeFlag, file, "$$$");
		newXSproto(strcpy(buf, "SetPublicNote"), XS_EQW_SetPublicNote, file, "$$$");
        newXSproto(strcpy(buf, "CountBugs"), XS_EQW_CountBugs, file, "$");
        newXSproto(strcpy(buf, "ListBugs"), XS_EQW_ListBugs, file, "$$");
		newXSproto(strcpy(buf, "GetBugDetails"), XS_EQW_GetBugDetails, file, "$$");
        newXSproto(strcpy(buf, "ResolveBug"), XS_EQW_ResolveBug, file, "$$");
		newXSproto(strcpy(buf, "SendMessage"), XS_EQW_SendMessage, file, "$$$");
		newXSproto(strcpy(buf, "WorldShutDown"), XS_EQW_WorldShutDown, file, "$$$");
	XSRETURN_YES;
}

#endif //EMBPERL_XS_CLASSES


/* speed.exe 008622aa FUN_008622aa; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_008622aa(uint *param_1)

{
  _DAT_009c3f48 = _DAT_009c3f48 + 0x100;
  if (_DAT_009c3f48 == 0) {
    _DAT_009c3f48 = 0x100;
  }
  *param_1 = *param_1 & 0xff | _DAT_009c3f48;
  return;
}


/* speed.exe 00622d20 FUN_00622d20; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00622d20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008a6f3c;
  switch(param_1[2]) {
  case 0:
    _DAT_00902144 = 0;
    *param_1 = &PTR_LAB_008a66f8;
    return;
  case 1:
    _DAT_00902144 = 1;
    *param_1 = &PTR_LAB_008a66f8;
    return;
  case 2:
    _DAT_00902144 = 2;
    *param_1 = &PTR_LAB_008a66f8;
    return;
  case 3:
    _DAT_00902144 = 3;
    *param_1 = &PTR_LAB_008a66f8;
    return;
  default:
    _DAT_00902144 = 0xffffffff;
    *param_1 = &PTR_LAB_008a66f8;
    return;
  }
}


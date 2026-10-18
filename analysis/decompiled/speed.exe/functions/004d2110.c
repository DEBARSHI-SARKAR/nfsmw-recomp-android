/* speed.exe 004d2110 FUN_004d2110; analysis pseudocode, not buildable source.
 * calls 00831a2a FUN_00831a2a
 * calls 0083196b FUN_0083196b
 */

void __fastcall FUN_004d2110(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_c [8];
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = FUN_00831a2a(&DAT_00914834,local_c);
  if (iVar1 < 0) {
    FUN_0083196b(&PTR_s_NIS_Select_Blacklist_008f0370);
    FUN_00831a2a(&DAT_00914834,local_c);
  }
  return;
}


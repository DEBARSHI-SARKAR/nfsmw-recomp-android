/* speed.exe 004d2070 FUN_004d2070; analysis pseudocode, not buildable source.
 * calls 00831a2a FUN_00831a2a
 * calls 0083196b FUN_0083196b
 */

void __fastcall FUN_004d2070(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_c [8];
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = FUN_00831a2a(&DAT_00914864,local_c);
  if (iVar1 < 0) {
    FUN_0083196b(&PTR_s_NIS_Select_Start_008f0360);
    FUN_00831a2a(&DAT_00914864,local_c);
  }
  return;
}


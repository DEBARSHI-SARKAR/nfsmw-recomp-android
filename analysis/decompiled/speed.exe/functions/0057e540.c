/* speed.exe 0057e540 FUN_0057e540; analysis pseudocode, not buildable source.
 * calls 00526050 FUN_00526050
 * calls 00572360 FUN_00572360
 * calls 00516e10 FUN_00516e10
 */

void __fastcall FUN_0057e540(undefined4 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00871fa3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a0fd4;
  DAT_0091cf68 = 0;
  uVar1 = *(undefined1 *)(param_1 + 0x13);
  local_4 = 1;
  iVar2 = FUN_00516e10();
  *(undefined1 *)(iVar2 + 1) = uVar1;
  local_4 = local_4 & 0xffffff00;
  FUN_00526050();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}


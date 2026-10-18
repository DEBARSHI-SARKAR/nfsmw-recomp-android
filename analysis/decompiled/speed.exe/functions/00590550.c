/* speed.exe 00590550 FUN_00590550; analysis pseudocode, not buildable source.
 * calls 00580f40 FUN_00580f40
 */

int __fastcall FUN_00590550(int param_1)

{
  int iVar1;
  undefined **local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00872858;
  local_c = ExceptionList;
  local_10 = &PTR_FUN_008a0730;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00580f40(&local_10);
  ExceptionList = local_c;
  return iVar1 + (uint)*(ushort *)(param_1 + 0x8ca4);
}


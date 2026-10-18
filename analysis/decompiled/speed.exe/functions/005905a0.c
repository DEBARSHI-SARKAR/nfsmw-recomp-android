/* speed.exe 005905a0 FUN_005905a0; analysis pseudocode, not buildable source.
 * calls 00580f40 FUN_00580f40
 */

int __fastcall FUN_005905a0(int param_1)

{
  int iVar1;
  undefined **local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00872878;
  local_c = ExceptionList;
  local_10 = &PTR_FUN_008a0738;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00580f40(&local_10);
  ExceptionList = local_c;
  return iVar1 + (uint)*(ushort *)(param_1 + 0x8ca6);
}


/* speed.exe 00782970 FUN_00782970; analysis pseudocode, not buildable source.
 * calls 00781580 FUN_00781580
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_00782970(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00881ff8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00781580();
  iVar1 = *(int *)(param_1 + 4);
  local_4 = 0xffffffff;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0xc) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}


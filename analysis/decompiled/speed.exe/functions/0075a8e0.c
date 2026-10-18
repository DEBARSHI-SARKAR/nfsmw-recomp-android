/* speed.exe 0075a8e0 FUN_0075a8e0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

/* WARNING: Removing unreachable block (ram,0x0075a93a) */

void __fastcall FUN_0075a8e0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008811eb;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0xc);
  local_4 = 0;
  if (iVar1 != 0) {
    ExceptionList = &local_c;
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x14) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  ExceptionList = local_c;
  return;
}


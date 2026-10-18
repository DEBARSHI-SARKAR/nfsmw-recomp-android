/* speed.exe 004cc470 FUN_004cc470; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_004cc470(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086c3bb;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x50);
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    ExceptionList = &local_c;
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x58) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  local_4 = 0xffffffff;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x48) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  ExceptionList = local_c;
  return;
}


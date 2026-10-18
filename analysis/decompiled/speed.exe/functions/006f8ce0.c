/* speed.exe 006f8ce0 FUN_006f8ce0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_006f8ce0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087f170;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x14);
  local_4 = 1;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    ExceptionList = &local_c;
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x1c) - iVar1 >> 4) << 4,0);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = *(int *)(param_1 + 4);
  local_4 = local_4 & 0xffffff00;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0xc) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  DAT_00988ecc = 0;
  ExceptionList = local_c;
  return;
}


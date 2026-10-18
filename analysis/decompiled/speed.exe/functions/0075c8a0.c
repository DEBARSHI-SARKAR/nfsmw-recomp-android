/* speed.exe 0075c8a0 FUN_0075c8a0; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 0075a8e0 FUN_0075a8e0
 */

void __fastcall FUN_0075c8a0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00881328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b5228;
  uVar2 = 0;
  local_4 = 0;
  piVar3 = param_1 + 0xd;
  iVar4 = 0x17;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      FUN_00463ca0(DAT_009b0a78,iVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (param_1[2] != 0) {
    piVar3 = param_1 + 3;
    do {
      iVar4 = *piVar3;
      if (iVar4 != 0) {
        FUN_0075a8e0();
        FUN_00463ca0(DAT_009b0a7c,iVar4);
        *piVar3 = 0;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < (uint)param_1[2]);
  }
  *param_1 = &PTR_LAB_008b483c;
  ExceptionList = local_c;
  return;
}


/* speed.exe 004de370 FUN_004de370; analysis pseudocode, not buildable source.
 * calls 004b0cc0 FUN_004b0cc0
 * calls 004cfce0 FUN_004cfce0
 * calls 007c4b80 FUN_007c4b80
 * calls 004b0c50 FUN_004b0c50
 * calls 004ba760 FUN_004ba760
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004de370(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cc8b;
  local_c = ExceptionList;
  iVar4 = -1;
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar4 = 0;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar4 = 1;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar4 = 2;
  }
  else if (iVar4 == -1) {
    return;
  }
  if (param_3 == '\0') {
    uVar3 = DAT_00914ae0 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    ExceptionList = &local_c;
    iVar1 = FUN_007c4b80();
    iVar1 = uVar3 + iVar1 * -4 + 0x51;
    DAT_00914ae0 = uVar3 + 1;
  }
  else {
    uVar3 = DAT_00914ae4 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    ExceptionList = &local_c;
    iVar1 = FUN_007c4b80();
    iVar1 = uVar3 + iVar1 * -4 + 0x5d;
    DAT_00914ae4 = uVar3 + 1;
  }
  uVar2 = FUN_004ba760(0,iVar1);
  iVar1 = FUN_004b0cc0(0x6c);
  local_4 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004b0c50(uVar2);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c + iVar4 * 4) = uVar2;
  FUN_004cfce0(0,0,0);
  *(undefined4 *)(param_1 + 0x38 + iVar4 * 4) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0x7fff;
  iVar4 = FUN_007c4b80();
  *(int *)(*(int *)(param_1 + 0xc) + 0xc) = iVar4 << 8;
  ExceptionList = local_c;
  return;
}


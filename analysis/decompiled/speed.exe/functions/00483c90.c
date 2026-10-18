/* speed.exe 00483c90 FUN_00483c90; analysis pseudocode, not buildable source.
 * calls 004804a0 FUN_004804a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00483c90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != 0) {
    iVar1 = DAT_00925ae8;
    if (*(char *)(param_1 + 0x78) != '\0') {
      iVar1 = DAT_00925b14;
    }
    if (((float)iVar1 * _DAT_00890984 - *(float *)(iVar3 + 0xc)) / *(float *)(iVar3 + 0x10) <
        _DAT_0089096c) {
      return;
    }
  }
  if (((((undefined4 **)DAT_00919694 == &DAT_00919694) || (DAT_00919694 == (undefined4 *)0x0)) ||
      (DAT_00919694 == (undefined4 *)0x4)) || (DAT_00919694[2] != 0xe)) {
    uVar2 = 0;
  }
  else {
    uVar2 = DAT_00919694[0x1f];
  }
  iVar3 = FUN_004804a0(uVar2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x24) = iVar3;
    if (*(char *)(param_1 + 0x78) != '\0') {
      *(float *)(iVar3 + 0xc) = (float)DAT_00925b14 * _DAT_00890984;
      return;
    }
    *(float *)(iVar3 + 0xc) = (float)DAT_00925ae8 * _DAT_00890984;
  }
  return;
}


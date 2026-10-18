/* speed.exe 006f2370 FUN_006f2370; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 00401f50 FUN_00401f50
 */

void __thiscall FUN_006f2370(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(int *)(param_2 + 0x3c) != 0) &&
      (iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*(int *)(param_2 + 0x3c)),
      iVar1 != 0)) && (iVar1 = *(int *)(iVar1 + 4), iVar1 != 0)) {
    if ((((byte)*(undefined4 *)(param_2 + 0x1c) & 7) == 1) && (*(int *)(param_2 + 0x4c) != 0)) {
      FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*(int *)(param_2 + 0x4c));
    }
    iVar2 = (**(code **)(*(int *)(param_1 + -8) + 0x14))();
    if (((*(int *)(param_1 + 4) != 0) && (iVar2 != 0)) &&
       ((*(char *)(iVar2 + 4) != '\0' && (DAT_008f86e0 != 0)))) {
      iVar2 = **(int **)(param_1 + 4);
      uVar3 = (**(code **)(*(int *)(param_1 + -0x28) + 0xc))();
      uVar3 = FUN_00401f50(iVar1,uVar3);
      (**(code **)(iVar2 + 0x38))(param_2,uVar3);
    }
  }
  return;
}


/* speed.exe 00707860 FUN_00707860; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00707860(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  uVar4 = 4;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  if (iVar1 != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      piVar2 = (int *)FUN_005d59f0(&LAB_00404060);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x34))();
      }
    }
  }
  if (((DAT_00993cc8 != 0) && (*(int *)(DAT_00993cc8 + 0x204) != 0)) &&
     (*(char *)(*(int *)(DAT_00993cc8 + 0x204) + 0x58) != '\0')) {
    uVar4 = 1;
  }
  fVar5 = (float10)(**(code **)(*param_1 + 0x5c))();
  uVar3 = 8;
  if ((float10)_DAT_0089096c <= fVar5) {
    uVar3 = uVar4;
  }
  return uVar3;
}


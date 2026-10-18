/* speed.exe 005e8960 FUN_005e8960; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 006ed550 FUN_006ed550
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005e8960(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  
  cVar1 = (**(code **)(*param_2 + 0x88))();
  if (cVar1 == '\0') {
    return 1;
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x1958)) {
    piVar4 = (int *)(param_1 + 0x18);
    do {
      if ((((*piVar4 != 0) &&
           (iVar2 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar4), iVar2 != 0))
          && (*(int *)(iVar2 + 4) != 0)) && (*(int *)(*(int *)(iVar2 + 4) + 4) == param_2[1])) {
        fVar6 = (float10)(**(code **)(*param_2 + 0x60))();
        if ((float10)_DAT_008a3724 <= fVar6) {
          uVar3 = (**(code **)(*param_2 + 0xc))();
          fVar6 = (float10)FUN_006ed550(uVar3);
          if ((float10)_DAT_008a3720 <= fVar6) {
            return 1;
          }
        }
        return 0;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 0x65;
    } while (iVar5 < *(int *)(param_1 + 0x1958));
  }
  return 1;
}


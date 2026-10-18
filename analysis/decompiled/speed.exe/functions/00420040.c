/* speed.exe 00420040 FUN_00420040; analysis pseudocode, not buildable source.
 * calls 006ed550 FUN_006ed550
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00420040(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  if (param_2 != *(int *)(*(int *)(param_1 + 0x30) + 8)) {
    fVar3 = (float10)FUN_006ed550(param_4);
    if ((fVar3 <= (float10)_DAT_00891040) && (param_2 != 0)) {
      iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_2);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
        piVar2 = (int *)FUN_005d59f0(&LAB_004040e0);
        if (piVar2 != (int *)0x0) {
          fVar3 = (float10)(**(code **)(*piVar2 + 0x98))();
          if (((float10)_DAT_00891300 <= fVar3) || (*(int *)(param_1 + 0xac) != 2)) {
            iVar1 = (**(code **)(*piVar2 + 0x58))();
            if ((iVar1 == 0) || ((1 < iVar1 && (iVar1 < 4)))) {
              if (*(char *)(param_1 + 0x58) != '\0') {
                *(undefined4 *)(param_1 + 0xac) = 2;
                *(undefined4 *)(param_1 + 0xb0) = 0;
                return;
              }
              *(undefined4 *)(param_1 + 0xac) = 1;
              *(undefined4 *)(param_1 + 0xb0) = 0x40400000;
            }
          }
        }
      }
    }
  }
  return;
}


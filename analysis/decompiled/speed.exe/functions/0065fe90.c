/* speed.exe 0065fe90 FUN_0065fe90; analysis pseudocode, not buildable source.
 * calls 007ec298 FUN_007ec298
 * calls 0045ce40 FUN_0045ce40
 * calls 0065f9a0 FUN_0065f9a0
 * calls 00462430 FUN_00462430
 * calls 0064c7d0 FUN_0064c7d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0065fe90(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  uVar1 = DAT_009258d0;
  local_4 = param_2;
  local_8 = param_3 + 7 >> 3;
  local_c = param_4;
  iVar3 = *(int *)(&DAT_009257ac + DAT_009258d0 * 4);
  *(int *)(&DAT_009257ac + DAT_009258d0 * 4) = iVar3 + local_8;
  if (0x800 < iVar3 + local_8) {
    fVar5 = (float10)FUN_00462430(*(undefined4 *)(&DAT_009257d8 + uVar1 * 4));
    if (fVar5 < (float10)_DAT_008a8000) {
      fVar5 = (float10)FUN_00462430(*(undefined4 *)(&DAT_009257d8 + DAT_009258d0 * 4));
      if (fVar5 < (float10)_DAT_008a8000) {
        do {
          FUN_007ec298(1);
          fVar5 = (float10)FUN_00462430(*(undefined4 *)(&DAT_009257d8 + DAT_009258d0 * 4));
        } while (fVar5 < (float10)_DAT_008a8000);
      }
    }
    DAT_009258d0 = DAT_009258d0 ^ 1;
    *(undefined4 *)(&DAT_009257ac + DAT_009258d0 * 4) = 0;
    uVar2 = FUN_0045ce40();
    *(undefined4 *)(&DAT_009257d8 + DAT_009258d0 * 4) = uVar2;
  }
  iVar3 = FUN_0064c7d0(&local_c,*param_1);
  iVar4 = iVar3 - param_1[3];
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[4] = iVar3;
  if (((param_1[3] - iVar3) + 0x4000 < 0x100) && (0 < iVar4)) {
    FUN_0065f9a0(param_1 + 5,param_1 + 0x46,iVar4);
    param_1[3] = *param_1;
    param_1[1] = 0;
  }
  return;
}


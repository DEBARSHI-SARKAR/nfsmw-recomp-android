/* speed.exe 006476e0 FUN_006476e0; analysis pseudocode, not buildable source.
 * calls 00629930 FUN_00629930
 * calls 00646ca0 FUN_00646ca0
 * calls 00629990 FUN_00629990
 * calls 00646280 FUN_00646280
 */

undefined4 * __thiscall FUN_006476e0(int param_1,undefined4 *param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00646280(param_2,1,*(undefined4 *)(param_1 + 4),param_4);
    return param_2;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_3 == (int *)*piVar1) {
    if (*param_4 < (uint)param_3[3]) {
      FUN_00646280(param_2,1,param_3,param_4);
      return param_2;
    }
  }
  else if (param_3 == piVar1) {
    if (*(uint *)(piVar1[2] + 0xc) < *param_4) {
      FUN_00646280(param_2,0,piVar1[2],param_4);
      return param_2;
    }
  }
  else {
    uVar2 = *param_4;
    uVar3 = param_3[3];
    if (uVar2 < uVar3) {
      FUN_00629930();
      if ((uint)param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_00646280(param_2,0,param_3,param_4);
          return param_2;
        }
        FUN_00646280(param_2,1,param_3,param_4);
        return param_2;
      }
      uVar3 = param_3[3];
    }
    if (uVar3 < uVar2) {
      FUN_00629990();
      if ((param_3 == *(int **)(param_1 + 4)) || (uVar2 < (uint)param_3[3])) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_00646280(param_2,0,param_3,param_4);
          return param_2;
        }
        FUN_00646280(param_2,1,param_3,param_4);
        return param_2;
      }
    }
  }
  puVar4 = (undefined4 *)FUN_00646ca0(local_8,param_4);
  *param_2 = *puVar4;
  return param_2;
}


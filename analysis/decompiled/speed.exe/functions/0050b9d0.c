/* speed.exe 0050b9d0 FUN_0050b9d0; analysis pseudocode, not buildable source.
 * calls 00500680 FUN_00500680
 * calls 005006e0 FUN_005006e0
 * calls 0050a7f0 FUN_0050a7f0
 * calls 0050b320 FUN_0050b320
 */

undefined4 * __thiscall FUN_0050b9d0(int param_1,undefined4 *param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0050a7f0(param_2,1,*(undefined4 *)(param_1 + 4),param_4);
    return param_2;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_3 == (int *)*piVar1) {
    if (*param_4 < (uint)param_3[3]) {
      FUN_0050a7f0(param_2,1,param_3,param_4);
      return param_2;
    }
  }
  else if (param_3 == piVar1) {
    if (*(uint *)(piVar1[2] + 0xc) < *param_4) {
      FUN_0050a7f0(param_2,0,piVar1[2],param_4);
      return param_2;
    }
  }
  else {
    uVar2 = *param_4;
    uVar3 = param_3[3];
    if (uVar2 < uVar3) {
      FUN_00500680();
      if ((uint)param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_0050a7f0(param_2,0,param_3,param_4);
          return param_2;
        }
        FUN_0050a7f0(param_2,1,param_3,param_4);
        return param_2;
      }
      uVar3 = param_3[3];
    }
    if (uVar3 < uVar2) {
      FUN_005006e0();
      if ((param_3 == *(int **)(param_1 + 4)) || (uVar2 < (uint)param_3[3])) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_0050a7f0(param_2,0,param_3,param_4);
          return param_2;
        }
        FUN_0050a7f0(param_2,1,param_3,param_4);
        return param_2;
      }
    }
  }
  puVar4 = (undefined4 *)FUN_0050b320(local_8,param_4);
  *param_2 = *puVar4;
  return param_2;
}


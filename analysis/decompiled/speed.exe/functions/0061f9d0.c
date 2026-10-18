/* speed.exe 0061f9d0 FUN_0061f9d0; analysis pseudocode, not buildable source.
 * calls 0061f7e0 FUN_0061f7e0
 * calls 0061f200 FUN_0061f200
 * calls 00609800 FUN_00609800
 * calls 00609860 FUN_00609860
 */

undefined4 * __thiscall FUN_0061f9d0(int param_1,undefined4 *param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0061f200(param_2,1,*(undefined4 *)(param_1 + 4),param_4);
    return param_2;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_3 == (int *)*piVar1) {
    if (*param_4 < (uint)param_3[3]) {
      FUN_0061f200(param_2,1,param_3,param_4);
      return param_2;
    }
  }
  else if (param_3 == piVar1) {
    if (*(uint *)(piVar1[2] + 0xc) < *param_4) {
      FUN_0061f200(param_2,0,piVar1[2],param_4);
      return param_2;
    }
  }
  else {
    uVar2 = *param_4;
    uVar3 = param_3[3];
    if (uVar2 < uVar3) {
      FUN_00609800();
      if ((uint)param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x21) != '\0') {
          FUN_0061f200(param_2,0,param_3,param_4);
          return param_2;
        }
        FUN_0061f200(param_2,1,param_3,param_4);
        return param_2;
      }
      uVar3 = param_3[3];
    }
    if (uVar3 < uVar2) {
      FUN_00609860();
      if ((param_3 == *(int **)(param_1 + 4)) || (uVar2 < (uint)param_3[3])) {
        if (*(char *)(param_3[2] + 0x21) != '\0') {
          FUN_0061f200(param_2,0,param_3,param_4);
          return param_2;
        }
        FUN_0061f200(param_2,1,param_3,param_4);
        return param_2;
      }
    }
  }
  puVar4 = (undefined4 *)FUN_0061f7e0(local_8,param_4);
  *param_2 = *puVar4;
  return param_2;
}


/* speed.exe 005f2de0 FUN_005f2de0; analysis pseudocode, not buildable source.
 * calls 005ef860 FUN_005ef860
 * calls 005f2290 FUN_005f2290
 * calls 005e6320 FUN_005e6320
 * calls 005e6ec0 FUN_005e6ec0
 */

undefined4 * __thiscall FUN_005f2de0(int param_1,undefined4 *param_2,int *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  short sVar4;
  undefined4 *puVar5;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_005ef860(param_2,1,*(undefined4 *)(param_1 + 4),param_4);
    return param_2;
  }
  piVar3 = *(int **)(param_1 + 4);
  if (param_3 == (int *)*piVar3) {
    if (*param_4 < (short)param_3[3]) {
      FUN_005ef860(param_2,1,param_3,param_4);
      return param_2;
    }
  }
  else if (param_3 == piVar3) {
    if (*(short *)(piVar3[2] + 0xc) < *param_4) {
      FUN_005ef860(param_2,0,piVar3[2],param_4);
      return param_2;
    }
  }
  else {
    sVar1 = *param_4;
    sVar2 = (short)param_3[3];
    sVar4 = sVar2 - sVar1;
    if (sVar1 < sVar2) {
      FUN_005e6ec0();
      if ((short)param_3[3] < sVar1) {
        if (*(char *)(param_3[2] + 0xf) != '\0') {
          FUN_005ef860(param_2,0,param_3,param_4);
          return param_2;
        }
        FUN_005ef860(param_2,1,param_3,param_4);
        return param_2;
      }
      sVar2 = (short)param_3[3];
      sVar4 = sVar2 - sVar1;
    }
    if (SBORROW2(sVar2,sVar1) != sVar4 < 0) {
      FUN_005e6320();
      if ((param_3 == *(int **)(param_1 + 4)) || (sVar1 < (short)param_3[3])) {
        if (*(char *)(param_3[2] + 0xf) != '\0') {
          FUN_005ef860(param_2,0,param_3,param_4);
          return param_2;
        }
        FUN_005ef860(param_2,1,param_3,param_4);
        return param_2;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_005f2290(local_8,param_4);
  *param_2 = *puVar5;
  return param_2;
}


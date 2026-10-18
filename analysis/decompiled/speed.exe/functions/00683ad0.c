/* speed.exe 00683ad0 FUN_00683ad0; analysis pseudocode, not buildable source.
 * calls 0066ea50 FUN_0066ea50
 * calls 00681c70 FUN_00681c70
 * calls 0066e9f0 FUN_0066e9f0
 * calls 00683350 FUN_00683350
 */

undefined4 * __thiscall FUN_00683ad0(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00681c70(param_2,1,*(undefined4 *)(param_1 + 4),param_4);
    return param_2;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_3 == (int *)*piVar1) {
    if (*param_4 < param_3[3]) {
      FUN_00681c70(param_2,1,param_3,param_4);
      return param_2;
    }
  }
  else if (param_3 == piVar1) {
    if (*(int *)(piVar1[2] + 0xc) < *param_4) {
      FUN_00681c70(param_2,0,piVar1[2],param_4);
      return param_2;
    }
  }
  else {
    iVar2 = *param_4;
    iVar3 = param_3[3];
    iVar4 = iVar3 - iVar2;
    if (iVar2 < iVar3) {
      FUN_0066e9f0();
      if (param_3[3] < iVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_00681c70(param_2,0,param_3,param_4);
          return param_2;
        }
        FUN_00681c70(param_2,1,param_3,param_4);
        return param_2;
      }
      iVar3 = param_3[3];
      iVar4 = iVar3 - iVar2;
    }
    if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
      FUN_0066ea50();
      if ((param_3 == *(int **)(param_1 + 4)) || (iVar2 < param_3[3])) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_00681c70(param_2,0,param_3,param_4);
          return param_2;
        }
        FUN_00681c70(param_2,1,param_3,param_4);
        return param_2;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_00683350(local_8,param_4);
  *param_2 = *puVar5;
  return param_2;
}


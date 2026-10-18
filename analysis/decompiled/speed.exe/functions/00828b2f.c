/* speed.exe 00828b2f FUN_00828b2f; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00828b2f(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  iVar2 = param_1[2];
  param_1[0x29] = *param_2;
  if (iVar2 == 0) {
    local_8 = 0;
  }
  else {
    if (param_3 < iVar2) {
      iVar2 = param_3;
    }
    iVar3 = param_1[1];
    if (iVar3 != 0) {
      local_8 = iVar3;
      if (iVar2 < iVar3) {
        local_8 = iVar2;
      }
      iVar3 = local_8;
      if (0 < local_8) {
        do {
          *(undefined4 *)param_1[0x29] = *(undefined4 *)param_1[4];
          param_1[0x29] = param_1[0x29] + 4;
          param_1[4] = param_1[4] + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      param_1[2] = param_1[2] - local_8;
      param_1[1] = param_1[1] - local_8;
      iVar2 = iVar2 - local_8;
    }
    piVar1 = param_1 + 0x25;
    iVar4 = (iVar2 / 0x1c) * 0x1c;
    iVar3 = iVar2 % 0x1c;
    *piVar1 = iVar4;
    if (0 < iVar4) {
      (*(code *)*param_1)(piVar1);
      param_1[2] = param_1[2] + (iVar2 / 0x1c) * -0x1c;
      local_8 = local_8 + iVar4;
    }
    if (0 < iVar3) {
      iVar2 = param_1[0x29];
      param_1[0x29] = param_1 + 9;
      *piVar1 = iVar3;
      (*(code *)*param_1)(piVar1);
      param_1[2] = param_1[2] - iVar3;
      param_1[1] = -*piVar1;
      iVar4 = 0;
      param_1[4] = param_1[0x29] + *piVar1 * 4;
      param_1[0x29] = param_1[0x29] + -0x70;
      if (0 < iVar3) {
        do {
          *(undefined4 *)(iVar2 + iVar4 * 4) = *(undefined4 *)(param_1[0x29] + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
      local_8 = local_8 + iVar3;
    }
    if ((int)param_1[2] < 1) {
      param_1[1] = 0;
    }
  }
  return local_8;
}


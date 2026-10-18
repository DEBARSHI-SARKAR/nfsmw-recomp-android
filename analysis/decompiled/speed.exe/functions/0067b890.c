/* speed.exe 0067b890 FUN_0067b890; analysis pseudocode, not buildable source.
 * calls 006798f0 FUN_006798f0
 */

int * __thiscall FUN_0067b890(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_110;
  int local_10c;
  int local_108 [65];
  
  iVar3 = *param_1;
  iVar4 = 0;
  if (0 < iVar3) {
    iVar2 = param_1[1];
    do {
      iVar1 = iVar2;
      if (iVar2 < 0) {
        iVar1 = param_1[3] + iVar2;
      }
      piVar5 = param_1 + iVar1 * 0x42 + 4;
      if (param_1[iVar1 * 0x42 + 5] == param_2) {
        local_110 = *piVar5;
        local_10c = piVar5[1];
        iVar4 = param_1[2];
        piVar5 = piVar5 + 2;
        piVar6 = local_108;
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        param_1[2] = iVar4 + 1;
        if (param_1[3] + -1 < iVar4 + 1) {
          param_1[2] = 0;
        }
        *param_1 = iVar3 + -1;
        FUN_006798f0(&local_110);
        if (param_1 + param_1[1] * 0x42 + 4 != (int *)0x0) {
          return param_1 + param_1[1] * 0x42 + 4;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar4 < *param_1);
  }
  local_10c = param_2;
  local_110 = 0;
  piVar5 = local_108;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  FUN_006798f0(&local_110);
  return param_1 + param_1[1] * 0x42 + 4;
}


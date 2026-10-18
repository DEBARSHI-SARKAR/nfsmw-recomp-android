/* speed.exe 0072bf80 FUN_0072bf80; analysis pseudocode, not buildable source.
 * calls 00727bc0 FUN_00727bc0
 * calls 00727b70 FUN_00727b70
 */

int __thiscall FUN_0072bf80(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_4;
  
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  local_4 = 0;
  iVar1 = FUN_00727bc0(0,0);
  if (iVar1 == 0) {
    return 0;
  }
LAB_0072bfb2:
  iVar2 = 0;
  if (0 < param_1[0xb0]) {
    piVar3 = param_1 + 0xb1;
    do {
      iVar4 = *piVar3;
      if (*(int *)(iVar4 + 0x4c) == *(int *)(iVar1 + 8)) goto LAB_0072bffb;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < param_1[0xb0]);
  }
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar4 = *param_1;
    do {
      if (*(int *)(iVar4 + 0x4c) == *(int *)(iVar1 + 8)) goto LAB_0072bffb;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x5c;
    } while (iVar2 < param_1[1]);
  }
  goto LAB_0072bfff;
LAB_0072bffb:
  if (iVar4 == 0) {
LAB_0072bfff:
    local_4 = local_4 + *(int *)(iVar1 + 0xc);
    iVar2 = FUN_00727b70(0,iVar1);
    if (((iVar2 != 0) && (iVar2 = FUN_00727b70(1,iVar1), iVar2 != 0)) && (param_2 != (int *)0x0)) {
      *param_2 = iVar1 + 0x11;
    }
  }
  iVar1 = FUN_00727bc0(0,iVar1);
  if (iVar1 == 0) {
    return local_4;
  }
  goto LAB_0072bfb2;
}


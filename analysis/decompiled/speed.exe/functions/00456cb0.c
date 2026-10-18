/* speed.exe 00456cb0 FUN_00456cb0; analysis pseudocode, not buildable source.
 * calls 00455bc0 FUN_00455bc0
 * calls 00455960 FUN_00455960
 */

undefined4 * __thiscall
FUN_00456cb0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  *param_1 = param_4;
  iVar1 = param_2[1];
  if (iVar1 == 0) {
    iVar1 = 0;
    goto LAB_00456d00;
  }
  if (param_2[2] == 0) {
    if (*param_2 != 0) {
      iVar2 = FUN_00455bc0(*param_2);
      if (iVar2 != 0) {
        iVar1 = FUN_00455960(iVar1);
        param_2[2] = iVar1;
        if (iVar1 != 0) {
          *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
        }
        goto LAB_00456cfd;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_00456cfd:
    iVar1 = param_2[2];
  }
LAB_00456d00:
  param_1[1] = iVar1;
  param_1[2] = 0;
  param_1[3] = param_3;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x24) == 0) {
      *(undefined2 *)(param_1 + 4) = 1;
    }
    param_1[2] = *(undefined4 *)(iVar1 + 0x18);
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  }
  return param_1;
}


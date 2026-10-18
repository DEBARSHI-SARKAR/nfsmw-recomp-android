/* speed.exe 00729a80 FUN_00729a80; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00729a80(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*param_2 == -0x7ffcbeb0) {
    *(int *)param_1 = param_1;
    *(int *)(param_1 + 4) = param_1;
    iVar1 = param_1 + 8;
    *(int *)iVar1 = iVar1;
    *(int *)(param_1 + 0xc) = iVar1;
    iVar1 = param_1 + 0x20;
    *(int *)iVar1 = iVar1;
    *(int *)(param_1 + 0x24) = iVar1;
    iVar1 = param_1 + 0x10;
    *(int *)iVar1 = iVar1;
    *(int *)(param_1 + 0x14) = iVar1;
    *(undefined4 *)(param_1 + 0x54) = 0;
    return 1;
  }
  if (*param_2 == 0x34158) {
    iVar1 = param_2[2];
    piVar2 = (int *)param_2[3];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    return 1;
  }
  return 0;
}


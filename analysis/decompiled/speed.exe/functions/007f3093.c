/* speed.exe 007f3093 FUN_007f3093; analysis pseudocode, not buildable source.
 * calls 00404db0 FUN_00404db0
 * calls 007f3044 FUN_007f3044
 */

undefined4 * __thiscall FUN_007f3093(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_008c2304;
  param_1[1] = param_2;
  piVar1 = (int *)FUN_007f3044(param_2 * 0x28 + 4);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_2;
    FUN_00404db0(piVar2,0x28,param_2,FUN_007f3069);
  }
  param_1[2] = piVar2;
  param_1[4] = piVar2;
  param_1[3] = piVar2;
  iVar3 = param_1[1] + -1;
  if (0 < iVar3) {
    iVar5 = 0;
    iVar6 = iVar3;
    do {
      iVar4 = param_1[2] + iVar5;
      iVar5 = iVar5 + 0x28;
      iVar6 = iVar6 + -1;
      *(int *)(iVar4 + 0x24) = iVar4 + 0x28;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1[2] + 0x24 + iVar3 * 0x28) = param_1[2];
  return param_1;
}


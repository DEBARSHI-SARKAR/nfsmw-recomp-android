/* speed.exe 00454360 FUN_00454360; analysis pseudocode, not buildable source.
 * calls 004532c0 FUN_004532c0
 */

int * __thiscall FUN_00454360(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  iVar1 = FUN_004532c0(param_2,0xffffffff);
  if (iVar1 == 0) {
    iVar1 = FUN_004532c0(*(int *)(*(int *)(param_2 + 0x14) + 8) + 0xc,0xffffffff);
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = iVar1;
    return param_1;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = iVar1;
  return param_1;
}


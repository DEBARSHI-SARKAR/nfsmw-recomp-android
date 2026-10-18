/* speed.exe 007aeb60 FUN_007aeb60; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_007aeb60(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    iVar1 = param_2[1];
    piVar2 = (int *)param_2[2];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    (**(code **)*param_2)(1);
    *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + -1;
    return 1;
  }
  return 0;
}


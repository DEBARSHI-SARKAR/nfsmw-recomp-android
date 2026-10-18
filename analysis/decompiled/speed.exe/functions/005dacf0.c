/* speed.exe 005dacf0 FUN_005dacf0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_005dacf0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  if (iVar1 == 3) {
    *param_2 = param_1[0xd];
    param_2[1] = param_1[0xe];
    param_2[2] = param_1[0xf];
    return 1;
  }
  if (iVar1 != 5) {
    return 0;
  }
  *param_2 = param_1[0x1a];
  param_2[1] = param_1[0x1b];
  param_2[2] = param_1[0x1c];
  return 1;
}


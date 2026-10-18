/* speed.exe 005e2970 FUN_005e2970; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_005e2970(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  if (iVar1 == 3) {
    *param_2 = param_1[10];
    param_2[1] = param_1[0xb];
    param_2[2] = param_1[0xc];
    return 1;
  }
  if (iVar1 != 5) {
    return 0;
  }
  *param_2 = param_1[0x16];
  param_2[1] = param_1[0x17];
  param_2[2] = param_1[0x18];
  return 1;
}


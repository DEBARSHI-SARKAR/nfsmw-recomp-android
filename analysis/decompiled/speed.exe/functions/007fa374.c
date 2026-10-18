/* speed.exe 007fa374 FUN_007fa374; analysis pseudocode, not buildable source.
 * calls 007f9db7 FUN_007f9db7
 * calls 007f9d09 FUN_007f9d09
 */

void __thiscall FUN_007fa374(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_007f9d09(0x14);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_007f9db7(param_2,param_3);
  }
  piVar3 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 8U);
  piVar1 = (int *)(param_1 + 0x2c);
  iVar2 = *piVar1;
  *piVar1 = (int)piVar3;
  *(int **)(iVar2 + 4) = piVar3;
  piVar3[1] = (int)piVar1;
  *piVar3 = iVar2;
  return;
}


/* speed.exe 00652d70 FUN_00652d70; analysis pseudocode, not buildable source.
 * calls 00652c80 FUN_00652c80
 */

void __thiscall FUN_00652d70(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 7) {
    param_2 = FUN_00652c80(param_2);
    piVar1 = param_1 + 3;
    param_1 = param_1 + 3;
    iVar2 = *piVar1;
  }
  return;
}


/* speed.exe 00652d40 FUN_00652d40; analysis pseudocode, not buildable source.
 * calls 00652ba0 FUN_00652ba0
 */

void __thiscall FUN_00652d40(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 7) {
    param_2 = FUN_00652ba0(param_2);
    piVar1 = param_1 + 3;
    param_1 = param_1 + 3;
    iVar2 = *piVar1;
  }
  return;
}


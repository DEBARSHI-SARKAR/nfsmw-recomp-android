/* speed.exe 00769900 FUN_00769900; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00769900(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (param_1[1] + 1) % param_1[2];
  param_1[1] = iVar2;
  if (*param_1 < param_1[2]) {
    *param_1 = *param_1 + 1;
  }
  piVar3 = param_1 + iVar2 * 0x10 + 4;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *param_2;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 1;
  }
  return;
}


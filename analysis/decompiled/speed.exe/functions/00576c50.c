/* speed.exe 00576c50 FUN_00576c50; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00576c50(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  do {
    if (*piVar2 == 0) {
      param_1 = param_1 + iVar1 * 3;
      *param_1 = param_2;
      param_1[1] = param_3;
      param_1[2] = 1;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 3;
  } while (iVar1 < 0x3f);
  return;
}


/* speed.exe 0045b900 FUN_0045b900; analysis pseudocode, not buildable source.
 * calls 0045b9c0 FUN_0045b9c0
 * calls 0045b960 FUN_0045b960
 * calls 0045ba40 FUN_0045ba40
 */

void __thiscall FUN_0045b900(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  piVar1 = param_4;
  if ((param_3 == (int *)**(int **)(param_1 + 4)) && (param_4 == *(int **)(param_1 + 4))) {
    FUN_0045b9c0();
    *param_2 = **(undefined4 **)(param_1 + 4);
    return;
  }
  while (param_3 != piVar1) {
    FUN_0045b960();
    FUN_0045ba40(&param_4,param_3);
  }
  *param_2 = param_3;
  return;
}


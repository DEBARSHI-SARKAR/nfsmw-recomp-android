/* speed.exe 007e8d50 FUN_007e8d50; analysis pseudocode, not buildable source.
 * calls 007e8ca0 FUN_007e8ca0
 */

int __thiscall FUN_007e8d50(int param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = FUN_007e8ca0();
    if (param_2 == iVar1) break;
    if (*(int *)(param_1 + 4) == 0) {
      return 0;
    }
    param_1 = param_1 + *(int *)(param_1 + 4);
  }
  return param_1;
}


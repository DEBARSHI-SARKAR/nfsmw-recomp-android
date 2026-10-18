/* speed.exe 007075c0 FUN_007075c0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_007075c0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0xc)) {
      return 0;
    }
    if (*(int *)(*piVar1 + 0x14) == param_2) break;
    piVar1 = piVar1 + 1;
  }
  return *piVar1;
}


/* speed.exe 004d9150 FUN_004d9150; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_004d9150(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0x20);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar2 = (int *)(**(code **)(*piVar1 + 4))();
    if ((*piVar2 >> 4 & 0xfffU) == param_2) break;
    piVar1 = (int *)piVar1[1];
  }
  return piVar1;
}


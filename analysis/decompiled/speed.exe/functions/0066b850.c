/* speed.exe 0066b850 FUN_0066b850; analysis pseudocode, not buildable source.
 */

int * FUN_0066b850(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_008f87a0;
  iVar1 = DAT_008f87a8;
  while( true ) {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    if (*piVar2 == param_1) break;
    iVar1 = piVar2[9];
    piVar2 = piVar2 + 7;
  }
  return piVar2;
}


/* speed.exe 004ba9b0 FUN_004ba9b0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_004ba9b0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  piVar1 = piVar2 + *(int *)(param_1 + 0xc) * 2;
  while( true ) {
    if (piVar2 == piVar1) {
      return 0x108;
    }
    if (*piVar2 == param_2) break;
    piVar2 = piVar2 + 2;
  }
  return piVar2[1];
}


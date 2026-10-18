/* speed.exe 0042e8d0 FUN_0042e8d0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0042e6c0 FUN_0042e6c0
 */

void __fastcall FUN_0042e8d0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)**(int **)(param_1 + 0x6c);
  if (piVar2 != *(int **)(param_1 + 0x6c)) {
    do {
      cVar1 = FUN_0042e6c0(piVar2 + 2);
      if (cVar1 == '\0') {
        piVar3 = (int *)*piVar2;
      }
      else {
        piVar3 = (int *)*piVar2;
        if (piVar2 != *(int **)(param_1 + 0x6c)) {
          *(int *)piVar2[1] = *piVar2;
          *(int *)(*piVar2 + 4) = piVar2[1];
          FUN_005d0370(piVar2,0x44,0);
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
        }
      }
      piVar2 = piVar3;
    } while (piVar3 != *(int **)(param_1 + 0x6c));
  }
  return;
}


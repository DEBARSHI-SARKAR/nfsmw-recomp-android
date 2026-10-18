/* speed.exe 005f6a30 FUN_005f6a30; analysis pseudocode, not buildable source.
 * calls 005db170 FUN_005db170
 * calls 00452430 FUN_00452430
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005ed690 FUN_005ed690
 * calls 00654af0 FUN_00654af0
 * calls 005f5b50 FUN_005f5b50
 * calls 005db090 FUN_005db090
 * calls 005db250 FUN_005db250
 */

void __thiscall FUN_005f6a30(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  bool bVar4;
  
  if (param_2 != 0) {
    piVar1 = *(int **)(param_1 + 0x80);
    piVar2 = *(int **)(param_1 + 0x7c);
    bVar4 = piVar2 == piVar1;
    if (!bVar4) {
      do {
        if (*piVar2 == param_2) break;
        piVar2 = piVar2 + 1;
      } while (piVar2 != piVar1);
      bVar4 = piVar2 == piVar1;
    }
    if (param_3 == 2) {
      FUN_005ed690();
      pcVar3 = (char *)FUN_00454810();
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)FUN_006269b0();
      }
      if (*pcVar3 != '\0') {
        FUN_00452430();
        FUN_005db170();
        FUN_00654af0();
      }
    }
    if (param_3 == 1) {
      if (bVar4) {
        FUN_005f5b50();
        FUN_00452430();
        FUN_005db090();
        FUN_00654af0();
      }
      FUN_00452430();
      FUN_005db250();
      FUN_00654af0();
    }
  }
  return;
}


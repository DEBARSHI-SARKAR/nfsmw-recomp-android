/* speed.exe 006b1650 FUN_006b1650; analysis pseudocode, not buildable source.
 * calls 006a68f0 FUN_006a68f0
 */

void __fastcall FUN_006b1650(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + -8;
  }
  piVar1 = DAT_0092fe54 + DAT_0092fe5c;
  piVar3 = DAT_0092fe54;
  do {
    piVar4 = DAT_0092fe54;
    if (piVar3 == piVar1) {
LAB_006b16aa:
      if (piVar3 != piVar4 + DAT_0092fe5c) {
        FUN_006a68f0(piVar3,piVar4 + DAT_0092fe5c);
      }
      return;
    }
    if (*piVar3 == param_1) {
      piVar2 = piVar3;
      if (piVar3 != piVar1) {
        while (piVar2 = piVar2 + 1, piVar2 != piVar1) {
          if (*piVar2 != param_1) {
            *piVar3 = *piVar2;
            piVar3 = piVar3 + 1;
            piVar4 = DAT_0092fe54;
          }
        }
      }
      goto LAB_006b16aa;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


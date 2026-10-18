/* speed.exe 006b1450 FUN_006b1450; analysis pseudocode, not buildable source.
 * calls 006a66b0 FUN_006a66b0
 */

void __fastcall FUN_006b1450(int param_1)

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
  piVar1 = DAT_0092d36c + DAT_0092d374;
  piVar3 = DAT_0092d36c;
  do {
    piVar4 = DAT_0092d36c;
    if (piVar3 == piVar1) {
LAB_006b14aa:
      if (piVar3 != piVar4 + DAT_0092d374) {
        FUN_006a66b0(piVar3,piVar4 + DAT_0092d374);
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
            piVar4 = DAT_0092d36c;
          }
        }
      }
      goto LAB_006b14aa;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


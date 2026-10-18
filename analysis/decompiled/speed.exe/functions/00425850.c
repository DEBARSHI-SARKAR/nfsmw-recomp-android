/* speed.exe 00425850 FUN_00425850; analysis pseudocode, not buildable source.
 * calls 0041df60 FUN_0041df60
 */

void __fastcall FUN_00425850(int param_1)

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
  piVar1 = DAT_0092fd5c + DAT_0092fd64;
  piVar3 = DAT_0092fd5c;
  do {
    piVar4 = DAT_0092fd5c;
    if (piVar3 == piVar1) {
LAB_004258aa:
      if (piVar3 != piVar4 + DAT_0092fd64) {
        FUN_0041df60(piVar3,piVar4 + DAT_0092fd64);
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
            piVar4 = DAT_0092fd5c;
          }
        }
      }
      goto LAB_004258aa;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


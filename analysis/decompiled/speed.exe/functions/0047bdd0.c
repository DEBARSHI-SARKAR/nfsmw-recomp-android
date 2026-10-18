/* speed.exe 0047bdd0 FUN_0047bdd0; analysis pseudocode, not buildable source.
 * calls 004794b0 FUN_004794b0
 */

void __fastcall FUN_0047bdd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + -4;
  }
  piVar1 = DAT_0092fe24 + DAT_0092fe2c;
  piVar3 = DAT_0092fe24;
  do {
    piVar4 = DAT_0092fe24;
    if (piVar3 == piVar1) {
LAB_0047be2a:
      if (piVar3 != piVar4 + DAT_0092fe2c) {
        FUN_004794b0(piVar3,piVar4 + DAT_0092fe2c);
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
            piVar4 = DAT_0092fe24;
          }
        }
      }
      goto LAB_0047be2a;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


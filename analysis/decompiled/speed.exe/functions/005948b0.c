/* speed.exe 005948b0 FUN_005948b0; analysis pseudocode, not buildable source.
 * calls 0058b9f0 FUN_0058b9f0
 */

void __fastcall FUN_005948b0(int param_1)

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
  piVar1 = DAT_0092fd8c + DAT_0092fd94;
  piVar3 = DAT_0092fd8c;
  do {
    piVar4 = DAT_0092fd8c;
    if (piVar3 == piVar1) {
LAB_0059490a:
      if (piVar3 != piVar4 + DAT_0092fd94) {
        FUN_0058b9f0(piVar3,piVar4 + DAT_0092fd94);
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
            piVar4 = DAT_0092fd8c;
          }
        }
      }
      goto LAB_0059490a;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


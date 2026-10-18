/* speed.exe 006b13d0 FUN_006b13d0; analysis pseudocode, not buildable source.
 * calls 006a6620 FUN_006a6620
 */

void __fastcall FUN_006b13d0(int param_1)

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
  piVar1 = DAT_0092d90c + DAT_0092d914;
  piVar3 = DAT_0092d90c;
  do {
    piVar4 = DAT_0092d90c;
    if (piVar3 == piVar1) {
LAB_006b142a:
      if (piVar3 != piVar4 + DAT_0092d914) {
        FUN_006a6620(piVar3,piVar4 + DAT_0092d914);
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
            piVar4 = DAT_0092d90c;
          }
        }
      }
      goto LAB_006b142a;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


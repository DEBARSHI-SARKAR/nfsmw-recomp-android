/* speed.exe 004258d0 FUN_004258d0; analysis pseudocode, not buildable source.
 * calls 0041dff0 FUN_0041dff0
 */

void __fastcall FUN_004258d0(int param_1)

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
  piVar1 = DAT_0092fda4 + DAT_0092fdac;
  piVar3 = DAT_0092fda4;
  do {
    piVar4 = DAT_0092fda4;
    if (piVar3 == piVar1) {
LAB_0042592a:
      if (piVar3 != piVar4 + DAT_0092fdac) {
        FUN_0041dff0(piVar3,piVar4 + DAT_0092fdac);
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
            piVar4 = DAT_0092fda4;
          }
        }
      }
      goto LAB_0042592a;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


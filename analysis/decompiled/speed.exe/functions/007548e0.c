/* speed.exe 007548e0 FUN_007548e0; analysis pseudocode, not buildable source.
 * calls 0074cec0 FUN_0074cec0
 */

void __fastcall FUN_007548e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + -0x11;
  }
  piVar1 = DAT_009b37cc + DAT_009b37d4;
  piVar3 = DAT_009b37cc;
  do {
    piVar4 = DAT_009b37cc;
    if (piVar3 == piVar1) {
LAB_0075493a:
      if (piVar3 != piVar4 + DAT_009b37d4) {
        FUN_0074cec0(piVar3,piVar4 + DAT_009b37d4);
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
            piVar4 = DAT_009b37cc;
          }
        }
      }
      goto LAB_0075493a;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


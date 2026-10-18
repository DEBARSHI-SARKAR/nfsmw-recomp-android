/* speed.exe 004c9750 FUN_004c9750; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004c9750(int param_1)

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
  piVar1 = DAT_00913ed4 + DAT_00913edc;
  piVar3 = DAT_00913ed4;
  do {
    piVar4 = DAT_00913ed4;
    if (piVar3 == piVar1) {
LAB_004c707a:
      if (piVar3 != piVar4 + DAT_00913edc) {
        FUN_004c1690(piVar3,piVar4 + DAT_00913edc);
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
            piVar4 = DAT_00913ed4;
          }
        }
      }
      goto LAB_004c707a;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


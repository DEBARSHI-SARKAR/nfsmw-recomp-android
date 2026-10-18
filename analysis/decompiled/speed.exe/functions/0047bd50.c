/* speed.exe 0047bd50 FUN_0047bd50; analysis pseudocode, not buildable source.
 * calls 00479420 FUN_00479420
 */

void __fastcall FUN_0047bd50(int param_1)

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
  piVar1 = DAT_00911318 + DAT_00911320;
  piVar3 = DAT_00911318;
  do {
    piVar4 = DAT_00911318;
    if (piVar3 == piVar1) {
LAB_0047bdaa:
      if (piVar3 != piVar4 + DAT_00911320) {
        FUN_00479420(piVar3,piVar4 + DAT_00911320);
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
            piVar4 = DAT_00911318;
          }
        }
      }
      goto LAB_0047bdaa;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


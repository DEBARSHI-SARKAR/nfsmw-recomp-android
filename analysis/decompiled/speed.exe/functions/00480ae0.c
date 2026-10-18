/* speed.exe 00480ae0 FUN_00480ae0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00480ae0(int param_1)

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
  piVar1 = DAT_00911300 + DAT_00911308;
  piVar3 = DAT_00911300;
  do {
    piVar4 = DAT_00911300;
    if (piVar3 == piVar1) {
LAB_0047bd2a:
      if (piVar3 != piVar4 + DAT_00911308) {
        FUN_00479390(piVar3,piVar4 + DAT_00911308);
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
            piVar4 = DAT_00911300;
          }
        }
      }
      goto LAB_0047bd2a;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


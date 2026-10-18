/* speed.exe 006b15d0 FUN_006b15d0; analysis pseudocode, not buildable source.
 * calls 006a6860 FUN_006a6860
 */

void __fastcall FUN_006b15d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + -0xc;
  }
  piVar1 = DAT_0092d93c + DAT_0092d944;
  piVar3 = DAT_0092d93c;
  do {
    piVar4 = DAT_0092d93c;
    if (piVar3 == piVar1) {
LAB_006b162a:
      if (piVar3 != piVar4 + DAT_0092d944) {
        FUN_006a6860(piVar3,piVar4 + DAT_0092d944);
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
            piVar4 = DAT_0092d93c;
          }
        }
      }
      goto LAB_006b162a;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


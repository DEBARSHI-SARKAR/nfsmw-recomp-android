/* speed.exe 0067ae10 FUN_0067ae10; analysis pseudocode, not buildable source.
 * calls 00676770 FUN_00676770
 */

void __fastcall FUN_0067ae10(int param_1)

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
  piVar1 = DAT_0092c8fc + DAT_0092c904;
  piVar3 = DAT_0092c8fc;
  do {
    piVar4 = DAT_0092c8fc;
    if (piVar3 == piVar1) {
LAB_0067ae6a:
      if (piVar3 != piVar4 + DAT_0092c904) {
        FUN_00676770(piVar3,piVar4 + DAT_0092c904);
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
            piVar4 = DAT_0092c8fc;
          }
        }
      }
      goto LAB_0067ae6a;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


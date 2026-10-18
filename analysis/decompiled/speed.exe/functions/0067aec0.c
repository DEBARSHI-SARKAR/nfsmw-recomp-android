/* speed.exe 0067aec0 FUN_0067aec0; analysis pseudocode, not buildable source.
 * calls 00676800 FUN_00676800
 */

void __fastcall FUN_0067aec0(int param_1)

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
  piVar1 = DAT_0092ca8c + DAT_0092ca94;
  piVar3 = DAT_0092ca8c;
  do {
    piVar4 = DAT_0092ca8c;
    if (piVar3 == piVar1) {
LAB_0067af1a:
      if (piVar3 != piVar4 + DAT_0092ca94) {
        FUN_00676800(piVar3,piVar4 + DAT_0092ca94);
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
            piVar4 = DAT_0092ca8c;
          }
        }
      }
      goto LAB_0067af1a;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


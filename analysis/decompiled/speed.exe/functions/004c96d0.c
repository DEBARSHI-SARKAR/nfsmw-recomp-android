/* speed.exe 004c96d0 FUN_004c96d0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004c96d0(int param_1)

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
  piVar1 = DAT_00913e74 + DAT_00913e7c;
  piVar3 = DAT_00913e74;
  do {
    piVar4 = DAT_00913e74;
    if (piVar3 == piVar1) {
LAB_004c6ffa:
      if (piVar3 != piVar4 + DAT_00913e7c) {
        FUN_004c1600(piVar3,piVar4 + DAT_00913e7c);
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
            piVar4 = DAT_00913e74;
          }
        }
      }
      goto LAB_004c6ffa;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


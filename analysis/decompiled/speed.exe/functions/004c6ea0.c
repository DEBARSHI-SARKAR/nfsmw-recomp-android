/* speed.exe 004c6ea0 FUN_004c6ea0; analysis pseudocode, not buildable source.
 * calls 004c14e0 FUN_004c14e0
 */

void __fastcall FUN_004c6ea0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = DAT_00913db4 + DAT_00913dbc;
  piVar3 = DAT_00913db4;
  do {
    piVar4 = DAT_00913db4;
    if (piVar3 == piVar1) {
LAB_004c6eec:
      if (piVar3 != piVar4 + DAT_00913dbc) {
        FUN_004c14e0(piVar3,piVar4 + DAT_00913dbc);
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
            piVar4 = DAT_00913db4;
          }
        }
      }
      goto LAB_004c6eec;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


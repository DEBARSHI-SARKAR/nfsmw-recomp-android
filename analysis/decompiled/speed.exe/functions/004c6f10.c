/* speed.exe 004c6f10 FUN_004c6f10; analysis pseudocode, not buildable source.
 * calls 004c1570 FUN_004c1570
 */

void __fastcall FUN_004c6f10(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = DAT_00913e14 + DAT_00913e1c;
  piVar3 = DAT_00913e14;
  do {
    piVar4 = DAT_00913e14;
    if (piVar3 == piVar1) {
LAB_004c6f5c:
      if (piVar3 != piVar4 + DAT_00913e1c) {
        FUN_004c1570(piVar3,piVar4 + DAT_00913e1c);
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
            piVar4 = DAT_00913e14;
          }
        }
      }
      goto LAB_004c6f5c;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


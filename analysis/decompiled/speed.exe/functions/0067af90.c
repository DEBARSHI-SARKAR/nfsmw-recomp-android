/* speed.exe 0067af90 FUN_0067af90; analysis pseudocode, not buildable source.
 * calls 00676890 FUN_00676890
 */

void __fastcall FUN_0067af90(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + -0xd0;
  }
  piVar1 = DAT_009357bc + DAT_009357c4;
  piVar3 = DAT_009357bc;
  do {
    piVar4 = DAT_009357bc;
    if (piVar3 == piVar1) {
LAB_0067afea:
      if (piVar3 != piVar4 + DAT_009357c4) {
        FUN_00676890(piVar3,piVar4 + DAT_009357c4);
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
            piVar4 = DAT_009357bc;
          }
        }
      }
      goto LAB_0067afea;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


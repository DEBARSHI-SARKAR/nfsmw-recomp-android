/* speed.exe 0077a3b0 FUN_0077a3b0; analysis pseudocode, not buildable source.
 * calls 007726a0 FUN_007726a0
 */

void __fastcall FUN_0077a3b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = DAT_009b3c84 + DAT_009b3c8c;
  piVar3 = DAT_009b3c84;
  do {
    piVar4 = DAT_009b3c84;
    if (piVar3 == piVar1) {
LAB_0077a3fc:
      if (piVar3 != piVar4 + DAT_009b3c8c) {
        FUN_007726a0(piVar3,piVar4 + DAT_009b3c8c);
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
            piVar4 = DAT_009b3c84;
          }
        }
      }
      goto LAB_0077a3fc;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


/* speed.exe 0063ffd0 FUN_0063ffd0; analysis pseudocode, not buildable source.
 * calls 00637770 FUN_00637770
 */

void __fastcall FUN_0063ffd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = DAT_00920e4c + DAT_00920e54;
  piVar3 = DAT_00920e4c;
  do {
    piVar4 = DAT_00920e4c;
    if (piVar3 == piVar1) {
LAB_0064001c:
      if (piVar3 != piVar4 + DAT_00920e54) {
        FUN_00637770(piVar3,piVar4 + DAT_00920e54);
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
            piVar4 = DAT_00920e4c;
          }
        }
      }
      goto LAB_0064001c;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


/* speed.exe 00423860 FUN_00423860; analysis pseudocode, not buildable source.
 * calls 004180f0 FUN_004180f0
 * calls 00409e60 FUN_00409e60
 */

void __thiscall FUN_00423860(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    FUN_00409e60();
    piVar1 = DAT_0090d664 + DAT_0090d66c;
    piVar2 = DAT_0090d664;
    if (DAT_0090d664 != piVar1) {
      do {
        if (*piVar2 == param_2) break;
        piVar2 = piVar2 + 1;
      } while (piVar2 != piVar1);
      if (piVar2 != piVar1) {
        *(int *)(param_1 + 0x1c) = param_2;
        *(undefined1 *)(param_1 + 0x2c) = 1;
        FUN_004180f0();
      }
    }
  }
  return;
}


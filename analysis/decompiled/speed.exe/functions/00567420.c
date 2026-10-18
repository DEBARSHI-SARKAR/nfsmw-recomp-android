/* speed.exe 00567420 FUN_00567420; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 00658a00 FUN_00658a00
 */

void __fastcall FUN_00567420(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    piVar1 = (int *)(param_1 + 0x14c);
    do {
      if (*piVar1 != 0) {
        FUN_00658a00(*piVar1,piVar1[1],"MiniMap Chop");
        FUN_004655f0(*piVar1);
        *piVar1 = 0;
        piVar1[1] = 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return;
}


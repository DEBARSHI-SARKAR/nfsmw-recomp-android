/* speed.exe 00672b90 FUN_00672b90; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00672b90(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0xc)) {
    piVar1 = (int *)(param_1 + 0x48);
    do {
      if (*piVar1 != 0) {
        *(int **)(*piVar1 + 0xf0) = piVar1 + -0xe;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x10;
    } while (iVar2 < *(short *)(param_1 + 0xc));
  }
  return;
}


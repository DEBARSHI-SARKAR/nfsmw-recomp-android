/* speed.exe 006021b0 FUN_006021b0; analysis pseudocode, not buildable source.
 * calls 006007b0 FUN_006007b0
 * calls 005ff2e0 FUN_005ff2e0
 */

void __fastcall FUN_006021b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(DAT_0091e000 + 0x1964) != 1) {
    iVar1 = *(int *)(param_1 + 0x1958);
    if (0 < iVar1) {
      do {
        FUN_006007b0();
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_005ff2e0(2,0);
  }
  return;
}


/* speed.exe 00464080 FUN_00464080; analysis pseudocode, not buildable source.
 * calls 00463e50 FUN_00463e50
 */

int FUN_00464080(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 & 0xf;
  if ((&DAT_0090df10)[uVar1] == 0) {
    if ((&DAT_0090de50)[uVar1 * 3] != 0) {
                    /* WARNING: Could not emulate address calculation at 0x004640ab */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)((&DAT_0090de50)[uVar1 * 3] + 0x1c))();
      return iVar2;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0x6300000;
    }
    iVar2 = FUN_00463e50();
    uVar1 = (int)param_1 >> 6 & 0x1ffc;
    if (uVar1 == 0) {
      uVar1 = 0x10;
    }
    if (uVar1 < 0x80) {
      uVar1 = 0x80;
    }
    iVar2 = (iVar2 + -0x5c) - uVar1;
    if (-1 < iVar2) {
      return iVar2;
    }
  }
  return 0;
}


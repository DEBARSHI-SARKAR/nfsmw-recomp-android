/* speed.exe 00405ed0 FUN_00405ed0; analysis pseudocode, not buildable source.
 */

int FUN_00405ed0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_00915f84 + param_1 * 0x40;
  if (DAT_00915f88 <= uVar1) {
    DAT_00915f94 = 1;
    DAT_00915f98 = DAT_00915f98 + param_1 * 0x40;
    return 0;
  }
  iVar2 = DAT_00915f84;
  DAT_00915f84 = uVar1;
  return iVar2;
}


/* speed.exe 00739ff0 FUN_00739ff0; analysis pseudocode, not buildable source.
 */

undefined * FUN_00739ff0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((-1 < param_1) && (param_1 < 0x57)) {
    if ((&DAT_009053e0)[param_1 * 3] == param_1) {
      return (&PTR_DAT_009053e4)[param_1 * 3];
    }
    iVar2 = 0;
    piVar1 = &DAT_009053e0;
    do {
      if (*piVar1 == param_1) {
        return (&PTR_DAT_009053e4)[iVar2 * 3];
      }
      piVar1 = piVar1 + 3;
      iVar2 = iVar2 + 1;
    } while ((int)piVar1 < 0x9057f4);
  }
  return (undefined *)0x0;
}


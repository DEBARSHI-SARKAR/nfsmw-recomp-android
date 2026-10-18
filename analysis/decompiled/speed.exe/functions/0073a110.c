/* speed.exe 0073a110 FUN_0073a110; analysis pseudocode, not buildable source.
 */

undefined * FUN_0073a110(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 0x8b)) {
    if ((&DAT_009044d8)[param_1 * 2] == param_1) {
      return (&PTR_DAT_009044dc)[param_1 * 2];
    }
    iVar1 = 0;
    do {
      if ((&DAT_009044d8)[iVar1 * 2] == param_1) {
        return (&PTR_DAT_009044dc)[iVar1 * 2];
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x8b);
  }
  return (undefined *)0x0;
}


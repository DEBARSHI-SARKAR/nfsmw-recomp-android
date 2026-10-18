/* speed.exe 0044b280 FUN_0044b280; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

undefined4 * FUN_0044b280(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0090db00;
  if ((undefined4 **)DAT_0090db00 != &DAT_0090db00) {
    do {
      if ((puVar2[4] != 0) && (iVar1 = FUN_00460bf0(puVar2[4]), iVar1 == param_1)) {
        return puVar2;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while ((undefined4 **)puVar2 != &DAT_0090db00);
  }
  return (undefined4 *)0x0;
}


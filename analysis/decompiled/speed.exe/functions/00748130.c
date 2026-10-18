/* speed.exe 00748130 FUN_00748130; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 */

undefined4 * FUN_00748130(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_009b2bf4;
  if ((undefined4 **)DAT_009b2bf4 != &DAT_009b2bf4) {
    do {
      iVar1 = FUN_005af1c0(puVar2 + 10);
      if (param_1 == iVar1) {
        return puVar2;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while ((undefined4 **)puVar2 != &DAT_009b2bf4);
  }
  return (undefined4 *)0x0;
}


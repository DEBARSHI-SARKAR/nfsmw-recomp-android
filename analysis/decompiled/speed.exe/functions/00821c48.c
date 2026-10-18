/* speed.exe 00821c48 FUN_00821c48; analysis pseudocode, not buildable source.
 * calls 0081c131 FUN_0081c131
 */

undefined4 * FUN_00821c48(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (-1 < (int)param_1) {
    iVar1 = FUN_0081c131(param_1 & 0xff);
    if (iVar1 != 0) {
      for (puVar2 = *(undefined4 **)(iVar1 + 0x120);
          (puVar2 != (undefined4 *)0x0 && (puVar2[3] != param_1)); puVar2 = (undefined4 *)*puVar2) {
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}


/* speed.exe 00728c60 FUN_00728c60; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_00728c60(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_009ab24c;
  if ((undefined4 **)DAT_009ab24c != &DAT_009ab24c) {
    do {
      if (puVar1[2] == param_1) {
        return puVar1;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while ((undefined4 **)puVar1 != &DAT_009ab24c);
  }
  return (undefined4 *)0x0;
}


/* speed.exe 00727280 FUN_00727280; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_00727280(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = DAT_009aa494;
  if ((undefined4 **)DAT_009aa494 != &DAT_009aa494) {
    do {
      if ((puVar1[2] == param_2) && ((puVar1[9] == 0 || (puVar1[9] == param_1)))) {
        if (iVar2 == param_3) {
          return puVar1;
        }
        iVar2 = iVar2 + 1;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while ((undefined4 **)puVar1 != &DAT_009aa494);
  }
  return (undefined4 *)0x0;
}


/* speed.exe 00727170 FUN_00727170; analysis pseudocode, not buildable source.
 */

int FUN_00727170(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  puVar2 = DAT_009aa494;
  if ((undefined4 **)DAT_009aa494 != &DAT_009aa494) {
    do {
      if ((puVar2[2] == param_2) && ((param_1 == 0 || (puVar2[9] == param_1)))) {
        iVar1 = iVar1 + 1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while ((undefined4 **)puVar2 != &DAT_009aa494);
  }
  return iVar1;
}


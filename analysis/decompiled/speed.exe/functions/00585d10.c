/* speed.exe 00585d10 FUN_00585d10; analysis pseudocode, not buildable source.
 * calls 005035a0 FUN_005035a0
 */

void FUN_00585d10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0091d904;
  if ((undefined4 **)DAT_0091d904 != &DAT_0091d904) {
    do {
      iVar1 = FUN_005035a0(puVar2[2],puVar2[6],param_1,param_2);
      if (iVar1 != puVar2[2]) {
        puVar2[2] = iVar1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while ((undefined4 **)puVar2 != &DAT_0091d904);
  }
  return;
}


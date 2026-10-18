/* speed.exe 00744d80 FUN_00744d80; analysis pseudocode, not buildable source.
 */

void FUN_00744d80(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_009b37cc;
  if (DAT_009b37cc != DAT_009b37cc + DAT_009b37d4) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x10))(param_1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != DAT_009b37cc + DAT_009b37d4);
  }
  return;
}


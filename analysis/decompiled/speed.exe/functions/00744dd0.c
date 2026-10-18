/* speed.exe 00744dd0 FUN_00744dd0; analysis pseudocode, not buildable source.
 */

void FUN_00744dd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_009b37cc;
  if (DAT_009b37cc != DAT_009b37cc + DAT_009b37d4) {
    do {
      (**(code **)(*(int *)*puVar1 + 0xc))(param_1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 != DAT_009b37cc + DAT_009b37d4);
  }
  return;
}


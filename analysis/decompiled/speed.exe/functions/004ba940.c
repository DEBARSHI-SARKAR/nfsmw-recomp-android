/* speed.exe 004ba940 FUN_004ba940; analysis pseudocode, not buildable source.
 * calls 004b15e0 FUN_004b15e0
 * calls 004b1a10 FUN_004b1a10
 */

void FUN_004ba940(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00913e74;
  if (DAT_00913e74 != DAT_00913e74 + DAT_00913e7c * 4) {
    do {
      FUN_004b15e0(param_1);
      iVar1 = iVar1 + 4;
    } while (iVar1 != DAT_00913e74 + DAT_00913e7c * 4);
  }
  iVar1 = DAT_00913ed4;
  if (DAT_00913ed4 != DAT_00913ed4 + DAT_00913edc * 4) {
    do {
      FUN_004b1a10(param_1);
      iVar1 = iVar1 + 4;
    } while (iVar1 != DAT_00913ed4 + DAT_00913edc * 4);
  }
  return;
}


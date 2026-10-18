/* speed.exe 0065f640 FUN_0065f640; analysis pseudocode, not buildable source.
 * calls 007ec59c FUN_007ec59c
 * calls 007ec298 FUN_007ec298
 * calls 0065e930 FUN_0065e930
 */

void FUN_0065f640(int param_1)

{
  int iVar1;
  
  while( true ) {
    if (DAT_00925928 != 0) {
      FUN_007ec59c();
      FUN_0065e930();
    }
    iVar1 = DAT_00925928;
    if (param_1 != 0) {
      iVar1 = *(int *)(param_1 + 0x20);
    }
    if (iVar1 == 0) break;
    FUN_007ec298(8);
  }
  return;
}


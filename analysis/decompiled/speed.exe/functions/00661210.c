/* speed.exe 00661210 FUN_00661210; analysis pseudocode, not buildable source.
 * calls 007ec59c FUN_007ec59c
 * calls 007ec298 FUN_007ec298
 * calls 0065e930 FUN_0065e930
 * calls 007ec1b2 FUN_007ec1b2
 * calls 00466330 FUN_00466330
 * calls 0065d860 FUN_0065d860
 */

void FUN_00661210(void)

{
  if (DAT_00925914 == 0) {
    return;
  }
  while( true ) {
    if (DAT_00925928 != 0) {
      FUN_007ec59c();
      FUN_0065e930();
    }
    if (DAT_00925928 == 0) break;
    FUN_007ec298(8);
  }
  FUN_0065d860(1);
  FUN_00466330(DAT_00925914);
  DAT_00925914 = 0;
  FUN_007ec1b2();
  return;
}


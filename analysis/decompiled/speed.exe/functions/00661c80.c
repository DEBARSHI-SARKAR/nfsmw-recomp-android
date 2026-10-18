/* speed.exe 00661c80 FUN_00661c80; analysis pseudocode, not buildable source.
 * calls 007ec298 FUN_007ec298
 * calls 00661aa0 FUN_00661aa0
 * calls 00660d90 FUN_00660d90
 */

void FUN_00661c80(void)

{
  while( true ) {
    FUN_00660d90();
    FUN_00661aa0();
    if ((DAT_0092590c == 0) && ((undefined4 **)DAT_00925b1c == &DAT_00925b1c)) break;
    FUN_007ec298(8);
  }
  return;
}


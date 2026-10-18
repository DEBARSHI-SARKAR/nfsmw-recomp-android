/* speed.exe 0056ad30 FUN_0056ad30; analysis pseudocode, not buildable source.
 * calls 007a2940 FUN_007a2940
 * calls 004aefe0 FUN_004aefe0
 */

void FUN_0056ad30(void)

{
  if (DAT_0091cf48 != (undefined4 *)0x0) {
    (**(code **)*DAT_0091cf48)(1);
    DAT_0091cf48 = (undefined4 *)0x0;
    FUN_007a2940();
  }
  FUN_004aefe0(0xffffffff);
  return;
}


/* speed.exe 006ff2f0 FUN_006ff2f0; analysis pseudocode, not buildable source.
 * calls 004b21b0 FUN_004b21b0
 */

undefined4 FUN_006ff2f0(int param_1)

{
  undefined4 uVar1;
  
  if (((&DAT_0099222c)[param_1] != 0) && (*(int *)((&DAT_0099222c)[param_1] + 0x2c) != 0)) {
    uVar1 = FUN_004b21b0();
    return uVar1;
  }
  return 0;
}


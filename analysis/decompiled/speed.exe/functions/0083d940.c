/* speed.exe 0083d940 FUN_0083d940; analysis pseudocode, not buildable source.
 * calls 0083d360 FUN_0083d360
 * calls 0083d010 FUN_0083d010
 */

void FUN_0083d940(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_0083d360();
    if (param_2 != 0) {
      FUN_0083d010(param_1 + 0x2c,PTR_s__CNCL__0090d328);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  return;
}


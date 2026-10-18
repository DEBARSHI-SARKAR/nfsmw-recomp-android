/* speed.exe 007f1889 FUN_007f1889; analysis pseudocode, not buildable source.
 * calls 007f18ee FUN_007f18ee
 * calls 007f1873 FUN_007f1873
 * calls 007f1b3f FUN_007f1b3f
 */

void FUN_007f1889(undefined4 *param_1)

{
  int iVar1;
  
  if (DAT_009bb410 == 0) {
    FUN_007f18ee(*param_1);
    iVar1 = FUN_007f1873(0xbc);
    if (iVar1 == 0) {
      DAT_009bb410 = 0;
    }
    else {
      DAT_009bb410 = FUN_007f1b3f(param_1);
    }
  }
  return;
}


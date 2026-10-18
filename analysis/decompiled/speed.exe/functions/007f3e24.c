/* speed.exe 007f3e24 FUN_007f3e24; analysis pseudocode, not buildable source.
 * calls 007f3fa4 FUN_007f3fa4
 * calls 007f3b06 FUN_007f3b06
 * calls 007f3b64 FUN_007f3b64
 */

void FUN_007f3e24(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_007f3fa4(*param_1);
  if (DAT_009bb424 == 0) {
    iVar1 = FUN_007f3b06(4);
    if (iVar1 == 0) {
      DAT_009bb424 = 0;
    }
    else {
      DAT_009bb424 = FUN_007f3b64(param_1,param_2,param_3);
    }
  }
  return;
}


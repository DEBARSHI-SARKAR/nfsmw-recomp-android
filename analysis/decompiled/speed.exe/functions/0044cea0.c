/* speed.exe 0044cea0 FUN_0044cea0; analysis pseudocode, not buildable source.
 * calls 0044ac30 FUN_0044ac30
 */

undefined4 FUN_0044cea0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0090da10 == '\0') {
    iVar1 = FUN_0044ac30(param_1);
    if (iVar1 != 0) {
      DAT_0090da08._2_1_ = 0;
      return 1;
    }
  }
  return 0;
}


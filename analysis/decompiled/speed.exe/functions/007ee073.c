/* speed.exe 007ee073 FUN_007ee073; analysis pseudocode, not buildable source.
 * calls 007ed545 FUN_007ed545
 * calls 007edd78 FUN_007edd78
 * calls 007ed14a FUN_007ed14a
 * calls 007edca5 FUN_007edca5
 */

bool FUN_007ee073(undefined4 param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  FUN_007edca5(param_1);
  iVar1 = FUN_007edd78(param_1,param_2 | 0x20001);
  if (iVar1 == -1) {
    *param_3 = 0;
    param_3[1] = 0;
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    FUN_007ed14a(iVar1,param_3,param_4);
    FUN_007ed545();
  }
  return iVar1 != -1;
}


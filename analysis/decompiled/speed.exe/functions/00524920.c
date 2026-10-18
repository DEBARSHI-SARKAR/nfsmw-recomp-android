/* speed.exe 00524920 FUN_00524920; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 00516af0 FUN_00516af0
 */

void FUN_00524920(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  
  if ((((param_1 != 0) && (iVar1 = FUN_00516af0(param_1), iVar1 != 0)) &&
      (iVar1 = FUN_005b8550(param_2), iVar1 != 0)) &&
     ((iVar1 = FUN_005b1360(param_3), iVar1 != 0 && (FUN_005b8400(iVar1,0), param_4 != '\0')))) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return;
}


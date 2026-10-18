/* speed.exe 007921d0 FUN_007921d0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0078b090 FUN_0078b090
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007921d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_007c4b80();
  uVar1 = FUN_007c4b80(param_3);
  FUN_0078b090(*(undefined4 *)(DAT_009b4218 + 0x9c),param_2,uVar1,param_3);
  return;
}


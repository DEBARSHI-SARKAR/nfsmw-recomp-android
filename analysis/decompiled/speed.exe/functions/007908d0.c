/* speed.exe 007908d0 FUN_007908d0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083e3b0 FUN_0083e3b0
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

undefined4 __thiscall FUN_007908d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  uVar1 = FUN_0083e3b0(*(undefined4 *)(param_1 + 0xc),param_2);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar1;
}


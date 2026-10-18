/* speed.exe 00793850 FUN_00793850; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls 007907d0 FUN_007907d0
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

undefined4 FUN_00793850(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  uVar1 = FUN_007907d0(param_1);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar1;
}


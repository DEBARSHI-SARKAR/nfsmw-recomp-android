/* speed.exe 0079c3d0 FUN_0079c3d0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls 0079bd50 FUN_0079bd50
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 FUN_0079c3d0(void)

{
  undefined4 uVar1;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  uVar1 = FUN_0079bd50();
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar1;
}


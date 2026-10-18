/* speed.exe 00796280 FUN_00796280; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00794f80 FUN_00794f80
 * calls 0083e2e0 FUN_0083e2e0
 * calls 007ec1bd FUN_007ec1bd
 * calls 00844d40 FUN_00844d40
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall FUN_00796280(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  iVar1 = FUN_00794f80(0x17,param_2);
  uVar2 = FUN_00844d40(*(undefined4 *)(iVar1 + 0x38));
  uVar2 = FUN_0083e2e0(*(undefined4 *)(param_1 + 0xc),uVar2);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar2;
}


/* speed.exe 0079df40 FUN_0079df40; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00794f80 FUN_00794f80
 * calls 00844b00 FUN_00844b00
 * calls 007ec1bd FUN_007ec1bd
 * calls 0079cf20 FUN_0079cf20
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall FUN_0079df40(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  uVar1 = FUN_0079cf20(param_2,param_3);
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_00794f80(0x18,*(int *)(param_1 + 0x10));
    FUN_00844b00(*(undefined4 *)(iVar2 + 0x38));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  puVar3 = (undefined4 *)(param_1 + 0x1c);
  for (iVar2 = 0x35; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar1;
}


/* speed.exe 00790970 FUN_00790970; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

void __thiscall FUN_00790970(int param_1,code *param_2,undefined4 param_3)

{
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  *(code **)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  if (param_2 != (code *)0x0) {
    if (*(int *)(param_1 + 0x1c) != -1) {
      (*param_2)(1,param_1 + 0x1c,param_3);
    }
    if ((*(int *)(param_1 + 0xc) != 0) && (*(code **)(param_1 + 0x14) != (code *)0x0)) {
      (**(code **)(param_1 + 0x14))(2,0,*(undefined4 *)(param_1 + 0x18));
    }
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}


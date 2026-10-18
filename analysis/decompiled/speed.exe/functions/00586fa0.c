/* speed.exe 00586fa0 FUN_00586fa0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00586fa0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  *param_1 = &PTR_FUN_0089b8c8;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x21) = 1;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x46) = 0;
  param_1[0x12] = 0;
  puVar1 = PTR_s_drag_tutorial_008f50fc;
  if (param_2 == -0x5554ce17) {
    *(undefined1 *)((int)param_1 + 0x46) = 1;
    param_1[0x12] = puVar1;
    return;
  }
  if (param_2 == 0x66c9a7b6) {
    param_1[0x12] = PTR_s_speedtrap_tutorial_008f5100;
    *(undefined1 *)((int)param_1 + 0x46) = 1;
  }
  return;
}


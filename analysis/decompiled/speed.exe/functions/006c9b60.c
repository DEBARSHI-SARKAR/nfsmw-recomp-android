/* speed.exe 006c9b60 FUN_006c9b60; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls EXTERNAL:000000ca GetClientRect
 * calls EXTERNAL:000000c9 GetWindowRect
 * calls EXTERNAL:000000b8 GetCursorPos
 */

void __fastcall FUN_006c9b60(int param_1)

{
  LONG LVar1;
  LONG LVar2;
  undefined4 uVar3;
  tagPOINT local_28;
  tagRECT local_20;
  tagRECT local_10;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  local_10.top = 0;
  local_10.right = 0;
  local_10.left = 0;
  local_10.bottom = 0;
  GetWindowRect(DAT_00982bf4,&local_10);
  local_28.x = 0;
  local_28.y = 0;
  GetCursorPos(&local_28);
  local_20.top = 0;
  local_20.right = 0;
  local_20.left = 0;
  local_20.bottom = 0;
  GetClientRect(DAT_00982bf4,&local_20);
  LVar2 = local_20.right;
  LVar1 = local_20.left;
  if (local_20.bottom == local_20.top) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    uVar3 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  if (LVar2 == LVar1) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    uVar3 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 4) - *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10);
  return;
}


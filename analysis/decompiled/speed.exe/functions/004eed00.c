/* speed.exe 004eed00 FUN_004eed00; analysis pseudocode, not buildable source.
 * calls 004cd570 FUN_004cd570
 * calls 007c4b80 FUN_007c4b80
 */

void __fastcall FUN_004eed00(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(char *)(puVar1 + 8) == '\0') {
      (**(code **)*puVar1)(1);
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined1 *)(param_1 + 0x28) = 0;
      return;
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    local_14 = 0x7fff;
    local_18 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_10 = 0x1000;
    local_14 = FUN_007c4b80();
    if ((puVar2 == (uint *)0x0) || (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
      local_c = 0;
    }
    else {
      local_c = *puVar2 & 0xffff;
    }
    FUN_004cd570(&local_18);
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


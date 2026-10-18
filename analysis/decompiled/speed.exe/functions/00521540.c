/* speed.exe 00521540 FUN_00521540; analysis pseudocode, not buildable source.
 * calls 00574ed0 FUN_00574ed0
 */

void __fastcall FUN_00521540(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = 0x1492d7be;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  if (*(int *)(DAT_0091ca68 + 0x140) == 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
      *(undefined4 *)(iVar1 + 0x60) = 0xbb298a80;
      if (DAT_0091dd08 != (undefined4 *)0x0) {
        (**(code **)*DAT_0091dd08)(iVar1);
      }
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
    }
    return;
  }
  FUN_00574ed0();
  return;
}


/* speed.exe 00522570 FUN_00522570; analysis pseudocode, not buildable source.
 * calls 00515d70 FUN_00515d70
 * calls 00460c50 FUN_00460c50
 */

void __fastcall FUN_00522570(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_10 [16];
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar2 + 0x60) = 0x332c0b6f;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar2);
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
      *(undefined4 *)(iVar2 + 0x60) = 0xbb298a80;
      if (DAT_0091dd08 != (undefined4 *)0x0) {
        (**(code **)*DAT_0091dd08)(iVar2);
      }
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
      return;
    }
  }
  else {
    iVar3 = 0;
    iVar2 = FUN_00460c50(param_1 + 0x4c);
    if (0 < iVar2) {
      do {
        auStack_10[iVar3] = 0x2a;
        iVar3 = iVar3 + 1;
        iVar2 = FUN_00460c50(param_1 + 0x4c);
      } while (iVar3 < iVar2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    auStack_10[iVar3] = 0x20;
    auStack_10[iVar3 + 1] = 0;
    FUN_00515d70(uVar1,auStack_10);
  }
  return;
}


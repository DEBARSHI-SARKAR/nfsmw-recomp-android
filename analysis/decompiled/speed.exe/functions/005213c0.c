/* speed.exe 005213c0 FUN_005213c0; analysis pseudocode, not buildable source.
 * calls 00460ca0 FUN_00460ca0
 * calls 00515d70 FUN_00515d70
 * calls 00460c50 FUN_00460c50
 */

void __fastcall FUN_005213c0(int param_1)

{
  int iVar1;
  undefined1 auStack_40 [18];
  undefined1 uStack_2e;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = 0x5b2b70f;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  if (*(char *)(DAT_0091ca68 + 0xbc) == '\0') {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
      *(undefined4 *)(iVar1 + 0x60) = 0xbb298a80;
      if (DAT_0091dd08 != (undefined4 *)0x0) {
        (**(code **)*DAT_0091dd08)(iVar1);
      }
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
      return;
    }
  }
  else {
    iVar1 = FUN_00460c50(DAT_0091ca68 + 0xbc);
    if (0x12 < iVar1) {
      FUN_00460ca0(auStack_40,DAT_0091ca68 + 0xbc,0x12);
      uStack_2e = 0;
      FUN_00515d70(*(undefined4 *)(param_1 + 0x30),"%s...",auStack_40);
      return;
    }
    FUN_00515d70(*(undefined4 *)(param_1 + 0x30),&DAT_008941f8,DAT_0091ca68 + 0xbc);
  }
  return;
}


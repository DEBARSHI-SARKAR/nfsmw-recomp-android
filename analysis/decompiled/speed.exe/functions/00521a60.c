/* speed.exe 00521a60 FUN_00521a60; analysis pseudocode, not buildable source.
 * calls 00515d70 FUN_00515d70
 */

void __fastcall FUN_00521a60(int param_1)

{
  int iVar1;
  
  FUN_00515d70(*(undefined4 *)(param_1 + 0x2c),&DAT_00890978);
  if (*(char *)(param_1 + 0x18c) == '\0') {
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
    FUN_00515d70(*(undefined4 *)(param_1 + 0x30),param_1 + 0x18c);
  }
  return;
}


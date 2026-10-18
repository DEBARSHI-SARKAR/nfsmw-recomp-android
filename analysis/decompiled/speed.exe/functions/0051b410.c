/* speed.exe 0051b410 FUN_0051b410; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0051b410(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = 0x7bf4e178;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (DAT_0091ca28 == '\0') {
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x60) = 0x417b25e4;
  }
  else {
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x60) = 0x70e01038;
  }
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
  if (DAT_0091dd08 != (undefined4 *)0x0) {
    (**(code **)*DAT_0091dd08)(iVar1);
  }
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  return;
}


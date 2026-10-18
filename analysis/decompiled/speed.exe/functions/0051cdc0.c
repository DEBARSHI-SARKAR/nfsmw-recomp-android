/* speed.exe 0051cdc0 FUN_0051cdc0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0051cdc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = 0x84bc378;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  uVar2 = 0;
  switch(*(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x90 + DAT_0091ca24 * 0x14)) {
  case 0:
    uVar2 = 0x417b2604;
    break;
  case 1:
    uVar2 = 0xc44d3943;
    break;
  case 2:
    uVar2 = 0x17fafc32;
    break;
  case 3:
    uVar2 = 0x1ea459f8;
    break;
  case 4:
    uVar2 = 0x70dfe5c2;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = uVar2;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  return;
}


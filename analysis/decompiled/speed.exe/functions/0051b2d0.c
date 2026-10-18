/* speed.exe 0051b2d0 FUN_0051b2d0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0051b2d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = 0x2881ab87;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  iVar1 = *(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0x70);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0xc50fa35f;
  }
  else if (iVar1 == 1) {
    uVar2 = 0x55da8bf8;
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


/* speed.exe 0051c910 FUN_0051c910; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0051c910(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = 0xf6ccdc5f;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  uVar2 = 0;
  switch(*(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + (DAT_0091ca24 * 5 + 0x23) * 4)) {
  case 0:
    uVar2 = 0xc3e9ae58;
    break;
  case 1:
    uVar2 = 0x414f19d7;
    break;
  case 2:
    uVar2 = 0x5ae3441f;
    break;
  case 3:
    uVar2 = 0x1ea4cec2;
    break;
  case 4:
    uVar2 = 0x916039b4;
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


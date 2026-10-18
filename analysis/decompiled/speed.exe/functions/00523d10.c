/* speed.exe 00523d10 FUN_00523d10; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00523d10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  switch(DAT_0091cbe4) {
  case 0:
    uVar2 = 0xb94fd70e;
    break;
  case 1:
    uVar2 = 0x34fa2c1;
    break;
  case 2:
    uVar2 = 0x6f547e4c;
    break;
  case 0xb:
    uVar2 = 0x7105fb23;
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
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = 0xfd81b9f7;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  return;
}


/* speed.exe 0051b7a0 FUN_0051b7a0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0051b7a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = 0xc96d57c9;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  uVar2 = 0;
  switch(*(undefined4 *)(*DAT_0091ca20 + 0x6c)) {
  case 0:
    uVar2 = 0xdccbd59e;
    break;
  case 1:
    uVar2 = 0x6d6bb416;
    break;
  case 2:
    uVar2 = 0xa7470774;
    break;
  case 3:
    uVar2 = 0x4ef21b32;
    break;
  case 4:
    uVar2 = 0x2d31055a;
    break;
  case 5:
    uVar2 = 0x76667b12;
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


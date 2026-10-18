/* speed.exe 0051f7b0 FUN_0051f7b0; analysis pseudocode, not buildable source.
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 */

void __fastcall FUN_0051f7b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = uVar2;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    if ((*(int *)(param_1 + 0x44) != 0) && (iVar1 = FUN_005b1360(0x163c76), iVar1 != 0)) {
      FUN_005b8400(iVar1,0);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      return;
    }
    if ((*(int *)(iVar1 + 0x54) != 0) && (*(int *)(*(int *)(iVar1 + 0x54) + 0x30) == 0x249db7b7)) {
      return;
    }
    if (iVar1 == 0) {
      return;
    }
    uVar2 = 0x163c76;
  }
  else {
    if ((*(int *)(param_1 + 0x44) != 0) && (iVar1 = FUN_005b1360(0x6ebbfb68), iVar1 != 0)) {
      FUN_005b8400(iVar1,0);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      return;
    }
    if ((*(int *)(iVar1 + 0x54) != 0) && (*(int *)(*(int *)(iVar1 + 0x54) + 0x30) == 0x249db7b7)) {
      return;
    }
    if (iVar1 == 0) {
      return;
    }
    uVar2 = 0x6ebbfb68;
  }
  iVar1 = FUN_005b1360(uVar2);
  if (iVar1 != 0) {
    FUN_005b8400(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return;
}


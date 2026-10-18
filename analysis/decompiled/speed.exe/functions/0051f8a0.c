/* speed.exe 0051f8a0 FUN_0051f8a0; analysis pseudocode, not buildable source.
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 005743f0 FUN_005743f0
 */

void __fastcall FUN_0051f8a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x48) == '\0') && (*(char *)(param_1 + 0x49) == '\0')) {
    if ((*(int *)(param_1 + 0x2c) != 0) && (iVar1 = FUN_005b1360(0x163c76), iVar1 != 0)) {
      FUN_005b8400(iVar1,0);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    if ((*(int *)(param_1 + 0x44) != 0) && (iVar1 = FUN_005b1360(0x163c76), iVar1 != 0)) {
      FUN_005b8400(iVar1,0);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      return;
    }
    uVar2 = 0x163c76;
  }
  else {
    FUN_005743f0();
    if (*(int *)(param_1 + 0x44) == 0) {
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


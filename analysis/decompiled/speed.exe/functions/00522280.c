/* speed.exe 00522280 FUN_00522280; analysis pseudocode, not buildable source.
 * calls 00515e90 FUN_00515e90
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 */

void __fastcall FUN_00522280(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1ec);
  switch(*(undefined4 *)(param_1 + 0x1a4)) {
  case 0:
    uVar1 = *(undefined4 *)(param_1 + 0x1e0);
    goto LAB_005222c6;
  case 1:
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_1 + 0x1dc);
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_1 + 0x1e4);
    break;
  case 3:
    uVar1 = *(undefined4 *)(param_1 + 0x1e8);
LAB_005222c6:
    *(undefined4 *)(param_1 + 0x1ec) = uVar1;
  }
  if (iVar2 != *(int *)(param_1 + 0x1ec)) {
    if ((iVar2 != 0) && (iVar2 = FUN_005b1360(0x7ab5521a), iVar2 != 0)) {
      FUN_005b8400(iVar2,0);
      *(undefined4 *)(iVar2 + 0x10) = 0;
    }
    if ((*(int *)(param_1 + 0x1ec) != 0) && (iVar2 = FUN_005b1360(0x249db7b7), iVar2 != 0)) {
      FUN_005b8400(iVar2,0);
      *(undefined4 *)(iVar2 + 0x10) = 0;
    }
    FUN_00515e90(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x1ec) + 0x10));
  }
  return;
}


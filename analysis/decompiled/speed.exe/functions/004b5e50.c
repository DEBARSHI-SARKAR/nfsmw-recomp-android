/* speed.exe 004b5e50 FUN_004b5e50; analysis pseudocode, not buildable source.
 * calls 00402120 FUN_00402120
 * calls 004b5d70 FUN_004b5d70
 * calls 007c4b80 FUN_007c4b80
 * calls 004d6130 FUN_004d6130
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b5e50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004d6130(*(undefined4 *)(param_1 + 0x44));
  if ((iVar1 == 0) || (*(undefined4 **)(param_1 + 0x28) == (undefined4 *)0x0)) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0xffffffff;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = 0;
    **(undefined4 **)(param_1 + 0xc) = 0xffffffff;
    return;
  }
  _DAT_00912828 = **(undefined4 **)(param_1 + 0x28);
  _DAT_0091282c = *(undefined4 *)(*(int *)(param_1 + 0x28) + 4);
  switch(DAT_009121cc) {
  case 0:
    DAT_00912134 = &DAT_009144a0 + *(int *)(param_1 + 0x44) * 2;
    DAT_00912130 = &DAT_009144c0 + *(int *)(param_1 + 0x44) * 2;
    FUN_004b5d70();
    *(uint *)(*(int *)(param_1 + 0xc) + 0xc) = (uint)DAT_00912138;
    FUN_00402120(&DAT_00912828,DAT_00912134);
    uVar2 = FUN_007c4b80();
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = uVar2;
    DAT_00912134 = &DAT_009144b0 + *(int *)(param_1 + 0x44) * 2;
    DAT_00912130 = (undefined4 *)(&DAT_00914510 + *(int *)(param_1 + 0x44) * 8);
    break;
  case 1:
    DAT_00912134 = &DAT_009144d0 + *(int *)(param_1 + 0x44) * 2;
    DAT_00912130 = &DAT_00914490 + *(int *)(param_1 + 0x44) * 2;
    FUN_004b5d70();
    *(uint *)(*(int *)(param_1 + 0xc) + 0xc) = (uint)DAT_00912138;
    FUN_00402120(&DAT_00912828,DAT_00912134);
    uVar2 = FUN_007c4b80();
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = uVar2;
    DAT_00912134 = &DAT_009144b0 + *(int *)(param_1 + 0x44) * 2;
    DAT_00912130 = (undefined4 *)(&DAT_00914510 + *(int *)(param_1 + 0x44) * 8);
    break;
  case 2:
  case 3:
    DAT_00912134 = &DAT_009144f0 + *(int *)(param_1 + 0x44) * 2;
    DAT_00912130 = &DAT_00914490 + *(int *)(param_1 + 0x44) * 2;
    break;
  default:
    goto switchD_004b5e99_default;
  }
  FUN_004b5d70();
  *(uint *)(*(int *)(param_1 + 0xc) + 8) = (uint)DAT_00912138;
  FUN_00402120(&DAT_00912828,DAT_00912134);
  uVar2 = FUN_007c4b80();
  **(undefined4 **)(param_1 + 0xc) = uVar2;
switchD_004b5e99_default:
  if (*(int *)(param_1 + 0x2c) != 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x28) = 0;
  return;
}


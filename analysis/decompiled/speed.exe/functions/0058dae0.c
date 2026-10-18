/* speed.exe 0058dae0 FUN_0058dae0; analysis pseudocode, not buildable source.
 * calls 005251a0 FUN_005251a0
 * calls 00460c50 FUN_00460c50
 * calls 005251e0 FUN_005251e0
 * calls 005bcd20 FUN_005bcd20
 * calls 005af1c0 FUN_005af1c0
 * calls 00514c70 FUN_00514c70
 * calls 00524850 FUN_00524850
 * calls 00524920 FUN_00524920
 * calls 0056bfc0 FUN_0056bfc0
 * calls 00515e20 FUN_00515e20
 * calls 00525220 FUN_00525220
 * calls 00515bb0 FUN_00515bb0
 * calls 004611c0 FUN_004611c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0058dae0(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_820 [32];
  undefined1 local_800 [2048];
  
  *(int *)(param_1 + 0x318) = DAT_0091cf90 + 0x32c;
  iVar2 = *(int *)(DAT_0091cf90 + 0x324);
  if (0x9c < iVar2) {
    iVar2 = 0x9c;
  }
  *(int *)(param_1 + 0x34) = iVar2;
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(DAT_0091cf90 + 0x318);
  *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(DAT_0091cf90 + 0x31c);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(DAT_0091cf90 + 0x328);
  *(undefined4 *)(param_1 + 0x30) = 0;
  switch(DAT_008f41c0) {
  case 1:
    *(undefined4 *)(param_1 + 0x2c) = 1;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x2c) = 2;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x2c) = 3;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x2c) = 4;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x2c) = 5;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x2c) = 6;
    break;
  default:
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  uVar3 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0x5bc,0x5bc);
  FUN_00515bb0(uVar3);
  uVar3 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0x682,0x682);
  FUN_00515bb0(uVar3);
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  if ((*(int *)(param_1 + 0x328) == 3) || (*(int *)(param_1 + 0x328) == 5)) {
    *(undefined1 *)(param_1 + 0x3a) = 1;
  }
  uVar3 = FUN_005251e0(*(undefined4 *)(param_1 + 0x10),0xadda7e89);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xa2deef46);
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  uVar3 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0x128fdcb8);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x95d7d3d2);
  *(undefined4 *)(param_1 + 0x330) = uVar3;
  iVar5 = 1;
  puVar6 = (undefined4 *)(param_1 + 0xfc);
  iVar2 = 0x2d;
  do {
    FUN_00515e20(local_820,0x20,"KEYNUM %.2d",iVar5);
    uVar3 = FUN_005af1c0(local_820);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),uVar3);
    puVar6[-0x2d] = uVar3;
    FUN_00515e20(local_820,0x20,"KEYNUM SHADOW %.2d",iVar5);
    uVar3 = FUN_005af1c0(local_820);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),uVar3);
    *puVar6 = uVar3;
    FUN_00515e20(local_820,0x20,"KEY %.2d",iVar5);
    uVar3 = FUN_005af1c0(local_820);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),uVar3);
    puVar6[0x2d] = uVar3;
    FUN_00515e20(local_820,0x20,"KEY %.2d DISABLE",iVar5);
    uVar3 = FUN_005af1c0(local_820);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),uVar3);
    puVar6[0x5a] = uVar3;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((*(int *)(param_1 + 0x328) != 0) || (DAT_008f41c0 == 8)) {
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x2c99c4e2);
    FUN_00514c70(uVar3);
    FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xdcbc8286,0x1ca7c0,1);
  }
  if (*(int *)(param_1 + 0x328) == 5) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = FUN_005af1c0(&DAT_0089da48,1);
    uVar4 = FUN_005af1c0("KEY 61 DISABLE",uVar4);
    FUN_00524920(uVar3,uVar4);
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x42adb44c,0x7f042bcd);
  iVar2 = *(int *)(param_1 + 0x3c);
  if (DAT_0091cf84 == 0) {
    FUN_004611c0(local_800);
  }
  else {
    FUN_0056bfc0(local_800,0x800,param_1 + 0x334);
  }
  FUN_005bcd20(local_800);
  puVar1 = (uint *)(iVar2 + 0x1c);
  *puVar1 = *puVar1 | 0x400000;
  uVar3 = FUN_00460c50(*(undefined4 *)(param_1 + 0x318));
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  _DAT_0091cf34 = param_1;
  _DAT_0091cf30 = 1;
  return;
}


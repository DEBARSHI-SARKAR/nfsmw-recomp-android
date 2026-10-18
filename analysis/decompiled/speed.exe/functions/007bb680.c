/* speed.exe 007bb680 FUN_007bb680; analysis pseudocode, not buildable source.
 * calls 00516c50 FUN_00516c50
 * calls 007bab40 FUN_007bab40
 * calls 007b5a50 FUN_007b5a50
 * calls 005257f0 FUN_005257f0
 * calls 007aeeb0 FUN_007aeeb0
 * calls 007b3ff0 FUN_007b3ff0
 * calls 00516c90 FUN_00516c90
 * calls 00587d30 FUN_00587d30
 * calls 00525940 FUN_00525940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_007bb680(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_00587d30(param_2,param_3,param_4,param_5);
  if (0xb4edeb6d < param_2) {
    if (param_2 == 0xb5af2461) {
      PTR_DAT_00905ed4 = *(undefined **)(param_1 + 0x10);
      FUN_005257f0();
      return;
    }
    if (param_2 == 0xc519bfbf) {
      _DAT_009b9e80 = *(int *)(*(int *)(param_1 + 0x38) + 0x50) << 0x10 | *(uint *)(param_1 + 0x150)
      ;
      PTR_DAT_00905e34 = *(undefined **)(param_1 + 0x10);
      FUN_00525940();
      return;
    }
    if (param_2 != 0xe1fde1d1) {
      return;
    }
    if (*(char *)(param_1 + 0x148) == '\0') {
      return;
    }
    FUN_00525940(*(undefined4 *)(param_1 + 0x14c),
                 *(int *)(param_1 + 0x150) << 0x10 | *(uint *)(param_1 + 0x154),0,0);
    return;
  }
  if (param_2 == 0xb4edeb6d) {
LAB_007bb704:
    *(undefined1 *)(param_1 + 0x57) = 1;
    return;
  }
  if (param_2 == 0x1720b124) {
    PTR_DAT_00905ed4 = *(undefined **)(param_1 + 0x10);
    FUN_005257f0();
    return;
  }
  if (param_2 == 0x7a318ee0) {
    FUN_007b3ff0();
    FUN_007b5a50();
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    if (param_2 != 0x911ab364) {
      return;
    }
    if ((0x800 < *(uint *)(param_1 + 0x150)) && (*(uint *)(param_1 + 0x150) < 0x804)) {
      cVar1 = FUN_007aeeb0();
      if (cVar1 != '\0') {
        FUN_00516c50(0x1720b124,*(undefined4 *)(param_1 + 0x10),0xff);
        goto LAB_007bb704;
      }
      FUN_007bab40();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x148) = 1;
  }
  FUN_00516c90(0x587c018b,uVar2,0);
  return;
}


/* speed.exe 0057e180 FUN_0057e180; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 00525220 FUN_00525220
 * calls 00516c90 FUN_00516c90
 * calls 005af1c0 FUN_005af1c0
 * calls 00515e20 FUN_00515e20
 * calls 00515b90 FUN_00515b90
 * calls 00515bb0 FUN_00515bb0
 * calls 00524850 FUN_00524850
 * calls 005251a0 FUN_005251a0
 * calls 00514cc0 FUN_00514cc0
 */

void __fastcall FUN_0057e180(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_2c;
  int *local_28;
  int local_24;
  undefined1 local_20 [32];
  
  if ((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) {
    FUN_00516c90(0xde511657,*(undefined4 *)(param_1 + 0x10),0);
  }
  local_28 = (int *)(&DAT_0091d278 + *(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0x88) * 4);
  local_2c = 1;
  local_24 = 0x11;
  do {
    FUN_00515e20(local_20,0x20,"CButton_%d",local_2c);
    uVar2 = FUN_005af1c0(local_20);
    FUN_00515e20(local_20,0x20,"BUTTON_%d",local_2c);
    uVar3 = FUN_005af1c0(local_20);
    iVar1 = *local_28;
    uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),uVar2);
    if (iVar1 == 0) {
      FUN_00514c70(uVar4);
      uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),uVar3);
      FUN_00514c70(uVar2);
    }
    else {
      FUN_00514cc0();
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),uVar2,iVar1);
      uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),uVar3);
      FUN_00514cc0(uVar2);
    }
    local_2c = local_2c + 1;
    local_28 = local_28 + 5;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x87) == '\0') {
    uVar2 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0x4592229c,0xb30961b);
    FUN_00515bb0(uVar2);
  }
  else {
    uVar2 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0x4592229c,0x148e38);
    FUN_00515b90(uVar2);
  }
  uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xf274b86);
  FUN_00514c70(uVar2);
  uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x673d77bc);
  FUN_00514c70(uVar2);
  uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x351ae442);
  FUN_00514c70(uVar2);
  return;
}


/* speed.exe 0053fcd0 FUN_0053fcd0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00591e90 FUN_00591e90
 * calls 00515e20 FUN_00515e20
 * calls 0078bbe0 FUN_0078bbe0
 * calls 0056bc10 FUN_0056bc10
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 00525220 FUN_00525220
 * calls 005b8400 FUN_005b8400
 * calls 0078c730 FUN_0078c730
 * calls 0078cf80 FUN_0078cf80
 * calls 0079ca30 FUN_0079ca30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0053fcd0(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined1 local_70 [40];
  char local_48;
  int local_4;
  
  if ((((*(char *)(DAT_0091cf90 + 0x176) == '\x01') && (DAT_0091c36c == 0)) ||
      ((DAT_0091c370 != 0 && (((_DAT_0091c390 & 0x400000) == 0 && (DAT_0091c344 == 0)))))) ||
     ((DAT_0091c358 == 0 || (DAT_0091c368 != 0)))) {
    return 0;
  }
  iVar2 = FUN_00591e90(PTR_s_OL_GameRoom_fng_008f32b0);
  puVar5 = local_70;
  puVar6 = &DAT_0091c340;
  FUN_0078c730(puVar5,&DAT_0091c340);
  FUN_0078cf80(puVar5,puVar6);
  bVar1 = true;
  FUN_0079ca30();
  iVar3 = FUN_0078bbe0();
  if (iVar3 != 0) {
    FUN_0079ca30();
    iVar3 = FUN_0078bbe0();
    if (*(int *)(iVar3 + 0x20c) == *(int *)(iVar3 + 0x16c)) {
      bVar1 = false;
    }
  }
  if ((((*(int *)(param_1 + 0x10) != 0) &&
       (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0)) &&
      (iVar3 = FUN_005b8550(0x4b4e3889), iVar3 != 0)) &&
     (iVar3 = FUN_005b1360(0x7ab5521a), iVar3 != 0)) {
    FUN_005b8400(iVar3,0);
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  if ((iVar2 != 0) && (local_48 == '\0')) {
    if (((_DAT_0091c390 & 0x20000) != 0) || (DAT_0091c348 != 0)) {
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x4b4e3889,0x5632d96d);
      uVar4 = FUN_0056bc10(0x5632d96d);
      FUN_00515e20(param_2,0x20,uVar4);
      return 1;
    }
    if (((DAT_0091c37c != 0) && (DAT_0091c344 == 0)) && (bVar1)) {
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x4b4e3889,0x3438b351);
      uVar4 = FUN_0056bc10(0x3438b351);
      FUN_00515e20(param_2,0x20,uVar4);
      return 1;
    }
    return 0;
  }
  if (((_DAT_0091c390 & 0x400000) == 0) && (DAT_0091c344 == 0)) {
    if ((((DAT_0091c358 == 0) || (local_48 == '\0')) || (local_4 != 0)) || (iVar2 != 0)) {
      uVar4 = FUN_0056bc10(0x6729a51e);
      FUN_00515e20(param_2,0x20,uVar4);
      return 0;
    }
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x4b4e3889,0x23c37b11);
    uVar4 = 0x23c37b11;
  }
  else {
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x4b4e3889,0xc48a4103);
    uVar4 = 0xc48a4103;
  }
  uVar4 = FUN_0056bc10(uVar4);
  FUN_00515e20(param_2,0x20,uVar4);
  return 1;
}


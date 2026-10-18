/* speed.exe 00450c30 FUN_00450c30; analysis pseudocode, not buildable source.
 * calls 004508b0 FUN_004508b0
 * calls 00444fe0 FUN_00444fe0
 * calls 0044cf90 FUN_0044cf90
 * calls 0044e750 FUN_0044e750
 * calls 00460bf0 FUN_00460bf0
 * calls 007477a0 FUN_007477a0
 * calls 00503400 FUN_00503400
 * calls 00759410 FUN_00759410
 * calls 00446f00 FUN_00446f00
 * calls 0045ecf0 FUN_0045ecf0
 * calls 0044e920 FUN_0044e920
 * calls 0044cfe0 FUN_0044cfe0
 * calls 0044aff0 FUN_0044aff0
 * calls 00731d80 FUN_00731d80
 * calls 0044d0c0 FUN_0044d0c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00450c30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_d4;
  undefined1 local_d0 [64];
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x10);
  DAT_0090da74 = *(int *)(iVar1 + 0x18) == 0;
  iVar2 = *(int *)(iVar1 + 0x18);
  if (((iVar2 == 0) || (iVar2 == 3)) || (local_d4 = 0, iVar2 == 2)) {
    local_d4 = 1;
  }
  FUN_00446f00(local_d0,local_90,local_d4);
  FUN_00444fe0(param_1 + 0x50,local_d0);
  FUN_00444fe0(param_1 + 0x90,local_90);
  FUN_0045ecf0(local_50,local_90,local_d0);
  FUN_00444fe0(param_1 + 0xd0,local_50);
  iVar2 = FUN_00759410(0);
  *(int *)(param_1 + 0x110) = iVar2;
  FUN_00444fe0(iVar2 + 0x60,local_50);
  if (*(int *)(iVar2 + 0xf4) == 0) {
    FUN_007477a0();
  }
  FUN_0044e920();
  FUN_0044aff0();
  FUN_0044e750();
  FUN_0044d0c0();
  if ((*(int *)(iVar1 + 0x18) == 0) || (*(int *)(iVar1 + 0x18) == 3)) {
    FUN_0044cf90(0,1);
    FUN_0044cf90(2,1);
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x10);
    *(float *)(param_1 + 0x28) = (float)*(int *)(iVar1 + 0x28) * _DAT_008934e0;
    *(float *)(param_1 + 0x2c) = (float)*(int *)(iVar1 + 0x2c) * _DAT_008934e0;
    FUN_0044cfe0();
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  FUN_004508b0();
  uVar3 = FUN_00460bf0("CHARACTERSHADOW",1,0);
  DAT_0090d9e8 = FUN_00503400(uVar3);
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x10);
  if (*(char *)(iVar1 + 0x30) != '\0') {
    FUN_00731d80(iVar1 + 0x30);
  }
  return 1;
}


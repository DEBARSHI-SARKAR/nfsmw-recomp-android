/* speed.exe 006f0c80 FUN_006f0c80; analysis pseudocode, not buildable source.
 * calls 006e84a0 FUN_006e84a0
 * calls 006ed0f0 FUN_006ed0f0
 * calls 005d7930 FUN_005d7930
 * calls 00647dd0 FUN_00647dd0
 * calls 005d8660 FUN_005d8660
 * calls 005cc240 FUN_005cc240
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 006ecb90 FUN_006ecb90
 */

undefined4 * __fastcall FUN_006f0c80(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ea5e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_005d8660(3);
  local_4 = 0;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 2);
  FUN_005d7930(&LAB_006e81c0,param_1);
  *param_1 = &PTR_FUN_008b0600;
  param_1[6] = *(undefined4 *)(DAT_009203b0 + 0x20);
  local_4._0_1_ = 1;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_006ecb90(0xeec2271a,0,0);
  param_1[0x23] = 0;
  param_1[0x1d] = DAT_008a2fc0;
  param_1[0x1e] = DAT_008a2fc4;
  param_1[0x1f] = DAT_008a2fc8;
  param_1[0x20] = DAT_008a2fcc;
  param_1[0x19] = param_1[0x1d];
  param_1[0x1a] = param_1[0x1e];
  param_1[0x1b] = param_1[0x1f];
  param_1[0x1c] = param_1[0x20];
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[7] = param_1[6];
  param_1[0xc] = 0x522d67db;
  param_1[0xd] = param_1;
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar2 = FUN_00647dd0(0x522d67db,param_1 + 0xc,0,1,0,0);
  param_1[10] = uVar2;
  local_14 = FUN_006e84a0();
  uVar4 = 0;
  if (local_14 != 0) {
    do {
      iVar3 = FUN_00454810(0xdfc2418,uVar4);
      if (iVar3 == 0) {
        iVar3 = FUN_006269b0(0x10);
      }
      for (piVar1 = DAT_00988dfc; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        if ((piVar1[3] == *(int *)(iVar3 + 8)) && (*piVar1 != 0)) {
          (*(code *)*piVar1)();
          break;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_14);
  }
  local_14 = FUN_005cc240("SimStart");
  uVar2 = FUN_006ed0f0(&local_14,0x3f800000,param_1,0,0);
  param_1[0x11] = uVar2;
  local_14 = FUN_005cc240("WorldUpdate");
  uVar2 = FUN_006ed0f0(&local_14,0x3f800000,param_1,0,0);
  param_1[0x10] = uVar2;
  local_14 = FUN_005cc240("SimEnd");
  uVar2 = FUN_006ed0f0(&local_14,0x3f800000,param_1,0,1);
  param_1[0x13] = uVar2;
  local_14 = FUN_005cc240("SimEnd");
  uVar2 = FUN_006ed0f0(&local_14,0x3f800000,param_1,0,0);
  param_1[0x12] = uVar2;
  ExceptionList = local_c;
  return param_1;
}


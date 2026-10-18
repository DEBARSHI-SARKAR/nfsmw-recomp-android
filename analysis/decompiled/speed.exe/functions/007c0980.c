/* speed.exe 007c0980 FUN_007c0980; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 007bde00 FUN_007bde00
 * calls 007b8040 FUN_007b8040
 * calls 00524850 FUN_00524850
 * calls 005251a0 FUN_005251a0
 * calls 00573140 FUN_00573140
 * calls 00515bb0 FUN_00515bb0
 * calls 00588100 FUN_00588100
 * calls 00516c90 FUN_00516c90
 * calls 005881f0 FUN_005881f0
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_007c0980(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883a34;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_005251a0(param_1[4],0x91c4a50,0x5bc);
  FUN_00515bb0(uVar3);
  uVar3 = FUN_005251a0(param_1[4],0x2d145be3,0x682);
  FUN_00515bb0(uVar3);
  iVar5 = 1;
  do {
    pvVar4 = _malloc(0x14);
    uVar3 = 0;
    local_4 = 0;
    if (pvVar4 != (void *)0x0) {
      iVar1 = param_1[4];
      uVar3 = FUN_00573140("COLOR_%d",iVar5);
      uVar3 = FUN_005251a0(iVar1,uVar3);
      uVar3 = FUN_00588100(uVar3);
    }
    local_4 = 0xffffffff;
    FUN_005881f0(uVar3);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x51);
  param_1[0x70] = -1;
  param_1[0x71] = -1;
  param_1[0x72] = -1;
  if (DAT_00905e38 != -1) {
    param_1[0x6f] = DAT_00905e38;
  }
  uVar2 = param_1[0x52];
  if (uVar2 < 0x304) {
    if (uVar2 == 0x303) {
      param_1[0x57] = -0x1ed900ad;
      uVar3 = FUN_00524850(param_1[4],0x2c3cc2d3);
      FUN_00514c70(uVar3);
      uVar3 = FUN_00524850(param_1[4],0x53639a10);
      FUN_00514c70(uVar3);
      FUN_007b8040(0x4e);
    }
    else if (uVar2 == 0x301) {
      FUN_00516c90(0x1a7240f3,param_1[4],0);
      param_1[0x57] = 0x55da70c;
      FUN_007b8040(0x4c);
    }
  }
  else if ((0x401 < uVar2) && (uVar2 < 0x40a)) {
    param_1[0x57] = -0x2711e580;
    FUN_007bde00();
  }
  DAT_00905e38 = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x11b) = 1;
  (**(code **)(*param_1 + 0xc))();
  ExceptionList = pvStack_c;
  return;
}


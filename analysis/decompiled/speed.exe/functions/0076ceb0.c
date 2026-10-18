/* speed.exe 0076ceb0 FUN_0076ceb0; analysis pseudocode, not buildable source.
 * calls 005cef70 FUN_005cef70
 * calls 00652ac0 _malloc
 * calls 005cefe0 FUN_005cefe0
 * calls 005c8140 FUN_005c8140
 * calls 00764340 FUN_00764340
 * calls 005cf0d0 FUN_005cf0d0
 * calls 005ced30 FUN_005ced30
 * calls 00652ad0 _malloc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076ceb0(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881963;
  local_c = ExceptionList;
  _DAT_009b38ac = param_1;
  if (param_1 == 0) {
    ExceptionList = &local_c;
    pvVar3 = _malloc(0x24);
    local_4 = 2;
    if (pvVar3 == (void *)0x0) {
      DAT_009b38a8 = 0;
      ExceptionList = local_c;
      return;
    }
    local_1c = 0xc61c4000;
    local_14 = 0xc61c4000;
    local_18 = 0xc61c4000;
    local_10 = 0x3f800000;
    DAT_009b38a8 = FUN_00764340(&local_1c,2,2,0x461c4000);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  iVar1 = FUN_005ced30(0x43446174);
  iVar2 = FUN_005cf0d0(0x43477264);
  iVar5 = *(int *)(iVar2 + 0xc);
  if ((*(byte *)(iVar2 + 4) & 2) != 0) {
    iVar5 = iVar5 + iVar2;
  }
  if ((*(int *)(iVar5 + 0x18) == 0) || (*(int *)(iVar5 + 0x1c) == 0)) {
    pvVar3 = _malloc(0x24);
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      local_1c = 0xc61c4000;
      local_18 = 0xc61c4000;
      local_14 = 0xc61c4000;
      local_10 = 0x3f800000;
      DAT_009b38a8 = FUN_00764340(&local_1c,2,2,0x461c4000);
      goto LAB_0076cfb4;
    }
  }
  else {
    pvVar3 = _malloc(0x24);
    local_4 = 1;
    if (pvVar3 != (void *)0x0) {
      DAT_009b38a8 = FUN_00764340(iVar5,*(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x1c),
                                  *(undefined4 *)(iVar5 + 0x10));
      goto LAB_0076cfb4;
    }
  }
  DAT_009b38a8 = 0;
LAB_0076cfb4:
  local_4 = 0xffffffff;
  FUN_005cef70(0x4347636e);
  iVar5 = FUN_005cefe0(0x4347636e,0xffffffff,0xffffffff);
  iVar2 = FUN_005c8140();
  if (iVar5 != iVar2 + ((*(uint *)(iVar1 + 4) >> 5) + *(int *)(iVar1 + 8)) * 0x10) {
    iVar1 = *(int *)(iVar5 + 0xc);
    if ((*(byte *)(iVar5 + 4) & 2) != 0) {
      iVar1 = iVar1 + iVar5;
    }
    uVar4 = 0;
    if (*(int *)(iVar5 + 8) != 0) {
      do {
        *(int *)(*(int *)(DAT_009b38a8 + 0x20) + (uint)*(ushort *)(iVar1 + 4) * 4) = iVar1;
        iVar1 = iVar1 + ((uint)*(byte *)(iVar1 + 0xb) + (uint)*(byte *)(iVar1 + 10) +
                         (uint)*(byte *)(iVar1 + 9) + (uint)*(byte *)(iVar1 + 8)) * 4 + 0x14;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar5 + 8));
    }
  }
  ExceptionList = local_c;
  return;
}


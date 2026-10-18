/* speed.exe 007fa092 FUN_007fa092; analysis pseudocode, not buildable source.
 * calls 007fa374 FUN_007fa374
 * calls 007f9d53 FUN_007f9d53
 * calls 007f9d86 FUN_007f9d86
 * calls 007f9da1 FUN_007f9da1
 * calls 007f9fc2 FUN_007f9fc2
 * calls 007fbca3 FUN_007fbca3
 * calls 007fbbe7 FUN_007fbbe7
 * calls 007fc55d FUN_007fc55d
 * calls 007faad1 FUN_007faad1
 */

/* WARNING: Removing unreachable block (ram,0x007fa0e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_007fa092(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_8;
  
  local_8 = param_1;
  FUN_007f9d86(&local_8);
  iVar7 = local_8;
  if (*(int *)(param_1 + 0x1c) == 0) {
    param_2 = param_2 - *(int *)(param_1 + 0x20);
    if (param_2 < 0x11) {
      if (0 < param_2) {
        if (local_8 == 0) {
          return 0;
        }
        uVar8 = FUN_007f9d53();
        cVar5 = FUN_007faad1(uVar8);
        if (cVar5 != '\0') {
          FUN_007fc55d(*(undefined4 *)(param_1 + 4),*(int *)(iVar7 + 4) + 8,*(int *)(iVar7 + 8) + -8
                       ,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
          FUN_007f9da1(iVar7);
          FUN_007f9d86(&local_8);
        }
      }
    }
    else {
      _DAT_009bfe1c = _DAT_009bfe1c + 1;
      _DAT_009bfe20 = *(undefined4 *)(param_1 + 0x20);
      do {
        FUN_007f9da1(local_8);
        FUN_007f9d86(&local_8);
        iVar7 = FUN_007f9d53();
      } while (iVar7 != 0x4d56304b);
    }
  }
  else {
    iVar6 = *(int *)(local_8 + 4);
    uVar1 = *(ushort *)(iVar6 + 0xc);
    *(uint *)(param_1 + 8) = (uint)uVar1;
    uVar2 = *(ushort *)(iVar6 + 0xe);
    *(uint *)(param_1 + 0xc) = (uint)uVar2;
    uVar3 = *(ushort *)(iVar6 + 0x1c);
    fVar4 = (float)*(int *)(iVar6 + 0x18);
    if (*(int *)(iVar6 + 0x18) < 0) {
      fVar4 = fVar4 + _DAT_00891214;
    }
    iVar6 = (uint)uVar2 * (uint)uVar1;
    *(int *)(param_1 + 0x10) = iVar6;
    *(int *)(param_1 + 0x14) = iVar6 >> 2;
    *(float *)(param_1 + 0x18) = fVar4 / (float)uVar3;
    iVar6 = *(int *)(*(int *)(param_1 + 0x34) + 0x14) + 1;
    if (0 < iVar6) {
      do {
        FUN_007fa374(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_007fbbe7((undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc));
    FUN_007fbca3(*(undefined4 *)(param_1 + 4),0,0);
    FUN_007f9da1(iVar7);
    FUN_007f9d86(&local_8);
  }
  if (local_8 == 0) {
    return 0;
  }
  uVar8 = FUN_007f9fc2(local_8);
  FUN_007f9da1(local_8);
  return uVar8;
}


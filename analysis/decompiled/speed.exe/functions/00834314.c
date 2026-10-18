/* speed.exe 00834314 FUN_00834314; analysis pseudocode, not buildable source.
 * calls 00834b82 FUN_00834b82
 * calls 00831d65 FUN_00831d65
 * calls 00831e0b FUN_00831e0b
 * calls 00834081 FUN_00834081
 * calls 0083423f FUN_0083423f
 * calls 00832fab FUN_00832fab
 * calls 008338c4 FUN_008338c4
 * calls 0083428e FUN_0083428e
 * calls 00834d07 FUN_00834d07
 * calls 00833c45 FUN_00833c45
 * calls 008346ff FUN_008346ff
 * calls 00831d15 FUN_00831d15
 * calls 008335f7 FUN_008335f7
 */

int FUN_00834314(undefined4 *param_1)

{
  short *psVar1;
  ushort uVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 local_1f0 [11];
  undefined1 local_1e5 [133];
  undefined1 local_160;
  undefined1 local_15f;
  char local_94 [100];
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_c = *param_1;
  local_10 = 0;
  local_8 = 0;
  local_1c = 0;
  local_28 = 0;
  local_20 = 0;
  psVar4 = (short *)FUN_00831d15(&local_c);
  if (((psVar4 != (short *)0x0) && (iVar5 = FUN_00831d65(&local_c,&local_18), iVar5 != 0)) &&
     ((*psVar4 != (&DAT_009c2a20)[local_18 * 4] ||
      (((*(byte *)(psVar4 + 4) & 0xf) == 0 ||
       ((int)(&DAT_009c2a24)[local_18 * 2] < (int)(*(byte *)(psVar4 + 4) & 0xf))))))) {
    local_14 = (&DAT_009c29f8)[local_18];
    if (local_14 == 1) {
      if ((*(byte *)(psVar4 + 5) & 1) == 0) {
        local_14 = 0;
      }
      else {
        local_20 = FUN_00831e0b(&local_c);
      }
    }
    local_2c = FUN_00834b82(&local_c,psVar4,param_1,&local_1c);
    FUN_008335f7(local_94);
    local_24 = (uint)*(byte *)(psVar4 + 3);
    if (*(byte *)(psVar4 + 3) == 0) {
      local_8 = -1;
    }
    else {
      local_30 = (*(byte *)(psVar4 + 5) & 8) >> 3;
      if (local_30 != 0) {
        local_28 = FUN_0083423f(psVar4,param_1);
      }
      local_8 = 0;
      do {
        if ((int)local_24 <= local_10) {
          return local_8;
        }
        iVar5 = (int)local_94[local_10];
        if (iVar5 < 0) {
          return local_8;
        }
        if ((int)local_24 <= iVar5) {
          return local_8;
        }
        psVar1 = psVar4 + (uint)(ushort)psVar4[iVar5 + 6] * 2;
        uVar2 = FUN_008346ff(100,0xffffffff);
        if (((uVar2 < *(byte *)((int)psVar1 + 1)) && (iVar6 = FUN_0083428e(param_1), iVar6 != 0)) &&
           (iVar6 = FUN_00834d07(psVar4,iVar5,local_2c,local_1c), iVar6 != 0)) {
          if (local_30 != 0) {
            sVar3 = FUN_00832fab(psVar4,iVar5);
            if (sVar3 != (short)local_28) goto LAB_00834504;
          }
          local_15f = 0;
          local_160 = 0;
          puVar7 = local_1e5;
          iVar6 = 0xc;
          do {
            *puVar7 = 0;
            puVar7 = puVar7 + 0xc;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          iVar6 = FUN_008338c4(local_1f0,psVar1,param_1,local_14);
          if (0 < iVar6) {
            local_8 = FUN_00833c45(&local_c,local_1f0,local_20);
            if (local_8 != 0) {
              FUN_00834081(local_1f0,psVar1,iVar5,param_1);
            }
          }
        }
LAB_00834504:
        local_10 = local_10 + 1;
      } while (local_8 == 0);
    }
  }
  return local_8;
}


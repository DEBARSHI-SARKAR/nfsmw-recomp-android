/* speed.exe 00832336 FUN_00832336; analysis pseudocode, not buildable source.
 * calls 00831e32 FUN_00831e32
 * calls 00831f67 FUN_00831f67
 * calls 00834580 FUN_00834580
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00832336(int *param_1,uint param_2)

{
  undefined2 uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  byte *pbVar8;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar3 = FUN_00834580();
  iVar3 = iVar3 + _DAT_009c2a18;
  local_18 = -1;
  local_c = 0xffffffff;
  local_10 = 0;
  local_14 = 0;
  local_8 = 0;
  pbVar8 = &DAT_009c2ae7;
  do {
    iVar4 = 0;
    if ((pbVar8[-1] != 0) && (*pbVar8 == param_2)) {
      psVar2 = *(short **)(pbVar8 + 1);
      local_20 = 0;
      local_24 = 0;
      local_1c = 1;
      if (param_1 != (int *)0x0) {
        local_1c = 0;
        if (0 < *param_1) {
          psVar6 = (short *)param_1[1];
          do {
            if (*psVar6 == *psVar2) {
              local_1c = 1;
              break;
            }
            iVar4 = iVar4 + 1;
            psVar6 = psVar6 + 1;
          } while (iVar4 < *param_1);
        }
      }
      uVar7 = iVar3 - *(int *)(pbVar8 + -7);
      if ((psVar2[1] != 0) && ((ushort)psVar2[1] < uVar7)) {
        local_20 = 1;
      }
      if (((&DAT_009c29f8)[param_2] == 1) && ((*(byte *)(psVar2 + 5) & 2) != 0)) {
        local_24 = **(int **)(pbVar8 + 5);
        local_24 = FUN_00831e32(&local_24,psVar2);
      }
      if (local_20 == 0) {
        if ((local_1c != 0) && (local_24 == 0)) {
          uVar5 = (uint)(ushort)psVar2[2];
          if ((int)local_10 < (int)uVar5) {
            uVar1 = *(undefined2 *)(pbVar8 + -3);
            local_10 = uVar5;
          }
          else {
            if ((uVar5 != local_10) ||
               ((local_c <= uVar7 &&
                ((uVar7 != local_c || (*(ushort *)(pbVar8 + -3) <= (ushort)local_14))))))
            goto LAB_00832464;
            uVar1 = *(undefined2 *)(pbVar8 + -3);
          }
          local_14 = CONCAT22(local_14._2_2_,uVar1);
          local_18 = local_8;
          local_c = uVar7;
        }
      }
      else {
        FUN_00831f67(local_8);
      }
    }
LAB_00832464:
    local_8 = local_8 + 1;
    pbVar8 = pbVar8 + 0x10;
    if (0x9c2be6 < (int)pbVar8) {
      return local_18;
    }
  } while( true );
}


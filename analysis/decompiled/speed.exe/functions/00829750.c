/* speed.exe 00829750 FUN_00829750; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00829750(uint param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  byte local_20 [16];
  byte *local_10;
  uint local_c;
  undefined4 local_8;
  
  if ((param_2 == (int *)0x0) || (param_3 == (undefined4 *)0x0)) {
    return 0xfffffff8;
  }
  iVar4 = 0;
  local_8 = 0xfffffff8;
  do {
    pbVar3 = local_20 + iVar4;
    bVar1 = pbVar3[(int)param_2 - (int)local_20];
    *pbVar3 = bVar1;
    if (bVar1 == 0) break;
    iVar4 = iVar4 + 1;
    *pbVar3 = bVar1 | 0x20;
  } while (iVar4 < 0x10);
  param_2 = &DAT_009c2954;
  do {
    iVar4 = *param_2;
    if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) &&
       ((*(uint *)(iVar4 + 0x14) & param_1 & 0xf000000) != 0)) {
      local_c = (uint)*(byte *)(*(int *)(iVar4 + 0x18) + 0x11);
      iVar6 = 0;
      if (local_c != 0) {
        local_10 = *(byte **)(iVar4 + 0x2c);
        pbVar3 = local_10;
        do {
          if (*pbVar3 == 0) break;
          pbVar2 = local_20;
          pbVar5 = pbVar3;
          do {
            bVar1 = *pbVar2;
            bVar7 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00829814:
              iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_00829819;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar7 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00829814;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00829819:
          if (iVar4 == 0) {
            *param_3 = *(undefined4 *)(local_10 + iVar6 * 0x14 + 0x10);
            local_8 = 0;
            break;
          }
          iVar6 = iVar6 + 1;
          pbVar3 = pbVar3 + 0x14;
        } while (iVar6 < (int)local_c);
      }
    }
    param_2 = param_2 + 1;
    if (0x9c2963 < (int)param_2) {
      return local_8;
    }
  } while( true );
}


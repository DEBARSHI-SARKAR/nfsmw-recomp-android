/* speed.exe 00829640 FUN_00829640; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00829640(uint param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  byte local_1c [16];
  undefined4 local_c;
  int local_8;
  
  if (param_2 == 0) {
    return 0xfffffff8;
  }
  iVar5 = 0;
  local_c = 0xfffffff8;
  do {
    pbVar1 = local_1c + iVar5;
    bVar2 = pbVar1[param_2 - (int)local_1c];
    *pbVar1 = bVar2;
    if (bVar2 == 0) break;
    iVar5 = iVar5 + 1;
    *pbVar1 = bVar2 | 0x20;
  } while (iVar5 < 0x10);
  piVar4 = &DAT_009c2954;
  do {
    iVar5 = *piVar4;
    if ((((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) &&
        ((*(uint *)(iVar5 + 0x14) & param_1 & 0xf000000) != 0)) &&
       (local_8 = 0, *(char *)(*(int *)(iVar5 + 0x18) + 0x11) != '\0')) {
      param_2 = 0;
      do {
        pbVar1 = (byte *)(*(int *)(*piVar4 + 0x2c) + param_2);
        if (*pbVar1 != 0) {
          pbVar3 = local_1c;
          pbVar6 = pbVar1;
          do {
            bVar2 = *pbVar3;
            bVar7 = bVar2 < *pbVar6;
            if (bVar2 != *pbVar6) {
LAB_008296fb:
              iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_00829700;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar3[1];
            bVar7 = bVar2 < pbVar6[1];
            if (bVar2 != pbVar6[1]) goto LAB_008296fb;
            pbVar3 = pbVar3 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar2 != 0);
          iVar5 = 0;
LAB_00829700:
          if (iVar5 == 0) {
            *(undefined4 *)(pbVar1 + 0x10) = param_3;
            local_c = 0;
          }
        }
        param_2 = param_2 + 0x14;
        local_8 = local_8 + 1;
      } while (local_8 < (int)(uint)*(byte *)(*(int *)(*piVar4 + 0x18) + 0x11));
    }
    piVar4 = piVar4 + 1;
    if (0x9c2963 < (int)piVar4) {
      return local_c;
    }
  } while( true );
}


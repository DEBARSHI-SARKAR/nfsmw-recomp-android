/* speed.exe 008338c4 FUN_008338c4; analysis pseudocode, not buildable source.
 * calls 00833706 FUN_00833706
 * calls 00833169 FUN_00833169
 * calls 00832f5b FUN_00832f5b
 * calls 00833382 FUN_00833382
 */

undefined4 FUN_008338c4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  bVar1 = *(byte *)(param_2 + 2);
  bVar2 = bVar1 >> 2;
  local_8 = 1;
  local_10 = 200;
  if (bVar2 < 0xd) {
    if ((bVar1 & 3) == 1) {
      bVar7 = param_4 == 2;
LAB_0083390e:
      if (!bVar7) goto LAB_008338ea;
    }
    else {
      if ((bVar1 & 3) != 2) {
        bVar7 = (bVar1 & 3) == 0;
        goto LAB_0083390e;
      }
      if (param_4 == 2) goto LAB_008338ea;
    }
    FUN_00833706();
    *(byte *)(param_1 + 0x90) = bVar2;
    while (0 < local_10) {
      local_10 = local_10 + -1;
      local_c = 0;
      bVar7 = true;
      iVar6 = param_1;
      if (bVar2 == 0) break;
      do {
        local_14 = 0;
        iVar5 = param_2 + (uint)*(byte *)(param_2 + 8 + local_c) * 4;
        if ('\0' < *(char *)(iVar5 + 4)) {
          pbVar4 = (byte *)(iVar5 + 0xe);
          do {
            if (pbVar4[-2] == 0xff) {
              bVar1 = *pbVar4;
              if ((((bVar1 != 0xff) && ((char)bVar1 < '\0')) &&
                  (iVar3 = FUN_00832f5b(param_2), iVar3 != 0)) &&
                 (*(int *)(iVar3 + (bVar1 & 0x7f) * 4) == 0)) {
                bVar7 = false;
                goto LAB_008339f0;
              }
            }
            local_14 = local_14 + 1;
            pbVar4 = pbVar4 + 8;
          } while (local_14 < *(char *)(iVar5 + 4));
        }
        if (*(char *)(iVar6 + 0xb) == '\0') {
          *(undefined1 *)(iVar6 + 8) = *(undefined1 *)(param_1 + 0x91);
          iVar3 = FUN_00833169(param_3);
          if ((iVar3 == 0) ||
             (iVar5 = FUN_00833382(param_1,param_2,iVar6,iVar5,param_3), iVar5 == 0))
          goto LAB_00833a0f;
          *(char *)(iVar6 + 9) = (char)iVar5;
          *(undefined1 *)(iVar6 + 0xb) = 1;
        }
LAB_008339f0:
        local_c = local_c + 1;
        iVar6 = iVar6 + 0xc;
      } while (local_c < (int)(uint)bVar2);
      if (bVar7) break;
    }
    if (local_10 == 0) {
LAB_00833a0f:
      local_8 = 0;
    }
  }
  else {
LAB_008338ea:
    local_8 = 0;
  }
  return local_8;
}


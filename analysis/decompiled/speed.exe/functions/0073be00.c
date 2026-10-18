/* speed.exe 0073be00 FUN_0073be00; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0073be00(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  iVar3 = 0x400;
  iVar5 = (&DAT_009ae4a0)[param_2] + -1;
  iVar6 = (&DAT_009ae4a0)[param_2];
LAB_0073be20:
  iVar4 = iVar5;
  if (iVar6 < DAT_00904a10) goto LAB_0073be37;
  iVar7 = iVar6;
  if (iVar4 < 0) {
    return local_4;
  }
  goto LAB_0073be9d;
LAB_0073be37:
  iVar5 = iVar6 * 0x14;
  iVar1 = *(int *)(&DAT_009af38c + iVar6 * 0x14) - param_2;
  iVar7 = DAT_00904a10;
  if (iVar1 < iVar3) {
    iVar7 = iVar6 + 1;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    iVar2 = *(int *)(&DAT_009af388 + iVar5) - param_1;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar1 + iVar2 < iVar3) {
      iVar8 = *(int *)(&DAT_009af390 + iVar5) - param_3;
      if (iVar8 < 0) {
        iVar8 = -iVar8;
      }
      iVar8 = iVar1 + iVar2 + iVar8;
      if (iVar8 < iVar3) {
        iVar5 = *(int *)(&DAT_009af394 + iVar5) - param_4;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        iVar8 = iVar8 + iVar5;
        if (iVar8 < iVar3) {
          local_4 = (&DAT_009af398)[iVar6 * 5];
          iVar3 = iVar8;
        }
      }
    }
  }
  iVar5 = iVar4;
  iVar6 = iVar7;
  if (-1 < iVar4) {
LAB_0073be9d:
    iVar1 = iVar4 * 0x14;
    iVar2 = param_2 - *(int *)(&DAT_009af38c + iVar4 * 0x14);
    iVar6 = iVar7;
    if (iVar2 < iVar3) {
      iVar5 = iVar4 + -1;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      iVar7 = *(int *)(&DAT_009af388 + iVar1) - param_1;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (iVar2 + iVar7 < iVar3) {
        iVar8 = *(int *)(&DAT_009af390 + iVar1) - param_3;
        if (iVar8 < 0) {
          iVar8 = -iVar8;
        }
        iVar8 = iVar2 + iVar7 + iVar8;
        if (iVar8 < iVar3) {
          iVar7 = *(int *)(&DAT_009af394 + iVar1) - param_4;
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          iVar8 = iVar8 + iVar7;
          if (iVar8 < iVar3) {
            local_4 = (&DAT_009af398)[iVar4 * 5];
            iVar3 = iVar8;
          }
        }
      }
    }
    else {
      iVar5 = -1;
    }
  }
  goto LAB_0073be20;
}


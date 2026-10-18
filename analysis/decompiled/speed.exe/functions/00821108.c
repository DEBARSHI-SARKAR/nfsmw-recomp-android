/* speed.exe 00821108 FUN_00821108; analysis pseudocode, not buildable source.
 * calls 00824d16 FUN_00824d16
 * calls 00824dd2 FUN_00824dd2
 * calls 00824c1f FUN_00824c1f
 * calls 00824e9d FUN_00824e9d
 * calls 00824ac6 FUN_00824ac6
 * calls 00824e72 FUN_00824e72
 * calls 008249df FUN_008249df
 * calls 00820d85 FUN_00820d85
 * calls 0081e9e7 FUN_0081e9e7
 * calls 00824bef FUN_00824bef
 * calls 00824dfd FUN_00824dfd
 * calls 00822050 FUN_00822050
 * calls 00824491 FUN_00824491
 * calls 00824f14 FUN_00824f14
 * calls 008244ac FUN_008244ac
 * calls 00824a0a FUN_00824a0a
 * calls 00824f3a FUN_00824f3a
 * calls 008245d4 FUN_008245d4
 * calls 0082485e FUN_0082485e
 * calls 00824d41 FUN_00824d41
 * calls 00824799 FUN_00824799
 * calls 00824aec FUN_00824aec
 */

void FUN_00821108(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined8 uVar9;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar1 = param_4;
  uVar2 = FUN_0081e9e7(0x1c);
  *(undefined4 *)(param_4 + 0x40) = uVar2;
  FUN_00822050(uVar2,0x1c);
  iVar6 = *(int *)(param_4 + 0x48) + -1;
  local_10 = iVar6;
  local_c = FUN_008244ac(param_4 + 0xc + iVar6 * 4,4);
  uVar2 = FUN_0081e9e7(local_c << 2);
  param_4 = 0;
  *(undefined4 *)(iVar1 + 0x3c) = uVar2;
  pbVar7 = DAT_009c2304;
  if (0 < local_c) {
    do {
      iVar6 = param_4 * 4;
      uVar2 = FUN_0081e9e7(*(undefined4 *)(&DAT_0090c540 + (uint)*pbVar7 * 4));
      *(undefined4 *)(iVar6 + *(int *)(iVar1 + 0x3c)) = uVar2;
      FUN_00822050(*(undefined4 *)(*(int *)(iVar1 + 0x3c) + iVar6),
                   *(undefined4 *)(&DAT_0090c540 + (uint)*pbVar7 * 4));
      FUN_00822050(&local_20,0x10);
      switch(*pbVar7) {
      case 0:
        FUN_00824491(*(undefined4 *)(*(int *)(iVar1 + 0x3c) + iVar6));
        break;
      case 1:
        local_8 = *(uint *)(iVar6 + *(int *)(iVar1 + 0x3c));
        local_20 = FUN_008244ac(pbVar7 + 4,2);
        local_20 = local_20 << 8;
        local_1c = param_1 << 8;
        local_18 = FUN_008244ac(pbVar7 + 6,2);
        FUN_00824f14(local_8);
        FUN_00824f3a(local_8,&local_20);
        break;
      case 2:
        local_8 = *(uint *)(iVar6 + *(int *)(iVar1 + 0x3c));
        local_20 = FUN_008244ac(pbVar7 + 2,2);
        local_20 = local_20 << 8;
        local_1c = param_1 << 8;
        FUN_00824e72(local_8);
        FUN_00824e9d(local_8,&local_20);
        break;
      case 3:
        local_8 = *(uint *)(iVar6 + *(int *)(iVar1 + 0x3c));
        local_20 = FUN_008244ac(pbVar7 + 2,2);
        local_20 = local_20 << 8;
        local_1c = param_1 << 8;
        FUN_00824dd2(local_8);
        FUN_00824dfd(local_8,&local_20);
        break;
      case 4:
        local_8 = *(uint *)(iVar6 + *(int *)(iVar1 + 0x3c));
        local_20 = FUN_008244ac(pbVar7 + 4,2);
        local_20 = local_20 << 8;
        local_1c = FUN_008244ac(pbVar7 + 6,2);
        local_1c = local_1c << 8;
        local_18 = param_1 << 8;
        FUN_00824d16(local_8);
        FUN_00824d41(local_8,&local_20);
        break;
      case 5:
        local_8 = *(uint *)(iVar6 + *(int *)(iVar1 + 0x3c));
        local_20 = FUN_008244ac(pbVar7 + 2,2);
        local_20 = local_20 << 8;
        local_1c = param_1 << 8;
        local_18 = FUN_008244ac(pbVar7 + 4,2);
        local_18 = local_18 << 8;
        local_14 = FUN_008244ac(pbVar7 + 6,2);
        FUN_00824bef(local_8);
        FUN_00824c1f(local_8,&local_20);
        break;
      case 6:
        local_8 = *(uint *)(iVar6 + *(int *)(iVar1 + 0x3c));
        local_20 = FUN_008244ac(pbVar7 + 2,2);
        FUN_00824ac6(local_8);
        FUN_00824aec(local_8,&local_20);
        break;
      case 7:
        local_8 = *(uint *)(iVar6 + *(int *)(iVar1 + 0x3c));
        local_20 = FUN_008244ac(pbVar7 + 2,2);
        local_1c = param_1 << 8;
        local_18 = FUN_008244ac(pbVar7 + 4,2);
        local_18 = local_18 << 8;
        FUN_008249df(local_8);
        FUN_00824a0a(local_8,&local_20);
        break;
      case 8:
        FUN_0082485e(*(undefined4 *)(*(int *)(iVar1 + 0x3c) + iVar6));
        break;
      case 9:
        FUN_00824799(*(undefined4 *)(*(int *)(iVar1 + 0x3c) + iVar6));
      }
      if (pbVar7[1] != 0) {
        uVar3 = (uint)pbVar7[1];
        if (*pbVar7 == 9) {
          local_8 = uVar3;
          uVar9 = FUN_00820d85(*(undefined4 *)(iVar1 + 0x48),DAT_009c2318._1_1_,uVar3 & 0xf);
          *(undefined4 *)(*(int *)(iVar1 + 0x40) + (int)uVar9 * 4) =
               *(undefined4 *)(iVar6 + (int)((ulonglong)uVar9 >> 0x20));
          uVar9 = FUN_00820d85(*(undefined4 *)(iVar1 + 0x48),DAT_009c2318._1_1_,local_8 >> 4);
        }
        else {
          uVar9 = FUN_00820d85(*(undefined4 *)(iVar1 + 0x48),DAT_009c2318._1_1_,uVar3);
        }
        *(undefined4 *)(*(int *)(iVar1 + 0x40) + (int)uVar9 * 4) =
             *(undefined4 *)(iVar6 + (int)((ulonglong)uVar9 >> 0x20));
      }
      pbVar7 = pbVar7 + *(int *)(&DAT_0090c568 + (uint)*pbVar7 * 4);
      param_4 = param_4 + 1;
      iVar6 = local_10;
    } while (param_4 < local_c);
  }
  iVar8 = DAT_009c2300;
  param_4 = 0;
  iVar6 = iVar1 + 0x24 + iVar6 * 4;
  iVar4 = FUN_008244ac(iVar6,4);
  if (0 < iVar4) {
    do {
      iVar4 = FUN_008244ac(iVar8 + 4,4,*(undefined1 *)(iVar8 + 8),*(undefined1 *)(iVar8 + 9));
      iVar4 = FUN_008244ac(iVar8,4,*(undefined4 *)(*(int *)(iVar1 + 0x3c) + iVar4 * 4));
      FUN_008245d4(*(undefined4 *)(*(int *)(iVar1 + 0x3c) + iVar4 * 4));
      iVar8 = iVar8 + 0xc;
      param_4 = param_4 + 1;
      iVar4 = FUN_008244ac(iVar6,4);
    } while (param_4 < iVar4);
  }
  DAT_009c22f8 = 3000;
  FUN_00822050(*(undefined4 *)(DAT_009c22f4 + param_3 * 4),0x400);
  pbVar7 = DAT_009c2304;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  for (; *pbVar7 != 0; pbVar7 = pbVar7 + iVar6) {
    iVar6 = *(int *)(&DAT_0090c568 + (uint)*pbVar7 * 4);
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + 1;
  }
  puVar5 = (undefined4 *)(iVar1 + 0x68);
  iVar6 = 6;
  do {
    puVar5[-6] = 0x3f800000;
    *puVar5 = 0x3f800000;
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *(undefined4 *)(iVar1 + 0x80) = 0;
  return;
}


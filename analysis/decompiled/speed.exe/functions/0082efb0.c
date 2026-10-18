/* speed.exe 0082efb0 FUN_0082efb0; analysis pseudocode, not buildable source.
 * calls 0082caa0 FUN_0082caa0
 * calls 0082e350 FUN_0082e350
 * calls 0082a1d0 FUN_0082a1d0
 * calls 0082d740 FUN_0082d740
 * calls 0082e980 FUN_0082e980
 * calls 0082ea50 FUN_0082ea50
 * calls 0082f9b0 FUN_0082f9b0
 * calls 0082c380 FUN_0082c380
 * calls 0082bfd0 FUN_0082bfd0
 * calls 0082fa40 FUN_0082fa40
 * calls 0082d6c0 FUN_0082d6c0
 * calls 00829260 FUN_00829260
 * calls 0082c1d0 FUN_0082c1d0
 * calls 0082faf0 FUN_0082faf0
 * calls 0082ed40 FUN_0082ed40
 * calls 0082c020 FUN_0082c020
 * calls 0082d7d0 FUN_0082d7d0
 * calls 0082c3c0 FUN_0082c3c0
 * calls 0082ff80 FUN_0082ff80
 * calls 00830260 FUN_00830260
 * calls 00830890 FUN_00830890
 * calls 0082d700 FUN_0082d700
 * calls 0082e8e0 FUN_0082e8e0
 * calls 0082e850 FUN_0082e850
 * calls 008309f0 FUN_008309f0
 * calls 0082d780 FUN_0082d780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0082efb0(int param_1,uint *param_2)

{
  short sVar1;
  undefined2 uVar2;
  byte *pbVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 local_174 [80];
  undefined1 local_34 [28];
  undefined4 local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_18 = *(undefined4 *)(DAT_009c2964 + 0x1100);
  local_8 = param_2[2];
  local_14 = 0;
  do {
    local_c = 1 << ((byte)local_14 & 0x1f);
    if ((local_c & *param_2) == 0) goto LAB_0082f820;
    local_c = (*param_2 & 0xff000000 | 0xf0000000) & *(uint *)(DAT_009c2964 + 0x14) | local_c;
    pbVar3 = (byte *)FUN_0082caa0(local_c);
    uVar6 = local_8;
    if ((pbVar3 == (byte *)0x0) || (*(int **)(pbVar3 + 300) == (int *)0x0)) goto LAB_0082f820;
    bVar10 = (byte)(*param_2 >> 0x1c) & 1;
    if (((bVar10 != 0) && ((pbVar3[0xb] & 0x80) == 0)) ||
       ((((*param_2 & 0xe0000000) != 0 && (bVar10 == 0)) && (*(int *)(pbVar3 + 8) < 0))))
    goto LAB_0082f820;
    uVar7 = param_2[1];
    switch(uVar7 >> 8 & 0x7f) {
    case 1:
      uVar6 = uVar7 >> 0x14 & 7;
      if (uVar6 == 3) {
        param_2[1] = param_2[1] | 0x8000;
        return 1;
      }
      if (uVar6 == 4) {
        param_2[1] = param_2[1] | 0x8000;
        iVar8 = FUN_0082e8e0(param_2,param_1);
        if (iVar8 != 0) {
          if (*(int *)(param_1 + 8) == DAT_009c2980) {
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          }
          param_2[1] = param_2[1] & 0xffff7fff;
          _DAT_009c29c8 = DAT_009c2980;
        }
        return param_2[1] >> 0xf & 1;
      }
      local_c = FUN_0082ea50((int)(short)local_8,uVar7 >> 0x10 & 3,pbVar3);
      local_10 = FUN_0082ea50((int)local_8 >> 0x10,param_2[1] >> 0x12 & 3,pbVar3,param_1);
      if ((((*(byte *)((int)param_2 + 6) & 3) == 1) && ((short)local_8 == 0x11)) &&
         ((iVar8 = FUN_0082e980(pbVar3), local_10 == 4 && (iVar8 == 1)))) {
        param_2[1] = param_2[1] | 0x8000;
      }
      uVar6 = param_2[1];
      switch(uVar6 >> 0x17 & 7) {
      case 0:
        param_2[1] = uVar6 | 0x8000;
        goto switchD_0082f772_default;
      case 1:
        uVar7 = (uint)(local_c == local_10);
        break;
      case 2:
        uVar7 = (uint)(local_c != local_10);
        break;
      case 3:
        uVar7 = (uint)((int)local_10 < (int)local_c);
        break;
      case 4:
        uVar7 = (uint)((int)local_c < (int)local_10);
        break;
      case 5:
        uVar7 = (uint)((int)local_10 <= (int)local_c);
        break;
      case 6:
        uVar7 = (uint)((int)local_c <= (int)local_10);
        break;
      default:
        goto switchD_0082f772_default;
      }
      param_2[1] = (uVar7 << 0xf ^ uVar6) & 0x8000 ^ uVar6;
switchD_0082f772_default:
      if ((param_2[1] & 0x700000) == 0) {
        if (-1 < (char)(param_2[1] >> 8)) {
          FUN_0082e850(param_2,0,param_1 + 8 + (uint)*(byte *)(param_1 + 0xf) * 0xc);
        }
        _DAT_009c29c4 = DAT_009c2980;
        param_2[1] = param_2[1] ^ 0x8000;
        return 1;
      }
      FUN_0082e850(param_2,param_2[1] >> 0xf & 1,param_1 + 8 + (uint)*(byte *)(param_1 + 0xf) * 0xc)
      ;
      break;
    case 2:
      iVar8 = FUN_0082ea50((int)(short)local_8,uVar7 >> 0x12 & 3,pbVar3,param_1);
      if ((0 < (int)local_8 >> 0x10) && ((int)local_8 >> 0x10 < iVar8)) {
        iVar8 = 0;
      }
      if ((((param_2[1] & 0xc0000) == 0x40000) && (0x13 < (short)local_8)) &&
         ((short)local_8 < 0x17)) {
        if ((*(short *)((int)param_2 + 10) == 0) || (iVar8 < *(short *)((int)param_2 + 10))) {
          *(short *)((int)param_2 + 10) = (short)iVar8;
        }
        if (0 < iVar8) {
          iVar8 = DAT_009c2980 + 3000;
        }
      }
      iVar9 = (**(code **)(*DAT_009c29a8 + 0x10))();
      if (iVar8 <= iVar9 - *(int *)(param_1 + 8)) {
        *(undefined2 *)((int)param_2 + 10) = 0;
        break;
      }
      goto LAB_0082f820;
    case 3:
      if ((short)local_8 == 0) {
        (**(code **)(**(int **)(pbVar3 + 300) + 8))();
        iVar8 = FUN_0082fa40(pbVar3,local_34);
        if (iVar8 < 0) break;
        uVar2 = FUN_0082faf0(local_8 >> 0x10 & 0xf,1 << ((byte)(local_8 >> 0x14) & 0xf),
                             local_8 >> 0x18 & 0xf,local_34);
        *(undefined2 *)(param_2 + 2) = uVar2;
      }
      else {
        iVar8 = (**(code **)(*DAT_009c29a8 + 0x10))();
        if ((int)(short)local_8 <= iVar8 - *(int *)(param_1 + 8)) {
          param_2[1] = param_2[1] | 0x8000;
          param_2[2] = param_2[2] | 0xffff;
        }
      }
      goto LAB_0082f820;
    case 4:
      iVar8 = (int)(short)local_8;
      pbVar11 = pbVar3;
      puVar13 = local_174;
      for (iVar9 = 0x50; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar13 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        puVar13 = puVar13 + 1;
      }
      iVar8 = FUN_0082ea50(iVar8,uVar7 >> 0x10 & 3,pbVar3,param_1);
      local_10 = FUN_0082ea50((int)(local_8 << 8) >> 0x18,param_2[1] >> 0x12 & 3,pbVar3,param_1);
      if ((iVar8 < -1) || ((int)(uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x18) + 0x12) < iVar8)) {
        if (((byte)DAT_0090d1e4 & 0x20) != 0) {
          FUN_0082f9b0("( %.8s )  PATHACTION_BRANCHTO bad node ID = %d, \n",pbVar3 + 0xfc,iVar8);
        }
        iVar8 = -1;
      }
      puVar4 = (uint *)0x0;
      if (-1 < iVar8) {
        if ((int)local_10 < 0) {
          puVar4 = (uint *)FUN_0082a1d0(iVar8);
        }
        else {
          local_c = (uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x18) + 0x12);
          iVar9 = 0;
          if (local_c != 0) {
            do {
              puVar4 = (uint *)FUN_0082a1d0(iVar9);
              iVar12 = iVar8;
              if ((((*puVar4 >> 0x15 & 0x3f) == local_10) && ((short)*puVar4 == 0)) &&
                 (iVar12 = iVar8 + -1, iVar8 = iVar9, iVar12 == 0)) break;
              iVar8 = iVar12;
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)local_c);
          }
          if ((int)local_c <= iVar9) goto LAB_0082f820;
        }
        if ((puVar4 == (uint *)0x0) || ((*(byte *)((int)puVar4 + 2) & 0x1f) != *pbVar3))
        goto LAB_0082f820;
      }
      if ((*(uint *)(pbVar3 + 8) & 0x4000000) == 0) {
        sVar1 = *(short *)(pbVar3 + 4);
        if ((local_8 & 0x1000000) != 0) {
          FUN_00829260(pbVar3);
        }
        iVar9 = FUN_0082e350(pbVar3);
        if (iVar9 != 0) {
          *(uint *)(pbVar3 + 8) = *(uint *)(pbVar3 + 8) | 0x1f00000;
          uVar2 = FUN_00830260((int)sVar1,iVar8,pbVar3[1],1);
          *(undefined2 *)(pbVar3 + 4) = uVar2;
          iVar8 = FUN_0082ff80(pbVar3);
          if (-1 < iVar8) {
            param_2[1] = param_2[1] | 0x8000;
            goto LAB_0082f820;
          }
        }
        *(undefined4 *)(DAT_009c2964 + 0x1100) = local_18;
        puVar13 = local_174;
        for (iVar8 = 0x50; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pbVar3 = *puVar13;
          puVar13 = puVar13 + 1;
          pbVar3 = pbVar3 + 4;
        }
      }
      goto LAB_0082f820;
    case 5:
      uVar5 = FUN_0082ea50(local_8 >> 0x10,uVar7 >> 0x12 & 3,pbVar3,param_1);
      FUN_0082d6c0(pbVar3,local_8 & 0xff,uVar5,(int)(local_8 << 0x11) >> 0x19);
      break;
    case 6:
      uVar5 = FUN_0082ea50(local_8 >> 0x10,uVar7 >> 0x12 & 3,pbVar3,param_1);
      FUN_0082d740(pbVar3,local_8 & 0xff,uVar5,(int)(local_8 << 0x11) >> 0x19);
      break;
    case 7:
      uVar5 = FUN_0082ea50(local_8 >> 0x10,uVar7 >> 0x12 & 3,pbVar3,param_1);
      FUN_0082d700(pbVar3,local_8 & 0xff,uVar5,(int)(local_8 << 0x11) >> 0x19);
      break;
    case 8:
      uVar5 = FUN_0082ea50((int)(short)local_8,uVar7 >> 0x12 & 3,pbVar3,param_1);
      uVar6 = param_2[1];
      param_2[1] = uVar6 | 0x8000;
      FUN_0082ed40(local_8 >> 0x10 & 0xff,(uVar6 & 0x30000) >> 0x10,uVar5,pbVar3,param_1);
      goto LAB_0082f820;
    case 9:
      local_10 = local_8 & 0xffffff;
      uVar6 = FUN_0082ea50(local_10,uVar7 >> 0x10 & 3,pbVar3,param_1);
      iVar8 = FUN_0082bfd0(uVar6,((uVar6 == local_10) - 1 & 0x10000) - 1);
      if ((iVar8 != 0) && (iVar8 = FUN_0082c1d0(iVar8), iVar8 != 0)) {
        FUN_0082c020(*(uint *)(DAT_009c2964 + 0x14) | 0xf0000000,iVar8);
      }
      break;
    case 10:
    case 0xb:
    case 0xc:
      if ((local_8 & 0xffffff) == 0) {
        FUN_0082c3c0();
      }
      else {
        iVar8 = FUN_0082bfd0(local_8 & 0xffffff,0xffffffff);
        if (iVar8 != 0) {
          FUN_0082c380(iVar8,uVar6 >> 0x18 & 1);
        }
      }
      break;
    case 0xd:
      local_10 = FUN_0082ea50(local_8 >> 0x10,uVar7 >> 0x12 & 3,pbVar3,param_1);
      uVar5 = FUN_0082ea50((int)(short)local_8,*(byte *)((int)param_2 + 6) & 3,pbVar3,param_1);
      if (DAT_009c2970 != (code *)0x0) {
        (*DAT_009c2970)(local_c,local_10,uVar5);
      }
      break;
    case 0xe:
      local_10 = local_8 & 0xff;
      local_c = FUN_0082ea50(local_10,uVar7 >> 0x10 & 3,pbVar3,param_1);
      iVar8 = FUN_0082ea50((int)local_8 >> 0x10,param_2[1] >> 0x12 & 3,pbVar3,param_1);
      uVar6 = param_2[1];
      param_2[1] = uVar6 | 0x8000;
      uVar7 = local_c;
      switch(local_8 >> 8 & 0xff) {
      case 1:
        uVar7 = local_c + iVar8;
        break;
      case 2:
        uVar7 = local_c - iVar8;
        break;
      case 3:
        uVar7 = iVar8 * local_c;
        break;
      case 4:
        uVar7 = (int)local_c / iVar8;
        break;
      case 5:
        uVar7 = (int)local_c % iVar8;
      }
      FUN_0082ed40(local_10,(uVar6 & 0x30000) >> 0x10,uVar7,pbVar3,param_1);
      goto LAB_0082f820;
    case 0xf:
      iVar8 = FUN_0082ea50(local_8 & 0xffff,uVar7 >> 0x12 & 3,pbVar3,param_1);
      param_2[1] = param_2[1] | 0x8000;
      if (iVar8 < 1) {
        *(uint *)(pbVar3 + 8) =
             *(uint *)(pbVar3 + 8) ^ (local_8 << 9 ^ *(uint *)(pbVar3 + 8)) & 0x2000000;
        (**(code **)(**(int **)(pbVar3 + 300) + 0x10))(local_8 >> 0x10 & 1);
      }
      else if ((local_8 & 0x10000) == 0) {
        *(int *)(pbVar3 + 0x74) = DAT_009c2980 + iVar8;
      }
      else {
        *(int *)(pbVar3 + 0x70) = DAT_009c2980 + iVar8;
      }
      goto LAB_0082f820;
    case 0x10:
      uVar5 = FUN_0082ea50(local_8 & 0xff,uVar7 >> 0x12 & 3,pbVar3,param_1);
      param_2[1] = param_2[1] | 0x8000;
      if ((char)(local_8 >> 8) == '\0') {
        FUN_008309f0(pbVar3,uVar5);
      }
      else {
        FUN_00830890();
      }
      goto LAB_0082f820;
    case 0x11:
      uVar5 = FUN_0082ea50(local_8 >> 0x12,uVar7 >> 0x12 & 3,pbVar3,param_1);
      FUN_0082d780(pbVar3,local_8 & 0x3fff,uVar5,(int)(local_8 << 0xf) >> 0x1d);
      break;
    case 0x12:
      uVar5 = FUN_0082ea50(local_8 >> 0x12,uVar7 >> 0x12 & 3,pbVar3,param_1);
      FUN_0082d7d0(pbVar3,local_8 & 0x3fff,uVar5,(int)(local_8 << 0xf) >> 0x1d);
      break;
    default:
      goto switchD_0082f07a_default;
    }
    uVar7 = param_2[1];
switchD_0082f07a_default:
    param_2[1] = uVar7 | 0x8000;
LAB_0082f820:
    local_14 = local_14 + 1;
    if (0x17 < local_14) {
      return param_2[1] >> 0xf & 1;
    }
  } while( true );
}


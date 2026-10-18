/* speed.exe 00800a34 FUN_00800a34; analysis pseudocode, not buildable source.
 * calls 0080710b FUN_0080710b
 * calls 00800177 FUN_00800177
 */

undefined1 FUN_00800a34(uint param_1,short *param_2,int param_3,byte *param_4,byte *param_5)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  uint uVar15;
  undefined1 *puVar16;
  int iVar17;
  
  iVar4 = param_1;
  iVar1 = param_3 * 0xc6 + 0x3ba + param_1;
  iVar2 = *(int *)(*(int *)(param_1 + 0x13c) + 0x13c);
  if ((*(int *)(param_1 + 0x948) != 0) ||
     (iVar17 = param_1 + 0x150, *(char *)(param_1 + 0x19d) == '\0')) {
    iVar17 = param_1 + 0x170;
  }
  iVar13 = param_3 * 0xb + 0x3a4 + param_1;
  puVar16 = (undefined1 *)(param_1 + (param_3 * 3 + 0x10e + (uint)*param_4 + (uint)*param_5) * 5);
  iVar12 = FUN_0080710b(iVar17,*puVar16);
  if (iVar12 == 0) {
    *param_5 = 0;
    bVar3 = 0;
    *param_4 = 0;
  }
  else {
    *param_5 = 1;
    *param_4 = 1;
    iVar12 = FUN_0080710b(iVar17,puVar16[2]);
    if (iVar12 == 0) {
      bVar3 = 1;
      sVar11 = FUN_00800177();
      uVar14 = -sVar11 ^ 1;
    }
    else {
      bVar3 = 2;
      iVar12 = FUN_0080710b(iVar17,puVar16[3]);
      if (iVar12 == 0) {
        iVar12 = FUN_0080710b(iVar17,puVar16[4]);
        if (iVar12 == 0) {
          uVar14 = 2;
        }
        else {
          sVar11 = FUN_0080710b(iVar17,*(undefined1 *)(iVar13 + 5));
          uVar14 = sVar11 + 3;
        }
        sVar11 = FUN_00800177();
        uVar14 = -sVar11 ^ uVar14;
      }
      else {
        iVar12 = FUN_0080710b(iVar17,*(undefined1 *)(iVar13 + 6));
        if (iVar12 == 0) {
          iVar13 = FUN_0080710b(iVar17,*(undefined1 *)(iVar13 + 7));
          iVar13 = iVar13 + 5;
        }
        else {
          iVar12 = FUN_0080710b(iVar17,*(undefined1 *)(iVar13 + 8));
          if (iVar12 == 0) {
            iVar13 = FUN_0080710b(iVar17,*(undefined1 *)(iVar13 + 9));
            iVar13 = iVar13 + 7;
          }
          else {
            iVar13 = FUN_0080710b(iVar17,*(undefined1 *)(iVar13 + 10));
            iVar13 = iVar13 + 9;
          }
        }
        iVar13 = iVar13 * 0x10;
        param_1 = (uint)*(ushort *)(&DAT_008c48d0 + iVar13);
        param_4 = (byte *)(int)*(short *)(&DAT_008c48d2 + iVar13);
        do {
          iVar12 = FUN_0080710b(iVar17,(&DAT_008c48d4)[(int)param_4 + iVar13]);
          param_1 = param_1 + (iVar12 << ((byte)param_4 & 0x1f));
          param_4 = (byte *)((int)param_4 + -1);
        } while (-1 < (int)param_4);
        sVar11 = FUN_00800177();
        uVar14 = -sVar11 ^ (ushort)param_1;
      }
    }
    *param_2 = uVar14 + sVar11;
  }
  param_5._3_1_ = 1;
  do {
    uVar15 = (uint)param_5._3_1_;
    puVar16 = (undefined1 *)((*(int *)(&DAT_008c4990 + uVar15 * 4) + (uint)bVar3 * 6) * 0xb + iVar1)
    ;
    if (((param_5._3_1_ < 2) || (bVar3 != 0)) &&
       (iVar13 = FUN_0080710b(iVar17,*puVar16), iVar13 == 0)) {
      iVar13 = FUN_0080710b(iVar17,puVar16[1]);
      if (iVar13 == 0) {
        param_5._3_1_ = param_5._3_1_ + 1;
        break;
      }
      bVar3 = 0;
      puVar16 = (undefined1 *)((uint)(5 < param_5._3_1_) * 0xe + 0x564 + iVar4);
      iVar13 = FUN_0080710b(iVar17,*puVar16);
      if (iVar13 == 0) {
        iVar13 = FUN_0080710b(iVar17,puVar16[1]);
        if (iVar13 == 0) {
          cVar5 = FUN_0080710b(iVar17,puVar16[2]);
          cVar5 = cVar5 + '\x01';
        }
        else {
          cVar5 = FUN_0080710b(iVar17,puVar16[3]);
          cVar5 = cVar5 + '\x03';
        }
      }
      else {
        iVar13 = FUN_0080710b(iVar17,puVar16[4]);
        if (iVar13 == 0) {
          iVar13 = FUN_0080710b(iVar17,puVar16[5]);
          if (iVar13 == 0) {
            cVar5 = FUN_0080710b(iVar17,puVar16[6]);
            cVar5 = cVar5 + '\x05';
          }
          else {
            cVar5 = FUN_0080710b(iVar17,puVar16[7]);
            cVar5 = cVar5 + '\a';
          }
        }
        else {
          cVar5 = FUN_0080710b(iVar17,puVar16[8]);
          cVar6 = FUN_0080710b(iVar17,puVar16[9]);
          cVar7 = FUN_0080710b(iVar17,puVar16[10]);
          cVar8 = FUN_0080710b(iVar17,puVar16[0xb]);
          cVar9 = FUN_0080710b(iVar17,puVar16[0xc]);
          cVar10 = FUN_0080710b(iVar17,puVar16[0xd]);
          cVar5 = cVar5 + cVar6 * '\x02' + cVar7 * '\x04' + cVar8 * '\b' + cVar9 * '\x10' + '\t' +
                  cVar10 * ' ';
        }
      }
      param_5._3_1_ = param_5._3_1_ + cVar5;
    }
    else {
      iVar13 = FUN_0080710b(iVar17,puVar16[2]);
      if (iVar13 == 0) {
        bVar3 = 1;
        sVar11 = FUN_00800177();
        uVar14 = -sVar11 ^ 1;
      }
      else {
        bVar3 = 2;
        iVar13 = FUN_0080710b(iVar17,puVar16[3]);
        if (iVar13 == 0) {
          iVar13 = FUN_0080710b(iVar17,puVar16[4]);
          if (iVar13 == 0) {
            uVar14 = 2;
          }
          else {
            sVar11 = FUN_0080710b(iVar17,puVar16[5]);
            uVar14 = sVar11 + 3;
          }
          sVar11 = FUN_00800177();
          uVar14 = -sVar11 ^ uVar14;
        }
        else {
          iVar13 = FUN_0080710b(iVar17,puVar16[6]);
          if (iVar13 == 0) {
            iVar13 = FUN_0080710b(iVar17,puVar16[7]);
            iVar13 = iVar13 + 5;
          }
          else {
            iVar13 = FUN_0080710b(iVar17,puVar16[8]);
            if (iVar13 == 0) {
              iVar13 = FUN_0080710b(iVar17,puVar16[9]);
              iVar13 = iVar13 + 7;
            }
            else {
              iVar13 = FUN_0080710b(iVar17,puVar16[10]);
              iVar13 = iVar13 + 9;
            }
          }
          iVar13 = iVar13 * 0x10;
          param_1 = (uint)*(ushort *)(&DAT_008c48d0 + iVar13);
          param_4 = (byte *)(int)*(short *)(&DAT_008c48d2 + iVar13);
          do {
            iVar12 = FUN_0080710b(iVar17,(&DAT_008c48d4)[(int)param_4 + iVar13]);
            param_1 = param_1 + (iVar12 << ((byte)param_4 & 0x1f));
            param_4 = (byte *)((int)param_4 + -1);
          } while (-1 < (int)param_4);
          sVar11 = FUN_00800177();
          uVar14 = -sVar11 ^ (ushort)param_1;
        }
      }
      param_5._3_1_ = param_5._3_1_ + 1;
      param_2[*(int *)(iVar2 + (uint)*(byte *)(uVar15 + 0x5c0 + iVar4) * 4)] = uVar14 + sVar11;
    }
  } while (param_5._3_1_ < 0x40);
  return *(undefined1 *)((byte)(param_5._3_1_ - 1) + 0x600 + iVar4);
}


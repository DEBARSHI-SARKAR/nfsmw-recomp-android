/* speed.exe 00451a30 FUN_00451a30; analysis pseudocode, not buildable source.
 * calls 007c5f30 __allmul
 */

undefined8 FUN_00451a30(uint param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte *in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint local_50;
  uint local_48;
  uint local_44;
  uint local_3c;
  uint local_38;
  
  uVar8 = 0x7f4a7c13;
  local_50 = param_1;
  local_3c = param_3;
  local_48 = param_2;
  local_44 = param_3;
  local_38 = 0x7f4a7c13;
  uVar4 = 0x9e3779b9;
  uVar2 = param_2;
  if (0x17 < param_1) {
    param_2 = param_1 / 0x18;
    do {
      lVar10 = __allmul(in_EAX[0xf],0,0x100,0);
      lVar10 = __allmul(lVar10 + (ulonglong)in_EAX[0xe],0x100,0);
      lVar10 = __allmul(lVar10 + (ulonglong)in_EAX[0xd],0x100,0);
      lVar10 = __allmul(lVar10 + (ulonglong)in_EAX[0xc],0x100,0);
      lVar10 = __allmul(lVar10 + (ulonglong)in_EAX[0xb],0x100,0);
      lVar10 = __allmul(lVar10 + (ulonglong)in_EAX[10],0x100,0);
      lVar10 = __allmul(lVar10 + (ulonglong)in_EAX[9],0x100,0);
      lVar10 = lVar10 + CONCAT44(local_3c,(uint)in_EAX[8]) + (ulonglong)uVar2;
      lVar11 = __allmul(in_EAX[0x17],0,0x100,0);
      lVar11 = __allmul(lVar11 + (ulonglong)in_EAX[0x16],0x100,0);
      lVar11 = __allmul(lVar11 + (ulonglong)in_EAX[0x15],0x100,0);
      lVar11 = __allmul(lVar11 + (ulonglong)in_EAX[0x14],0x100,0);
      lVar11 = __allmul(lVar11 + (ulonglong)in_EAX[0x13],0x100,0);
      lVar11 = __allmul(lVar11 + (ulonglong)in_EAX[0x12],0x100,0);
      lVar11 = __allmul(lVar11 + (ulonglong)in_EAX[0x11],0x100,0);
      lVar11 = lVar11 + CONCAT44(uVar4,(uint)in_EAX[0x10]);
      lVar1 = lVar11 + (ulonglong)local_38;
      uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
      lVar12 = __allmul(in_EAX[7],0,0x100,0);
      lVar12 = __allmul(lVar12 + (ulonglong)in_EAX[6],0x100,0);
      lVar12 = __allmul(lVar12 + (ulonglong)in_EAX[5],0x100,0);
      lVar12 = __allmul(lVar12 + (ulonglong)in_EAX[4],0x100,0);
      lVar12 = __allmul(lVar12 + (ulonglong)in_EAX[3],0x100,0);
      lVar12 = __allmul(lVar12 + (ulonglong)in_EAX[2],0x100,0);
      uVar13 = __allmul(lVar12 + (ulonglong)in_EAX[1],0x100,0);
      uVar2 = (uint)uVar13 + (uint)*in_EAX;
      uVar8 = uVar2 - (uint)lVar1;
      uVar4 = uVar8 - (uint)lVar10;
      uVar3 = uVar4 + local_48;
      iVar9 = ((((((int)((ulonglong)uVar13 >> 0x20) + (uint)CARRY4((uint)uVar13,(uint)*in_EAX)) -
                 uVar5) - (uint)(uVar2 < (uint)lVar1)) - (int)((ulonglong)lVar10 >> 0x20)) -
              (uint)(uVar8 < (uint)lVar10)) + local_44 + (uint)CARRY4(uVar4,local_48);
      uVar8 = uVar3 ^ uVar5 >> 0xb;
      lVar10 = (lVar10 - (lVar11 + (ulonglong)local_38)) - CONCAT44(iVar9,uVar8);
      uVar2 = (uint)lVar10 ^ uVar8 << 9;
      uVar5 = (uint)((ulonglong)lVar10 >> 0x20) ^ (iVar9 * 0x200 | uVar3 >> 0x17);
      lVar10 = (lVar1 - CONCAT44(uVar5,uVar2)) - CONCAT44(iVar9,uVar8);
      uVar3 = (uint)lVar10 ^ (uVar2 >> 8 | uVar5 << 0x18);
      uVar6 = (uint)((ulonglong)lVar10 >> 0x20) ^ uVar5 >> 8;
      iVar9 = (((iVar9 - uVar6) - (uint)(uVar8 < uVar3)) - uVar5) - (uint)(uVar8 - uVar3 < uVar2);
      uVar4 = (uVar8 - uVar3) - uVar2 ^ uVar6 >> 6;
      uVar8 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 0x17;
      uVar7 = (((uVar5 - uVar6) - (uint)(uVar2 < uVar3)) - iVar9) - (uint)(uVar2 - uVar3 < uVar4) ^
              (iVar9 * 0x800000 | uVar4 >> 9);
      uVar5 = (uVar3 - uVar8) - uVar4 ^ (uVar8 >> 5 | uVar7 << 0x1b);
      uVar3 = (((uVar6 - uVar7) - (uint)(uVar3 < uVar8)) - iVar9) - (uint)(uVar3 - uVar8 < uVar4) ^
              uVar7 >> 5;
      iVar9 = (((iVar9 - uVar3) - (uint)(uVar4 < uVar5)) - uVar7) - (uint)(uVar4 - uVar5 < uVar8);
      uVar2 = (uVar4 - uVar5) - uVar8 ^ uVar3 >> 3;
      uVar4 = (uVar8 - uVar5) - uVar2;
      uVar8 = (((uVar7 - uVar3) - (uint)(uVar8 < uVar5)) - iVar9) - (uint)(uVar8 - uVar5 < uVar2);
      uVar7 = uVar8 ^ uVar2 << 0x11;
      uVar6 = (((uVar3 - uVar7) - (uint)(uVar5 < uVar4)) - iVar9) - (uint)(uVar5 - uVar4 < uVar2) ^
              uVar7 >> 0xb;
      uVar3 = (uVar5 - uVar4) - uVar2 ^ (uVar4 >> 0xb | uVar8 * 0x200000);
      local_48 = (uVar2 - uVar3) - uVar4 ^ (uVar3 >> 0xc | uVar6 << 0x14);
      local_44 = (((iVar9 - uVar6) - (uint)(uVar2 < uVar3)) - uVar7) - (uint)(uVar2 - uVar3 < uVar4)
                 ^ uVar6 >> 0xc;
      uVar2 = (uVar4 - uVar3) - local_48 ^ local_48 << 0x12;
      local_3c = (((uVar7 - uVar6) - (uint)(uVar4 < uVar3)) - local_44) -
                 (uint)(uVar4 - uVar3 < local_48) ^ (local_44 << 0x12 | local_48 >> 0xe);
      uVar8 = (uVar3 - uVar2) - local_48 ^ (uVar2 >> 0x16 | local_3c << 10);
      uVar4 = (((uVar6 - local_3c) - (uint)(uVar3 < uVar2)) - local_44) -
              (uint)(uVar3 - uVar2 < local_48) ^ local_3c >> 0x16;
      local_50 = local_50 - 0x18;
      in_EAX = in_EAX + 0x18;
      param_2 = param_2 - 1;
      local_38 = uVar8;
    } while (param_2 != 0);
  }
  lVar1 = CONCAT44(local_44,local_48);
  lVar11 = CONCAT44(local_3c,uVar2);
  lVar10 = CONCAT44(uVar4 + CARRY4(uVar8,param_1),uVar8 + param_1);
  switch(local_50) {
  case 0x17:
    lVar12 = __allmul(in_EAX[0x16],0,0,0x1000000);
    lVar10 = lVar12 + lVar10;
  case 0x16:
    lVar12 = __allmul(in_EAX[0x15],0,0,0x10000);
    lVar10 = lVar10 + lVar12;
  case 0x15:
    lVar12 = __allmul(in_EAX[0x14],0,0,0x100);
    lVar10 = lVar10 + lVar12;
  case 0x14:
    lVar12 = __allmul(in_EAX[0x13],0,0,1);
    lVar10 = lVar10 + lVar12;
  case 0x13:
    lVar12 = __allmul(in_EAX[0x12],0,0x1000000,0);
    lVar10 = lVar10 + lVar12;
  case 0x12:
    lVar12 = __allmul(in_EAX[0x11],0,0x10000,0);
    lVar10 = lVar10 + lVar12;
  case 0x11:
    lVar12 = __allmul(in_EAX[0x10],0,0x100,0);
    lVar10 = lVar10 + lVar12;
  case 0x10:
    lVar12 = __allmul(in_EAX[0xf],0,0,0x1000000);
    lVar11 = lVar12 + lVar11;
  case 0xf:
    lVar12 = __allmul(in_EAX[0xe],0,0,0x10000);
    lVar11 = lVar11 + lVar12;
  case 0xe:
    lVar12 = __allmul(in_EAX[0xd],0,0,0x100);
    lVar11 = lVar11 + lVar12;
  case 0xd:
    lVar12 = __allmul(in_EAX[0xc],0,0,1);
    lVar11 = lVar11 + lVar12;
  case 0xc:
    lVar12 = __allmul(in_EAX[0xb],0,0x1000000,0);
    lVar11 = lVar11 + lVar12;
  case 0xb:
    lVar12 = __allmul(in_EAX[10],0,0x10000,0);
    lVar11 = lVar11 + lVar12;
  case 10:
    lVar12 = __allmul(in_EAX[9],0,0x100,0);
    lVar11 = lVar11 + lVar12;
  case 9:
    lVar11 = lVar11 + (ulonglong)in_EAX[8];
  case 8:
    lVar12 = __allmul(in_EAX[7],0,0,0x1000000);
    lVar1 = lVar12 + lVar1;
  case 7:
    lVar12 = __allmul(in_EAX[6],0,0,0x10000);
    lVar1 = lVar1 + lVar12;
  case 6:
    lVar12 = __allmul(in_EAX[5],0,0,0x100);
    lVar1 = lVar1 + lVar12;
  case 5:
    lVar12 = __allmul(in_EAX[4],0,0,1);
    lVar1 = lVar1 + lVar12;
  case 4:
    lVar12 = __allmul(in_EAX[3],0,0x1000000,0);
    lVar1 = lVar1 + lVar12;
  case 3:
    lVar12 = __allmul(in_EAX[2],0,0x10000,0);
    lVar1 = lVar1 + lVar12;
  case 2:
    lVar12 = __allmul(in_EAX[1],0,0x100,0);
    lVar1 = lVar1 + lVar12;
  case 1:
    lVar1 = lVar1 + (ulonglong)*in_EAX;
  default:
    lVar1 = (lVar1 - lVar10) - lVar11;
    uVar2 = (uint)lVar1;
    iVar9 = (int)((ulonglong)lVar1 >> 0x20);
    uVar8 = uVar2 ^ (uint)((ulonglong)lVar10 >> 0x2b);
    lVar11 = (lVar11 - lVar10) - CONCAT44(iVar9,uVar8);
    uVar5 = (uint)lVar11 ^ uVar8 << 9;
    uVar4 = (uint)((ulonglong)lVar11 >> 0x20) ^ (iVar9 * 0x200 | uVar2 >> 0x17);
    lVar10 = (lVar10 - CONCAT44(uVar4,uVar5)) - CONCAT44(iVar9,uVar8);
    uVar7 = (uint)lVar10 ^ (uVar5 >> 8 | uVar4 << 0x18);
    uVar3 = (uint)((ulonglong)lVar10 >> 0x20) ^ uVar4 >> 8;
    iVar9 = (((iVar9 - uVar3) - (uint)(uVar8 < uVar7)) - uVar4) - (uint)(uVar8 - uVar7 < uVar5);
    uVar2 = (uVar8 - uVar7) - uVar5 ^ uVar3 >> 6;
    uVar6 = (uVar5 - uVar7) - uVar2 ^ uVar2 << 0x17;
    uVar4 = (((uVar4 - uVar3) - (uint)(uVar5 < uVar7)) - iVar9) - (uint)(uVar5 - uVar7 < uVar2) ^
            (iVar9 * 0x800000 | uVar2 >> 9);
    uVar3 = (((uVar3 - uVar4) - (uint)(uVar7 < uVar6)) - iVar9) - (uint)(uVar7 - uVar6 < uVar2) ^
            uVar4 >> 5;
    uVar8 = (uVar7 - uVar6) - uVar2 ^ (uVar6 >> 5 | uVar4 << 0x1b);
    iVar9 = (((iVar9 - uVar3) - (uint)(uVar2 < uVar8)) - uVar4) - (uint)(uVar2 - uVar8 < uVar6);
    uVar2 = (uVar2 - uVar8) - uVar6 ^ uVar3 >> 3;
    uVar5 = (uVar6 - uVar8) - uVar2;
    uVar4 = (((uVar4 - uVar3) - (uint)(uVar6 < uVar8)) - iVar9) - (uint)(uVar6 - uVar8 < uVar2);
    uVar7 = uVar4 ^ uVar2 << 0x11;
    uVar4 = (uVar8 - uVar5) - uVar2 ^ (uVar5 >> 0xb | uVar4 * 0x200000);
    uVar3 = (((uVar3 - uVar7) - (uint)(uVar8 < uVar5)) - iVar9) - (uint)(uVar8 - uVar5 < uVar2) ^
            uVar7 >> 0xb;
    uVar8 = (uVar2 - uVar4) - uVar5 ^ (uVar4 >> 0xc | uVar3 << 0x14);
    uVar2 = (((iVar9 - uVar3) - (uint)(uVar2 < uVar4)) - uVar7) - (uint)(uVar2 - uVar4 < uVar5) ^
            uVar3 >> 0xc;
    uVar6 = (uVar5 - uVar4) - uVar8 ^ uVar8 << 0x12;
    uVar5 = (((uVar7 - uVar3) - (uint)(uVar5 < uVar4)) - uVar2) - (uint)(uVar5 - uVar4 < uVar8) ^
            (uVar2 << 0x12 | uVar8 >> 0xe);
    return CONCAT44((((uVar3 - uVar5) - (uint)(uVar4 < uVar6)) - uVar2) -
                    (uint)(uVar4 - uVar6 < uVar8) ^ uVar5 >> 0x16,
                    (uVar4 - uVar6) - uVar8 ^ (uVar6 >> 0x16 | uVar5 << 10));
  }
}


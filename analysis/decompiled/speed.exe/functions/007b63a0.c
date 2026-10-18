/* speed.exe 007b63a0 FUN_007b63a0; analysis pseudocode, not buildable source.
 * calls 007afff0 FUN_007afff0
 * calls 00747ae0 FUN_00747ae0
 * calls 0056bb20 FUN_0056bb20
 * calls 00460bf0 FUN_00460bf0
 * calls 00672e80 FUN_00672e80
 * calls 007aec00 FUN_007aec00
 * calls 007a4b10 FUN_007a4b10
 * calls 00747ac0 FUN_00747ac0
 * calls 00739850 FUN_00739850
 * calls 007a5f40 FUN_007a5f40
 * calls 007a5ee0 FUN_007a5ee0
 * calls 004647e0 FUN_004647e0
 * calls 00460c50 FUN_00460c50
 * calls 00515d70 FUN_00515d70
 * calls 00747a50 FUN_00747a50
 * calls 0056bc10 FUN_0056bc10
 */

void __fastcall FUN_007b63a0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined1 local_40 [64];
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 0xc);
  if (*(char *)(iVar2 + 0x1c) != '\0') {
    uVar4 = *(undefined4 *)(iVar2 + 0x18);
    iVar2 = *(int *)(iVar2 + 0x14);
    if (iVar2 == 7) {
      iVar2 = FUN_0056bb20();
      uVar10 = *(undefined4 *)(param_1 + 0x2c);
      if (iVar2 != 1) {
        uVar3 = FUN_0056bc10(0xedd14807);
        uVar4 = FUN_007afff0(uVar4);
        uVar4 = FUN_0056bc10(uVar4,uVar3);
        FUN_00515d70(uVar10,"%s: %s",uVar4);
        return;
      }
      uVar3 = FUN_0056bc10(0xedd14807);
      uVar4 = FUN_007afff0(uVar4);
      uVar4 = FUN_0056bc10(uVar4,uVar3);
      FUN_00515d70(uVar10,"%s : %s",uVar4);
      return;
    }
    iVar5 = FUN_00672e80(&DAT_009b9ec8,uVar4);
    iVar5 = (iVar2 - iVar5) + 6;
    iVar2 = FUN_0056bb20();
    uVar10 = *(undefined4 *)(param_1 + 0x2c);
    if (iVar2 == 1) {
      uVar3 = FUN_007a5ee0(iVar5);
      uVar3 = FUN_0056bc10(uVar3);
      uVar4 = FUN_007afff0(uVar4);
      uVar4 = FUN_0056bc10(uVar4,uVar3);
      FUN_00515d70(uVar10,"%s : %s",uVar4);
      return;
    }
    uVar3 = FUN_007a5ee0(iVar5);
    uVar3 = FUN_0056bc10(uVar3);
    uVar4 = FUN_007afff0(uVar4);
    goto LAB_007b6c20;
  }
  switch(*(undefined4 *)(iVar2 + 0x10)) {
  case 0x2c:
  case 0x3e:
  case 0x3f:
    uVar4 = FUN_00460bf0("CARBONFIBRE");
    iVar5 = FUN_00747a50(uVar4);
    if (iVar5 != 0) {
      uVar10 = 0;
      uVar4 = FUN_00460bf0("CARBONFIBRE",0);
      iVar5 = FUN_00747ac0(uVar4,uVar10);
      if (iVar5 != 0) {
        iVar5 = FUN_0056bb20();
        uVar4 = *(undefined4 *)(param_1 + 0x2c);
        uVar10 = *(undefined4 *)(iVar2 + 0x10);
        uVar3 = 0;
        if (iVar5 != 1) {
          uVar9 = FUN_00460bf0("LANGUAGEHASH",0);
          uVar3 = FUN_00747ae0(uVar9,uVar3);
          uVar3 = FUN_0056bc10(uVar3);
          uVar9 = 0x5415b874;
          goto LAB_007b6b1b;
        }
        uVar9 = FUN_00460bf0("LANGUAGEHASH");
        uVar3 = FUN_00747ae0(uVar9,uVar3);
        uVar3 = FUN_0056bc10(uVar3);
        uVar9 = 0x5415b874;
        goto LAB_007b6acb;
      }
    }
  default:
LAB_007b6b85:
    uVar4 = FUN_00460bf0("LANGUAGEHASH");
    iVar5 = FUN_00747a50(uVar4);
    if (iVar5 != 0) {
      iVar5 = FUN_0056bb20();
      uVar10 = *(undefined4 *)(param_1 + 0x2c);
      uVar4 = *(undefined4 *)(iVar2 + 0x10);
      uVar3 = 0;
      if (iVar5 == 1) {
        uVar9 = FUN_00460bf0("LANGUAGEHASH");
        uVar3 = FUN_00747ae0(uVar9,uVar3);
        uVar3 = FUN_0056bc10(uVar3);
        uVar4 = FUN_007a5f40(uVar4);
        uVar4 = FUN_0056bc10(uVar4,uVar3);
        FUN_00515d70(uVar10,"%s : %s",uVar4);
        return;
      }
      uVar9 = FUN_00460bf0("LANGUAGEHASH",0);
      uVar3 = FUN_00747ae0(uVar9,uVar3);
      uVar3 = FUN_0056bc10(uVar3);
      uVar4 = FUN_007a5f40(uVar4);
LAB_007b6c20:
      uVar4 = FUN_0056bc10(uVar4,uVar3);
      FUN_00515d70(uVar10,"%s: %s",uVar4);
      return;
    }
    iVar5 = FUN_0056bb20();
    uVar4 = *(undefined4 *)(param_1 + 0x2c);
    uVar10 = *(undefined4 *)(iVar2 + 0x10);
    if (iVar5 == 1) {
      uVar3 = FUN_00739850();
LAB_007b6c58:
      uVar10 = FUN_007a5f40(uVar10);
      uVar10 = FUN_0056bc10(uVar10,uVar3);
      FUN_00515d70(uVar4,"%s : %s",uVar10);
      return;
    }
    uVar3 = FUN_00739850();
    break;
  case 0x42:
    iVar5 = *(int *)(iVar2 + 0xc);
    iVar8 = FUN_007a4b10(0x42);
    if (iVar5 != iVar8) {
      uVar4 = FUN_00739850();
      FUN_004647e0(local_40,0x40,&DAT_008941f8,uVar4);
      iVar5 = FUN_00460c50(local_40);
      if (iVar5 < 1) {
        return;
      }
      iVar8 = iVar5 + -6;
      for (; iVar8 <= iVar5; iVar5 = iVar5 + -1) {
        local_40[iVar5] = 0;
      }
      iVar5 = FUN_0056bb20();
      uVar4 = *(undefined4 *)(param_1 + 0x2c);
      uVar10 = *(undefined4 *)(iVar2 + 0x10);
      if (iVar5 != 1) {
        cVar1 = FUN_00747ac0(0xeb0101e2,0);
        iVar2 = (int)cVar1;
        puVar11 = local_40;
        uVar10 = FUN_007a5f40(uVar10);
        uVar10 = FUN_0056bc10(uVar10,puVar11,iVar2);
        FUN_00515d70(uVar4,"%s: %s %$d\"",uVar10);
        return;
      }
      cVar1 = FUN_00747ac0(0xeb0101e2,0);
      iVar2 = (int)cVar1;
      puVar11 = local_40;
      uVar10 = FUN_007a5f40(uVar10);
      uVar10 = FUN_0056bc10(uVar10,puVar11,iVar2);
      FUN_00515d70(uVar4,"%s : %s %$d\"",uVar10);
      return;
    }
LAB_007b6b53:
    iVar5 = FUN_0056bb20();
    uVar4 = *(undefined4 *)(param_1 + 0x2c);
    uVar10 = *(undefined4 *)(iVar2 + 0x10);
    uVar3 = 0x60a662f5;
    if (iVar5 == 1) {
      uVar3 = FUN_0056bc10(0x60a662f5);
      goto LAB_007b6c58;
    }
    goto LAB_007b6b75;
  case 0x4c:
    uVar4 = 0x452b5481;
    uVar6 = FUN_00747ae0(0xebb03e66,0);
    if (uVar6 < 0x3437a53) {
      if (uVar6 == 0x3437a52) {
        uVar4 = 0x452b5481;
      }
      else if (uVar6 == 0xda27) {
        uVar4 = 0xb3100a3e;
      }
      else if (uVar6 == 0x2daab07) {
        uVar4 = 0xb6763cde;
      }
    }
    else if (uVar6 == 0x3797533) {
      uVar4 = 0xb715070a;
    }
    iVar5 = FUN_0056bb20();
    uVar10 = *(undefined4 *)(iVar2 + 0x10);
    uVar3 = 0;
    if (iVar5 != 1) {
      uVar9 = *(undefined4 *)(param_1 + 0x2c);
      uVar7 = FUN_00460bf0("SPEECHCOLOUR",0);
      uVar3 = FUN_00747ae0(uVar7,uVar3);
      uVar3 = FUN_0056bc10(uVar3);
      uVar4 = FUN_0056bc10(uVar4,uVar3);
      uVar10 = FUN_007a5f40(uVar10);
      uVar4 = FUN_0056bc10(uVar10,uVar4);
      FUN_00515d70(uVar9,"%s: %s %s",uVar4);
      return;
    }
    uVar9 = *(undefined4 *)(param_1 + 0x2c);
    uVar7 = FUN_00460bf0("SPEECHCOLOUR");
    uVar3 = FUN_00747ae0(uVar7,uVar3);
    uVar3 = FUN_0056bc10(uVar3);
    uVar4 = FUN_0056bc10(uVar4,uVar3);
    uVar10 = FUN_007a5f40(uVar10);
    uVar4 = FUN_0056bc10(uVar10,uVar4);
    FUN_00515d70(uVar9,"%s : %s %s",uVar4);
    return;
  case 0x4d:
    if (*(int *)(iVar2 + 0xc) == 0) goto LAB_007b6b53;
    goto LAB_007b6b85;
  case 0x4e:
    iVar5 = FUN_0056bb20();
    uVar4 = *(undefined4 *)(param_1 + 0x2c);
    uVar10 = *(undefined4 *)(iVar2 + 0x10);
    uVar3 = 0;
    if (iVar5 != 1) {
      uVar9 = FUN_00460bf0("SPEECHCOLOUR",0);
      uVar3 = FUN_00747ae0(uVar9,uVar3);
      uVar3 = FUN_0056bc10(uVar3);
      uVar9 = 0xb3100a3e;
LAB_007b6b1b:
      uVar3 = FUN_0056bc10(uVar9,uVar3);
      uVar10 = FUN_007a5f40(uVar10);
      uVar10 = FUN_0056bc10(uVar10,uVar3);
      FUN_00515d70(uVar4,"%s: %s %s",uVar10);
      return;
    }
    uVar9 = FUN_00460bf0("SPEECHCOLOUR");
    uVar3 = FUN_00747ae0(uVar9,uVar3);
    uVar3 = FUN_0056bc10(uVar3);
    uVar9 = 0xb3100a3e;
LAB_007b6acb:
    uVar3 = FUN_0056bc10(uVar9,uVar3);
    uVar10 = FUN_007a5f40(uVar10);
    uVar10 = FUN_0056bc10(uVar10,uVar3);
    FUN_00515d70(uVar4,"%s : %s %s",uVar10);
    return;
  case 0x53:
  case 0x5b:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x73:
  case 0x7b:
    if (*(int *)(iVar2 + 0xc) == 0) {
      iVar5 = FUN_0056bb20();
      uVar4 = *(undefined4 *)(param_1 + 0x2c);
      uVar10 = *(undefined4 *)(iVar2 + 0x10);
      if (iVar5 != 1) {
        uVar3 = FUN_0056bc10(0x7177dc17);
        uVar10 = FUN_007a5f40(uVar10);
        uVar10 = FUN_0056bc10(uVar10,uVar3);
        uVar10 = FUN_0056bc10(0x955980bc,uVar10);
        FUN_00515d70(uVar4,"%s: %s - %s",uVar10);
        return;
      }
      uVar3 = FUN_0056bc10(0x7177dc17);
      uVar10 = FUN_007a5f40(uVar10);
      uVar10 = FUN_0056bc10(uVar10,uVar3);
      uVar10 = FUN_0056bc10(0x955980bc,uVar10);
      FUN_00515d70(uVar4,"%s : %s - %s",uVar10);
      return;
    }
    FUN_00747ae0(0xebb03e66,0);
    uVar10 = 0;
    uVar4 = FUN_00460bf0(&DAT_008b4cbc,0);
    FUN_00747ae0(uVar4,uVar10);
    switch(*(undefined4 *)(iVar2 + 0x10)) {
    case 99:
    case 0x6b:
      uVar4 = 0x7d212cfa;
      break;
    case 100:
    case 0x6c:
      uVar4 = 0x7d212cfb;
      break;
    case 0x65:
    case 0x6d:
      uVar4 = 0x7d212cfc;
      break;
    case 0x66:
    case 0x6e:
      uVar4 = 0x7d212cfd;
      break;
    case 0x67:
    case 0x6f:
      uVar4 = 0x7d212cfe;
      break;
    case 0x68:
    case 0x70:
      uVar4 = 0x7d212cff;
      break;
    default:
      iVar5 = FUN_0056bb20();
      uVar4 = *(undefined4 *)(param_1 + 0x2c);
      uVar10 = *(undefined4 *)(iVar2 + 0x10);
      if (iVar5 != 1) {
        uVar3 = FUN_00739850();
        uVar10 = FUN_007a5f40(uVar10);
        uVar10 = FUN_0056bc10(uVar10,uVar3);
        uVar10 = FUN_0056bc10(0x955980bc,uVar10);
        FUN_00515d70(uVar4,"%s: %s %s",uVar10);
        return;
      }
      uVar3 = FUN_00739850();
      uVar10 = FUN_007a5f40(uVar10);
      uVar10 = FUN_0056bc10(uVar10,uVar3);
      uVar10 = FUN_0056bc10(0x955980bc,uVar10);
      FUN_00515d70(uVar4,"%s : %s %s",uVar10);
      return;
    }
    iVar5 = FUN_0056bb20();
    uVar10 = *(undefined4 *)(param_1 + 0x2c);
    uVar3 = *(undefined4 *)(iVar2 + 0x10);
    if (iVar5 != 1) {
      uVar9 = FUN_00739850();
      uVar4 = FUN_0056bc10(uVar4,uVar9);
      uVar3 = FUN_007a5f40(uVar3);
      uVar4 = FUN_0056bc10(uVar3,uVar4);
      uVar4 = FUN_0056bc10(0x955980bc,uVar4);
      FUN_00515d70(uVar10,"%s: %s %s %s",uVar4);
      return;
    }
    uVar9 = FUN_00739850();
    uVar4 = FUN_0056bc10(uVar4,uVar9);
    uVar3 = FUN_007a5f40(uVar3);
    uVar4 = FUN_0056bc10(uVar3,uVar4);
    uVar4 = FUN_0056bc10(0x955980bc,uVar4);
    FUN_00515d70(uVar10,"%s : %s %s %s",uVar4);
    return;
  case 0x71:
    iVar5 = FUN_007aec00(0x71);
    iVar8 = FUN_007aec00(0x72);
    if (iVar5 == 0) {
      return;
    }
    if (iVar8 == 0) {
      return;
    }
    if ((*(int *)(*(int *)(iVar5 + 0xc) + 0xc) != 0) && (*(int *)(*(int *)(iVar8 + 0xc) + 0xc) != 0)
       ) {
      iVar5 = FUN_0056bb20();
      uVar4 = *(undefined4 *)(iVar2 + 0x10);
      if (iVar5 != 1) {
        uVar10 = *(undefined4 *)(param_1 + 0x2c);
        uVar3 = FUN_00739850();
        uVar3 = FUN_00739850(uVar3);
        uVar4 = FUN_007a5f40(uVar4);
        uVar4 = FUN_0056bc10(uVar4,uVar3);
        FUN_00515d70(uVar10,"%s: %s%s",uVar4);
        return;
      }
      uVar10 = *(undefined4 *)(param_1 + 0x2c);
      uVar3 = FUN_00739850();
      uVar3 = FUN_00739850(uVar3);
      uVar4 = FUN_007a5f40(uVar4);
      uVar4 = FUN_0056bc10(uVar4,uVar3);
      FUN_00515d70(uVar10,"%s : %s%s",uVar4);
      return;
    }
    iVar5 = FUN_0056bb20();
    uVar4 = *(undefined4 *)(param_1 + 0x2c);
    uVar10 = *(undefined4 *)(iVar2 + 0x10);
    uVar3 = 0xbe434a38;
    if (iVar5 == 1) {
      uVar3 = FUN_0056bc10(0xbe434a38);
      goto LAB_007b6c58;
    }
LAB_007b6b75:
    uVar3 = FUN_0056bc10(uVar3);
  }
  uVar10 = FUN_007a5f40(uVar10);
  uVar10 = FUN_0056bc10(uVar10,uVar3);
  FUN_00515d70(uVar4,"%s: %s",uVar10);
  return;
}


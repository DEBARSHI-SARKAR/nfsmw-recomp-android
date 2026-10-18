/* speed.exe 007af4f0 FUN_007af4f0; analysis pseudocode, not buildable source.
 * calls 00576700 FUN_00576700
 * calls 00747ae0 FUN_00747ae0
 * calls 00751540 FUN_00751540
 * calls 00460bf0 FUN_00460bf0
 * calls 00652ad0 _malloc
 * calls 005768a0 FUN_005768a0
 * calls 007a4e50 FUN_007a4e50
 * calls 007aeca0 FUN_007aeca0
 * calls 00500bc0 FUN_00500bc0
 * calls 00575b00 FUN_00575b00
 * calls 007aef70 FUN_007aef70
 * calls 0056f250 FUN_0056f250
 * calls 007a4ff0 FUN_007a4ff0
 * calls 00747e10 FUN_00747e10
 * calls 0058a8d0 FUN_0058a8d0
 * calls 005816b0 FUN_005816b0
 * calls 007493a0 FUN_007493a0
 * calls 0056e2c0 FUN_0056e2c0
 * calls 0056f100 FUN_0056f100
 * calls 00747e30 FUN_00747e30
 */

void __thiscall FUN_007af4f0(int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined4 local_10;
  uint local_8;
  
  if (DAT_009b9ec4 == 0) {
    local_10 = 0xffffffff;
  }
  else {
    local_10 = FUN_005816b0();
  }
  uVar4 = FUN_00747e10(local_10,param_2,0,0xffffffff);
  iVar5 = FUN_005768a0(param_2,0);
  uVar10 = uVar4 & *(uint *)(PTR_DAT_00905e9c + 0xc);
  do {
    if (uVar10 == 0) {
      return;
    }
    if (param_2 == 0x17) {
      iVar7 = FUN_00751540(0,1);
      if ((iVar7 != 0) && (iVar7 = FUN_00500bc0(iVar7), iVar7 != 0)) goto LAB_007af643;
      iVar7 = 0x17;
      goto LAB_007af855;
    }
    if (param_2 == 0x42) {
      if ((param_4 != 0) && (uVar10 = FUN_00747ae0(0xebb03e66,0), uVar10 != param_4)) {
        iVar7 = 0x42;
        goto LAB_007af855;
      }
LAB_007af643:
      iVar7 = param_2;
      if (((iVar5 == 0x2c) || (iVar5 == 0x2e)) || (iVar5 == 0x30)) {
        uVar6 = 0;
        if (iVar5 == 0x2c) {
          uVar6 = 1;
        }
        else if (iVar5 == 0x2e) {
          uVar6 = 2;
        }
        else if (iVar5 == 0x30) {
          uVar6 = 3;
        }
        cVar3 = FUN_00575b00();
        if ((cVar3 != '\0') && (cVar3 = FUN_00576700(2,iVar5,uVar6,0,1), cVar3 == '\0'))
        goto LAB_007af855;
        puVar11 = _malloc(0x2c);
        if (puVar11 != (undefined4 *)0x0) {
          puVar11[5] = uVar6;
          goto LAB_007af6c5;
        }
LAB_007af753:
        puVar11 = (undefined4 *)0x0;
LAB_007af755:
        local_8 = 1;
        cVar3 = FUN_007a4e50(puVar11,0);
        if (cVar3 == '\0') {
          cVar3 = FUN_007a4ff0(puVar11,0);
          if (cVar3 != '\0') {
            local_8 = 3;
          }
        }
        else {
          local_8 = 2;
        }
        if (puVar11 == (undefined4 *)0x0) {
LAB_007af80e:
          iVar8 = FUN_007aeca0(puVar11);
          if (iVar8 != 0) {
            local_8 = local_8 | 0x20;
          }
        }
        else {
          if (*(char *)(puVar11 + 7) == '\0') {
            uVar6 = puVar11[4];
            FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
            uVar12 = FUN_005816b0(uVar6);
            iVar8 = FUN_0056f250(uVar12,uVar6);
            bVar13 = iVar8 == puVar11[3];
LAB_007af808:
            if (!bVar13) goto LAB_007af80e;
          }
          else {
            iVar8 = puVar11[6];
            if (*(char *)(puVar11 + 10) == '\0') {
              iVar9 = FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
              bVar13 = puVar11[5] == *(int *)(iVar9 + 0x118 + iVar8 * 4);
              goto LAB_007af808;
            }
            iVar9 = FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
            if ((*(uint *)(iVar9 + 0x134) & 1 << ((byte)iVar8 & 0x1f)) == 0) goto LAB_007af80e;
          }
          local_8 = local_8 | 0x10;
        }
        puVar11[8] = local_8;
        uVar6 = FUN_007aef70(puVar11);
        puVar11[9] = uVar6;
        piVar2 = *(int **)(param_3 + 4);
        piVar1 = puVar11 + 1;
        *piVar2 = (int)piVar1;
        *(int **)(param_3 + 4) = piVar1;
        puVar11[2] = piVar2;
        *piVar1 = param_3;
      }
      else {
        cVar3 = FUN_00575b00();
        if (cVar3 == '\0') {
          if (((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 0xe & 1) != 0) ||
             ((*(byte *)(uVar4 + 5) & 0xe0) != 0xe0)) goto LAB_007af6a7;
        }
        else {
          cVar3 = FUN_0058a8d0(2,param_2,uVar4,0,1);
          if (cVar3 != '\0') {
LAB_007af6a7:
            puVar11 = _malloc(0x2c);
            if (puVar11 == (undefined4 *)0x0) goto LAB_007af753;
            puVar11[5] = (int)(char)(*(byte *)(uVar4 + 5) >> 5);
LAB_007af6c5:
            *puVar11 = &PTR_FUN_008b7518;
            puVar11[3] = uVar4;
            puVar11[4] = param_2;
            puVar11[6] = 7;
            *(undefined1 *)(puVar11 + 7) = 0;
            puVar11[8] = 1;
            puVar11[9] = 0;
            *(undefined1 *)(puVar11 + 10) = 0;
            goto LAB_007af755;
          }
        }
      }
LAB_007af855:
      uVar4 = FUN_00747e30(uVar4,local_10,iVar7,0,0xffffffff);
    }
    else {
      if (param_2 != 0x4d) goto LAB_007af643;
      uVar6 = FUN_007493a0(uVar4,local_10,1);
      iVar7 = FUN_00500bc0(uVar6);
      iVar8 = FUN_00747ae0(0xebb03e66,0);
      iVar9 = FUN_00460bf0(&DAT_008b516c);
      if (((iVar7 != 0) && ((*(byte *)(uVar4 + 5) & 0x1f) == param_4)) &&
         ((iVar8 != iVar9 || (cVar3 = FUN_0056e2c0(), cVar3 != '\0')))) goto LAB_007af643;
      uVar4 = FUN_00747e30(uVar4,local_10,0x4d,0,0xffffffff);
    }
    uVar10 = *(uint *)(PTR_DAT_00905e9c + 0xc) & uVar4;
  } while( true );
}


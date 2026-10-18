/* speed.exe 005e4210 FUN_005e4210; analysis pseudocode, not buildable source.
 * calls 004543c0 FUN_004543c0
 * calls 00452c50 FUN_00452c50
 * calls 004546c0 FUN_004546c0
 * calls 00457380 FUN_00457380
 * calls 00458660 FUN_00458660
 * calls 006269b0 FUN_006269b0
 * calls 00460d20 FUN_00460d20
 * calls 00452bd0 FUN_00452bd0
 * calls 00452d40 FUN_00452d40
 * calls 004574f0 FUN_004574f0
 * calls 00452d00 FUN_00452d00
 * calls 004547f0 FUN_004547f0
 * calls 00454c30 FUN_00454c30
 */

void __thiscall FUN_005e4210(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_30;
  uint local_28 [3];
  undefined1 local_1c [12];
  uint *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004547f0(local_28);
  do {
    uVar1 = local_28[0];
    uVar9 = 0;
    if (local_28[0] == 0) {
      ExceptionList = local_c;
      return;
    }
    FUN_004546c0(local_1c,local_28[0]);
    local_4 = 0;
    if ((uVar1 != 0x916e0e78) && (cVar2 = FUN_00452c50(), cVar2 != '\0')) {
      uVar3 = FUN_00458660();
      iVar4 = FUN_004574f0(uVar3);
      iVar4 = FUN_00460d20(*(undefined4 *)(iVar4 + 4),"GCollectionKey");
      if (iVar4 == 0) {
        uVar3 = FUN_00452d00();
        iVar4 = FUN_00457380(uVar3);
        if ((*(byte *)(iVar4 + 0xe) & 1) == 0) {
          local_30 = 1;
        }
        else {
          local_30 = FUN_00452d40();
        }
        if (0 < local_30) {
          do {
            if (local_10 == (uint *)0x0) {
              puVar5 = (uint *)FUN_00454c30(uVar9);
LAB_005e4308:
              if (puVar5 == (uint *)0x0) goto LAB_005e430c;
            }
            else {
              puVar5 = local_10;
              if (uVar9 == 0) goto LAB_005e4308;
LAB_005e430c:
              puVar5 = (uint *)FUN_006269b0(4);
            }
            uVar6 = *puVar5 >> ((byte)*(undefined4 *)(param_1 + 0x60) & 0x1f);
            uVar8 = 0;
            uVar7 = uVar6;
            do {
              uVar7 = *(uint *)(param_1 + 0x70) & uVar7;
              if (*(uint *)(*(int *)(param_1 + 0x78) + uVar7 * 8) == uVar6) {
                uVar7 = *(uint *)(*(int *)(param_1 + 0x78) + 4 + uVar7 * 8);
                if (uVar7 != 0) {
                  uVar3 = *(undefined4 *)(DAT_0091e00c + 0x5c);
                  puVar5 = (uint *)(*(int *)(param_2 + 0x1c) + (uint)*(ushort *)(param_2 + 0x1a) * 8
                                   );
                  *(ushort *)(param_2 + 0x1a) = *(ushort *)(param_2 + 0x1a) + 1;
                  *puVar5 = (uVar1 >> ((byte)uVar3 & 0x1f)) << 8 | uVar9 & 0xff;
                  puVar5[1] = uVar7;
                }
                break;
              }
              uVar7 = uVar7 + 1;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= *(uint *)(param_1 + 0x74));
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < local_30);
        }
      }
    }
    local_4 = 0xffffffff;
    FUN_00452bd0();
    FUN_004543c0();
  } while( true );
}


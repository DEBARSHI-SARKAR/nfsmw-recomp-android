/* speed.exe 005529f0 FUN_005529f0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005b5b70 FUN_005b5b70
 * calls 00548300 FUN_00548300
 * calls 0056de70 FUN_0056de70
 * calls 00572070 FUN_00572070
 * calls 0057fe00 FUN_0057fe00
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 0059bd30 FUN_0059bd30
 * calls 00593560 FUN_00593560
 * calls 005b7580 FUN_005b7580
 * calls 00591d90 FUN_00591d90
 * calls 00514c70 FUN_00514c70
 * calls 005ddaf0 FUN_005ddaf0
 * calls 005881c0 FUN_005881c0
 * calls 00593880 FUN_00593880
 * calls 005e47c0 FUN_005e47c0
 */

void __fastcall FUN_005529f0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  uint local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870a04;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00593880();
  bVar1 = *(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    uVar4 = FUN_00573140("CHECK_%d",iVar3);
    pcVar12 = *(char **)(param_1 + 0x10);
    if (pcVar12 != (char *)0x0) {
      pcVar5 = pcVar12;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (pcVar5 != pcVar12 + 1) {
        if (DAT_0091d218 < 1) {
          iVar6 = FUN_005b5b70(pcVar12);
          if (iVar6 == 0) {
            iVar6 = FUN_005b7580(pcVar12);
            if (iVar6 == 0) goto LAB_00552ae7;
            goto LAB_00552aa4;
          }
        }
        else {
          FUN_00572070();
          iVar6 = FUN_00591d90(pcVar12);
LAB_00552aa4:
          if (iVar6 == 0) goto LAB_00552ae7;
        }
        iVar6 = FUN_005b8550(uVar4);
        if ((iVar6 != 0) &&
           (*(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x2400001,
           *(int *)(iVar6 + 0x18) == 5)) {
          iVar11 = *(int *)(iVar6 + 100);
          iVar6 = *(int *)(iVar6 + 0x60);
          if (0 < iVar6) {
            do {
              FUN_00514c70(iVar11);
              iVar11 = *(int *)(iVar11 + 4);
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
      }
    }
LAB_00552ae7:
    if (8 < iVar3) {
      uVar10 = 0;
      iVar3 = FUN_005ddaf0();
      if (iVar3 != 0) {
        do {
          iVar3 = FUN_005e47c0(uVar10);
          *(char *)(iVar3 + 0xeb + param_1) = (char)uVar10;
          uVar10 = uVar10 + 1;
          uVar7 = FUN_005ddaf0();
        } while (uVar10 < uVar7);
      }
      local_1c = 0;
      iVar3 = FUN_005ddaf0();
      if (iVar3 != 0) {
        do {
          if ((local_1c < 4) || (((local_1c < 8 && (bVar1 < 0xd)) || (bVar1 < 9)))) {
            puVar8 = _malloc(0x1c);
            local_4 = 0;
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              cVar2 = *(char *)(local_1c + 0xec + param_1);
              uVar4 = FUN_0057fe00(local_1c + 1);
              uVar9 = FUN_0056de70(local_1c + 1);
              FUN_005881c0(uVar9,uVar4);
              puVar8[6] = (int)cVar2;
              *puVar8 = &PTR_FUN_0089c3dc;
            }
            local_4 = 0xffffffff;
            FUN_0059bd30(puVar8);
          }
          local_1c = local_1c + 1;
          uVar10 = FUN_005ddaf0();
        } while (local_1c < uVar10);
      }
      *(undefined4 *)(param_1 + 0x54) = 0xb5117fde;
      FUN_00593560(0);
      FUN_00548300();
      (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}


/* speed.exe 0075bed0 FUN_0075bed0; analysis pseudocode, not buildable source.
 * calls 0075b460 FUN_0075b460
 * calls 0075b540 FUN_0075b540
 * calls 0075ba50 FUN_0075ba50
 * calls 00757610 FUN_00757610
 * calls 00759e20 FUN_00759e20
 * calls 0075be60 FUN_0075be60
 * calls 0064ad40 FUN_0064ad40
 * calls 0075b7a0 FUN_0075b7a0
 * calls 0045f150 FUN_0045f150
 * calls 0075b400 FUN_0075b400
 * calls 0075b930 FUN_0075b930
 * calls 00752f80 FUN_00752f80
 * calls 0075b640 FUN_0075b640
 * calls 00503360 FUN_00503360
 * calls 0075b320 FUN_0075b320
 */

void __fastcall FUN_0075bed0(int *param_1)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined1 local_168 [348];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008812cb;
  local_c = ExceptionList;
  iVar7 = param_1[7] - param_1[8];
  ExceptionList = &local_c;
  if ((0 < iVar7) && (ExceptionList = &local_c, iVar3 = FUN_0045f150(DAT_009b0a0c), iVar3 < 0x14)) {
    iVar4 = 0x14 - iVar3;
    if (iVar7 < 0x14 - iVar3) {
      iVar4 = iVar7;
    }
    FUN_0075be60(iVar7 - iVar4);
  }
  uVar2 = DAT_008f815c;
  DAT_009b0a10 = DAT_009b0a10 + 1;
  DAT_008f815c = 4;
  local_4 = 0;
  iVar7 = FUN_0075b540();
  if (((iVar7 == 0) && (iVar7 = FUN_0075b640(), iVar7 == 0)) &&
     (iVar7 = FUN_0075b7a0("CARS\\TEXTURES.BIN",1), iVar7 == 0)) {
    piVar6 = (int *)param_1[0x16];
    if (piVar6 != param_1 + 0x16) {
      do {
        if ((0 < piVar6[2]) && (piVar6[3] != 2)) {
          piVar6[3] = 1;
          if (piVar6[5] == 0) {
            piVar6[5] = 1;
          }
          iVar7 = piVar6[0xd2];
          if (*(char *)(*(int *)(iVar7 + 0x1c) + 0x16) == '\0') {
            FUN_0075b320(*(int *)(iVar7 + 0x1c),
                         *(int *)(*(int *)(piVar6[0xd2] + 8) * 0xd0 + 0x94 + DAT_009b09d8) != 2);
            DAT_008f815c = uVar2;
            DAT_009b0a10 = DAT_009b0a10 + -1;
            ExceptionList = local_c;
            return;
          }
          if ((*(int *)(iVar7 + 0x18) == 0) && (iVar7 = FUN_0075b460(iVar7), iVar7 != 0)) {
LAB_0075c1af:
            DAT_008f815c = uVar2;
            DAT_009b0a10 = DAT_009b0a10 + -1;
            ExceptionList = local_c;
            return;
          }
          iVar7 = piVar6[0xd4];
          if (*(char *)(iVar7 + 0xc) == '\0') {
            if ((*(char *)(*(int *)(iVar7 + 0x18) + 0xe) == '\0') &&
               (iVar3 = FUN_0075b400(*(int *)(iVar7 + 0x18),1), iVar3 != 0)) goto LAB_0075c122;
            iVar3 = FUN_0075b930(iVar7,1);
            if (iVar3 != 0) goto LAB_0075c195;
          }
          if (*(char *)(iVar7 + 0xd) == '\0') {
            if (param_1[2] == 0) {
              FUN_00759e20();
            }
            if ((*(int *)(iVar7 + 0x1c) != 0) && (*(char *)(*(int *)(iVar7 + 0x1c) + 0xe) == '\0'))
            {
              FUN_0075b400(*(undefined4 *)(iVar7 + 0x1c),param_1[2] == 2);
LAB_0075c195:
              DAT_008f815c = uVar2;
              DAT_009b0a10 = DAT_009b0a10 + -1;
              ExceptionList = local_c;
              return;
            }
            iVar3 = FUN_0075b930(iVar7,0);
            if (iVar3 != 0) goto LAB_0075c1af;
          }
          if (*(char *)(iVar7 + 0xe) == '\0') {
            FUN_0075ba50(iVar7);
          }
          if (((param_1[2] != 0) && (*(char *)(iVar7 + 0xd) == '\x02')) &&
             (*(char *)(iVar7 + 0xe) != '\0')) {
            iVar3 = *(int *)(iVar7 + 0x180);
            if (0 < iVar3) {
              piVar5 = (int *)(iVar7 + 0x184);
              do {
                if (*piVar5 != 0) {
                  psVar1 = (short *)(*piVar5 + 0xc);
                  *psVar1 = *psVar1 + -1;
                }
                piVar5 = piVar5 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            iVar3 = FUN_00757610(local_168,0x57,iVar7 + 0x184,*(undefined4 *)(iVar7 + 0x180));
            *(undefined4 *)(iVar7 + 0x180) = 0;
            if (iVar3 != 0) {
              FUN_00503360(local_168,iVar3);
            }
            if (*(int *)(iVar7 + 0x1c) != 0) {
              psVar1 = (short *)(*(int *)(iVar7 + 0x1c) + 0xc);
              *psVar1 = *psVar1 + -1;
              FUN_00752f80(*(undefined4 *)(iVar7 + 0x1c));
              *(undefined4 *)(iVar7 + 0x1c) = 0;
            }
          }
          piVar6[3] = 2;
        }
        piVar6 = (int *)*piVar6;
      } while (piVar6 != param_1 + 0x16);
    }
    if (*param_1 != 0) {
      param_1[5] = 2;
      FUN_0064ad40(&LAB_0073aa90,param_1);
    }
  }
LAB_0075c122:
  DAT_009b0a10 = DAT_009b0a10 + -1;
  ExceptionList = local_c;
  DAT_008f815c = uVar2;
  return;
}


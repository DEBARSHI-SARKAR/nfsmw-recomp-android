/* speed.exe 0055a760 FUN_0055a760; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005b5b70 FUN_005b5b70
 * calls 005938a0 FUN_005938a0
 * calls 00525220 FUN_00525220
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 00588120 FUN_00588120
 * calls 005881f0 FUN_005881f0
 * calls 0055a280 FUN_0055a280
 * calls 005b7580 FUN_005b7580
 * calls 00591d90 FUN_00591d90
 * calls 007a1fa0 FUN_007a1fa0
 * calls 00547e30 FUN_00547e30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0055a760(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  void *pvVar6;
  bool bVar7;
  char *pcVar8;
  undefined4 uVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870d7a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005938a0(param_2,3,3,1);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089d7ac;
  param_1[0xb] = &PTR_LAB_0089d7a0;
  FUN_0055a280();
  bVar7 = *(int *)(param_2 + 8) != 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(bool *)(param_1 + 0x6d) = bVar7;
  *(undefined1 *)((int)param_1 + 0x1b5) = 1;
  param_1[0x6e] = 0;
  if (!bVar7) {
    iVar2 = FUN_007a1fa0();
    *(undefined1 *)(iVar2 + 0x58) = 0;
  }
  _DAT_0091ca40 = 0;
  iVar2 = 0;
  if (0 < (int)(param_1[0x14] * param_1[0x13])) {
    do {
      pcVar8 = (char *)param_1[4];
      iVar2 = iVar2 + 1;
      uVar3 = FUN_00573140("EVENT_ICON_%d",iVar2);
      if (pcVar8 != (char *)0x0) {
        pcVar4 = pcVar8;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 != pcVar8 + 1) {
          if (DAT_0091d218 < 1) {
            iVar5 = FUN_005b5b70(pcVar8);
            if (iVar5 == 0) {
              iVar5 = FUN_005b7580(pcVar8);
              if (iVar5 == 0) goto LAB_0055a8b7;
              goto LAB_0055a86a;
            }
          }
          else {
            FUN_00572070();
            iVar5 = FUN_00591d90(pcVar8);
LAB_0055a86a:
            if (iVar5 == 0) goto LAB_0055a8b7;
          }
          iVar5 = FUN_005b8550(uVar3);
          if ((iVar5 != 0) && (*(int *)(iVar5 + 0x18) == 1)) {
            pvVar6 = _malloc(0x14);
            local_4._0_1_ = 2;
            if (pvVar6 == (void *)0x0) {
              uVar3 = 0;
            }
            else {
              uVar3 = FUN_00588120(iVar5);
            }
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_005881f0(uVar3);
          }
        }
      }
LAB_0055a8b7:
    } while (iVar2 < (int)(param_1[0x13] * param_1[0x14]));
  }
  pcVar8 = (char *)param_1[4];
  uVar3 = FUN_00573140("TRACK_MAP");
  if (pcVar8 != (char *)0x0) {
    pcVar4 = pcVar8;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 != pcVar8 + 1) {
      if (DAT_0091d218 < 1) {
        iVar2 = FUN_005b5b70(pcVar8);
        if (iVar2 == 0) {
          iVar2 = FUN_005b7580(pcVar8);
          if (iVar2 == 0) goto LAB_0055a948;
          goto LAB_0055a934;
        }
      }
      else {
        FUN_00572070();
        iVar2 = FUN_00591d90(pcVar8);
LAB_0055a934:
        if (iVar2 == 0) goto LAB_0055a948;
      }
      iVar2 = FUN_005b8550(uVar3);
      if (iVar2 != 0) goto LAB_0055a94a;
    }
  }
LAB_0055a948:
  iVar2 = 0;
LAB_0055a94a:
  param_1[0x6c] = iVar2;
  if (*(char *)(param_1 + 0x6d) == '\0') {
    uVar3 = param_1[4];
    uVar9 = 0x84e4a54c;
  }
  else {
    uVar3 = param_1[4];
    uVar9 = 0x2f32a021;
  }
  FUN_00525220(uVar3,0xbde82fcc,uVar9);
  FUN_00547e30();
  ExceptionList = pvStack_c;
  return param_1;
}


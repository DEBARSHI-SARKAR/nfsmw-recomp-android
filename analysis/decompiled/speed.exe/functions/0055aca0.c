/* speed.exe 0055aca0 FUN_0055aca0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005b5b70 FUN_005b5b70
 * calls 005938a0 FUN_005938a0
 * calls 00525220 FUN_00525220
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 00588120 FUN_00588120
 * calls 005529f0 FUN_005529f0
 * calls 005881f0 FUN_005881f0
 * calls 0055a280 FUN_0055a280
 * calls 005b7580 FUN_005b7580
 * calls 00591d90 FUN_00591d90
 */

undefined4 * __thiscall FUN_0055aca0(undefined4 *param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870e20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005938a0(param_2,3,3,1);
  *param_1 = &PTR_FUN_0089eef4;
  param_1[0xb] = &PTR_LAB_0089eee8;
  local_4 = 0;
  *(bool *)(param_1 + 0x38) = *(int *)(param_2 + 8) != 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  pvVar2 = _malloc(0xd0);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0055a280();
  }
  param_1[0x39] = uVar3;
  iVar4 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (0 < (int)(param_1[0x13] * param_1[0x14])) {
    do {
      pcVar7 = (char *)param_1[4];
      iVar4 = iVar4 + 1;
      uVar3 = FUN_00573140("EVENT_ICON_%d",iVar4);
      if (pcVar7 != (char *)0x0) {
        pcVar5 = pcVar7;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 != pcVar7 + 1) {
          if (DAT_0091d218 < 1) {
            iVar6 = FUN_005b5b70(pcVar7);
            if (iVar6 == 0) {
              iVar6 = FUN_005b7580(pcVar7);
              if (iVar6 == 0) goto LAB_0055ae08;
              goto LAB_0055adbb;
            }
          }
          else {
            FUN_00572070();
            iVar6 = FUN_00591d90(pcVar7);
LAB_0055adbb:
            if (iVar6 == 0) goto LAB_0055ae08;
          }
          iVar6 = FUN_005b8550(uVar3);
          if ((iVar6 != 0) && (*(int *)(iVar6 + 0x18) == 1)) {
            pvVar2 = _malloc(0x14);
            local_4._0_1_ = 2;
            if (pvVar2 == (void *)0x0) {
              uVar3 = 0;
            }
            else {
              uVar3 = FUN_00588120(iVar6);
            }
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_005881f0(uVar3);
          }
        }
      }
LAB_0055ae08:
    } while (iVar4 < (int)(param_1[0x14] * param_1[0x13]));
  }
  pcVar7 = (char *)param_1[4];
  uVar3 = FUN_00573140("TRACK_MAP");
  if (pcVar7 != (char *)0x0) {
    pcVar5 = pcVar7;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 != pcVar7 + 1) {
      if (DAT_0091d218 < 1) {
        iVar4 = FUN_005b5b70(pcVar7);
        if (iVar4 == 0) {
          iVar4 = FUN_005b7580(pcVar7);
          if (iVar4 == 0) goto LAB_0055ae98;
          goto LAB_0055ae84;
        }
      }
      else {
        FUN_00572070();
        iVar4 = FUN_00591d90(pcVar7);
LAB_0055ae84:
        if (iVar4 == 0) goto LAB_0055ae98;
      }
      iVar4 = FUN_005b8550(uVar3);
      if (iVar4 != 0) goto LAB_0055ae9a;
    }
  }
LAB_0055ae98:
  iVar4 = 0;
LAB_0055ae9a:
  param_1[0x3a] = iVar4;
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar3 = param_1[4];
    uVar8 = 0xe451941e;
  }
  else {
    uVar3 = param_1[4];
    uVar8 = 0x6ddfa694;
  }
  FUN_00525220(uVar3,0xbde82fcc,uVar8);
  FUN_005529f0();
  ExceptionList = local_c;
  return param_1;
}


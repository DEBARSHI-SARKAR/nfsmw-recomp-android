/* speed.exe 0075bb40 FUN_0075bb40; analysis pseudocode, not buildable source.
 * calls 0045f140 FUN_0045f140
 * calls 006626b0 FUN_006626b0
 * calls 00751860 FUN_00751860
 * calls 0065f7a0 FUN_0065f7a0
 * calls 00752d20 FUN_00752d20
 * calls 00752e00 FUN_00752e00
 * calls 00759f00 FUN_00759f00
 * calls 00752f00 FUN_00752f00
 * calls 00753060 FUN_00753060
 * calls 00466340 FUN_00466340
 * calls 004647c0 FUN_004647c0
 */

int * __thiscall FUN_0075bb40(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 local_9a8 [72];
  undefined1 local_960 [72];
  undefined4 local_918 [128];
  undefined4 local_718 [174];
  int local_460;
  undefined1 local_398 [348];
  undefined4 local_23c [88];
  int local_dc;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_008812ae;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar2 = FUN_0045f140(DAT_009b0a0c);
  while (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    while (iVar2 != 0) {
      FUN_006626b0();
      iVar2 = *(int *)(param_1 + 0x14);
    }
    FUN_00759f00(1);
    iVar2 = FUN_0045f140(DAT_009b0a0c);
  }
  iVar2 = FUN_00466340(DAT_009b0a0c);
  piVar4 = (int *)0x0;
  local_c = 0;
  if (iVar2 != 0) {
    piVar4 = (int *)FUN_00752d20(param_2,*(undefined4 *)(param_1 + 0xc),
                                 *(undefined4 *)(param_1 + 0x10),param_3);
  }
  puVar5 = *(undefined4 **)(param_1 + 0x5c);
  *puVar5 = piVar4;
  *(int **)(param_1 + 0x5c) = piVar4;
  *piVar4 = param_1 + 0x58;
  piVar4[1] = (int)puVar5;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  iVar2 = piVar4[0xcb];
  iVar1 = piVar4[0xd2];
  local_c = 0xffffffff;
  uVar3 = FUN_00752e00(iVar2 + 0x20);
  *(undefined4 *)(iVar1 + 0x1c) = uVar3;
  FUN_00753060(piVar4[0xd3] + 0x34,4,piVar4[0xd3] + 0x54,4,0);
  iVar1 = piVar4[0xd4];
  FUN_004647c0(local_960,"CARS\\%s\\TEXTURES.BIN",iVar2);
  uVar3 = FUN_00752f00(local_960,0x8000);
  *(undefined4 *)(iVar1 + 0x18) = uVar3;
  if (*(char *)(param_2 + 7) != '\0') {
    if (DAT_009b09fc == 0) {
      if (*(char *)(param_2 + 7) == '\x02') {
        pcVar7 = "CARS\\%s\\PREVINYL.BIN";
      }
      else {
        pcVar7 = "CARS\\%s\\VINYLS.BIN";
      }
    }
    else {
      pcVar7 = "CARS\\%s\\PREVINYL.BIN";
    }
    FUN_004647c0(local_9a8,pcVar7,iVar2);
    iVar2 = FUN_0065f7a0(local_9a8);
    if (iVar2 != 0) {
      uVar3 = FUN_00752f00(local_9a8,0x19000);
      *(undefined4 *)(iVar1 + 0x1c) = uVar3;
    }
  }
  uVar3 = *(undefined4 *)(iVar1 + 0x14);
  puVar5 = local_918;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  FUN_00751860(local_718,*(undefined4 *)(iVar1 + 8),uVar3);
  puVar5 = local_718;
  puVar6 = local_918;
  for (iVar2 = local_460; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(int *)(iVar1 + 0x20) = local_460;
  FUN_00753060(local_918,local_460,iVar1 + 0x24,local_460,0);
  uVar3 = *(undefined4 *)(iVar1 + 8);
  puVar5 = local_918;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  FUN_00751860(local_398,uVar3,*(undefined4 *)(iVar1 + 0x14));
  puVar5 = local_23c;
  puVar6 = local_918;
  for (iVar2 = local_dc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(int *)(iVar1 + 0x180) = local_dc;
  FUN_00753060(local_918,local_dc,iVar1 + 0x184,local_dc,0);
  if (piVar4[2] == 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  piVar4[2] = piVar4[2] + 1;
  ExceptionList = local_14;
  return piVar4;
}


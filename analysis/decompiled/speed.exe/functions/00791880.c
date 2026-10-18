/* speed.exe 00791880 FUN_00791880; analysis pseudocode, not buildable source.
 * calls 0056c750 FUN_0056c750
 * calls 00598a30 FUN_00598a30
 * calls 00598590 FUN_00598590
 * calls 00460f80 FUN_00460f80
 * calls 0056bc10 FUN_0056bc10
 * calls 0078e090 FUN_0078e090
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00598f50 FUN_00598f50
 * calls 00598bb0 FUN_00598bb0
 */

void __thiscall FUN_00791880(int param_1,undefined4 *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint local_10 [4];
  
  iVar6 = *(int *)(param_1 + 0x73c);
  *(undefined1 *)(param_1 + 0x740) = 0;
  puVar7 = param_2;
  puVar8 = (undefined4 *)(param_1 + 0x218);
  for (iVar4 = 0x146; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar4 = 0;
  if (iVar6 != 0) {
    FUN_0056c6e0(iVar6);
  }
  uVar5 = 1;
  pcVar2 = (char *)((int)param_2 + 0x465);
  iVar6 = 4;
  do {
    if (*pcVar2 != '\0') {
      local_10[iVar4] = uVar5 | 0xeb0ffe0;
      iVar4 = iVar4 + 1;
      uVar5 = uVar5 + 1;
    }
    pcVar2 = pcVar2 + 0x2d;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  pcVar2 = (char *)(param_2 + 0x18);
  if (((pcVar2 == (char *)0x0) || (*pcVar2 != '0')) || (*(char *)((int)param_2 + 0x61) != 'x')) {
    bVar1 = false;
  }
  else {
    uVar3 = FUN_00460f80(pcVar2);
    bVar1 = true;
    pcVar2 = (char *)FUN_0056bc10(uVar3);
  }
  switch(iVar4) {
  case 0:
    uVar3 = FUN_00598590(*(undefined4 *)(*(int *)(param_1 + 0x738) + 0x10),&DAT_00890978,1,pcVar2);
    break;
  case 1:
    uVar3 = FUN_00598a30(*(undefined4 *)(*(int *)(param_1 + 0x738) + 0x10),&DAT_00890978,1,0,
                         local_10[0],pcVar2);
    break;
  case 2:
    uVar3 = FUN_00598bb0(*(undefined4 *)(*(int *)(param_1 + 0x738) + 0x10),&DAT_00890978,1,0,0,
                         local_10[0],local_10[1],local_10[1],0,pcVar2);
    break;
  case 3:
    uVar3 = FUN_00598f50(*(undefined4 *)(*(int *)(param_1 + 0x738) + 0x10),&DAT_00890978,1,0,0,0,
                         local_10[0],local_10[1],local_10[2],0,0,pcVar2);
    break;
  default:
    goto switchD_00791911_default;
  }
  *(undefined4 *)(param_1 + 0x73c) = uVar3;
switchD_00791911_default:
  if ((*(int *)(param_1 + 0x73c) != 0) && (!bVar1)) {
    FUN_0056c750();
  }
  FUN_0078e090();
  return;
}


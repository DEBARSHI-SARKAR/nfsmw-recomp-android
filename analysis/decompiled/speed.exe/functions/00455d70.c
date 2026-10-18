/* speed.exe 00455d70 FUN_00455d70; analysis pseudocode, not buildable source.
 * calls 00659250 FUN_00659250
 */

undefined4 * __thiscall
FUN_00455d70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint *param_4,int param_5,
            undefined4 param_6)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  
  param_1[1] = param_2;
  *param_1 = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  for (puVar2 = param_4; puVar2 < (uint *)(param_5 + (int)param_4);
      puVar2 = (uint *)((int)puVar2 + puVar2[1])) {
    uVar7 = *puVar2;
    if (uVar7 < 0x5074724f) {
      if (uVar7 == 0x5074724e) {
        param_1[7] = puVar2;
      }
      else if (uVar7 == 0x4465704e) {
        param_1[2] = puVar2;
      }
      else if (uVar7 == 0x4578704e) {
        param_1[10] = puVar2;
      }
    }
    else if (uVar7 == 0x5374724e) {
      param_1[9] = puVar2;
    }
  }
  iVar5 = param_1[9];
  pcVar4 = (char *)(iVar5 + 8);
  pcVar8 = (char *)(*(int *)(iVar5 + 4) + iVar5);
  pcVar3 = pcVar4;
  while (pcVar3 < pcVar8) {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  while (pcVar4 < pcVar8) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
  }
  param_1[8] = param_4;
  param_1[5] = *(undefined4 *)(param_1[2] + 8);
  iVar5 = (param_1[5] + *(int *)(param_1[10] + 8)) * 0x10;
  param_1[0xd] = *(int *)(param_1[10] + 8);
  DAT_0090dcd4 = DAT_0090dcd4 + iVar5;
  if (DAT_0090dcd0 < DAT_0090dcd4) {
    DAT_0090dcd0 = DAT_0090dcd4;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(iVar5,0);
  }
  uVar7 = 0;
  param_1[3] = iVar5;
  param_1[0xb] = param_1[5] * 0x10 + iVar5;
  if (param_1[0xd] + param_1[5] != 0) {
    iVar5 = 0;
    do {
      puVar6 = (undefined4 *)(param_1[3] + iVar5);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0xffffffff;
        puVar6[3] = 0;
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar7 < (uint)(param_1[5] + param_1[0xd]));
  }
  iVar5 = (param_1[5] + param_1[0xd]) * 4;
  DAT_0090dcd4 = DAT_0090dcd4 + iVar5;
  if (DAT_0090dcd0 < DAT_0090dcd4) {
    DAT_0090dcd0 = DAT_0090dcd4;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(iVar5,0);
  }
  param_1[4] = iVar5;
  param_1[0xc] = iVar5 + param_1[5] * 4;
  uVar7 = 0;
  if (param_1[5] != 0) {
    do {
      *(undefined4 *)(param_1[4] + uVar7 * 4) = *(undefined4 *)(param_1[2] + 0xc + uVar7 * 4);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)param_1[5]);
  }
  puVar6 = (undefined4 *)param_1[3];
  puVar6[3] = param_5;
  *puVar6 = param_4;
  puVar6[1] = param_6;
  param_1[6] = param_1[6] + 1;
  return param_1;
}


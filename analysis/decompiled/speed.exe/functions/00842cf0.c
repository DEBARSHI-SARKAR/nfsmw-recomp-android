/* speed.exe 00842cf0 FUN_00842cf0; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 0083a980 FUN_0083a980
 * calls 00842690 FUN_00842690
 * calls 008421c0 FUN_008421c0
 */

void FUN_00842cf0(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if ((param_2 < 1) || (8 < param_2)) {
    *(undefined1 *)*param_1 = 0;
    param_1[0x484] = 0;
    return;
  }
  pcVar5 = (char *)(param_1 + 0x84);
  FUN_0083a980(pcVar5,0x1000,"ACTION",param_2);
  if ((undefined1 *)param_1[0x487] != (undefined1 *)param_1[0x488]) {
    *(undefined1 *)param_1[0x488] = 0x25;
    param_1[0x487] = 0;
    param_1[0x488] = 0;
  }
  iVar2 = param_1[0x485];
  iVar3 = param_1[0x486];
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  puVar4 = (undefined1 *)*param_1;
  uVar6 = (int)pcVar5 - ((int)param_1 + 0x211);
  iVar7 = FUN_008421c0(param_1,puVar4,"$last");
  iVar7 = iVar7 + (1 - (int)puVar4);
  if ((int)param_1[1] < (int)((iVar7 - (iVar3 - iVar2)) + uVar6)) {
    *puVar4 = 0;
    param_1[0x484] = 0;
    return;
  }
  FID_conflict__memcpy
            ((void *)(param_1[0x485] + uVar6),(void *)param_1[0x486],
             (size_t)(puVar4 + (iVar7 - (int)param_1[0x486])));
  puVar9 = param_1 + 0x84;
  puVar10 = (undefined4 *)param_1[0x485];
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  FUN_00842690(param_1,(&PTR_DAT_0090d334)[param_2],&DAT_00890978,"DEFAULT-GOTO");
  return;
}


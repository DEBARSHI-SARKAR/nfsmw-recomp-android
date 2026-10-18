/* speed.exe 007eedd5 FUN_007eedd5; analysis pseudocode, not buildable source.
 * calls 007f0fea FUN_007f0fea
 * calls 007f07b9 FUN_007f07b9
 */

void FUN_007eedd5(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char local_108 [260];
  
  puVar3 = DAT_009bb174;
  if (DAT_009bb159 == '\x01') {
    iVar2 = DAT_009bb174[3];
    *DAT_009bb174 = 0x128;
    puVar3[1] = 1;
    uVar4 = FUN_007f0fea(puVar3 + 0x4a,iVar2 * 0x105,0);
    puVar3 = DAT_009bb174;
    DAT_009bb174[2] = uVar4;
    pcVar9 = DAT_00907708;
    do {
      cVar1 = *pcVar9;
      pcVar9[(int)(local_108 + -(int)DAT_00907708)] = cVar1;
      pcVar9 = pcVar9 + 1;
      pcVar5 = PTR_s_cache_dat_00907734;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar5 - (int)PTR_s_cache_dat_00907734;
    puVar10 = (undefined4 *)&stack0xfffffef7;
    do {
      pcVar9 = (char *)((int)puVar10 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    } while (*pcVar9 != '\0');
    puVar8 = (undefined4 *)PTR_s_cache_dat_00907734;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    FUN_007f07b9(local_108,puVar3,iVar2 * 0x105 + 0x128);
    DAT_009bb159 = '\0';
  }
  return;
}


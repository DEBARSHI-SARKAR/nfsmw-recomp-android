/* speed.exe 0078d9d0 FUN_0078d9d0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00524920 FUN_00524920
 * calls 005af1c0 FUN_005af1c0
 * calls 00575920 FUN_00575920
 * calls 005bcc10 FUN_005bcc10
 * calls 0059c1a0 FUN_0059c1a0
 * calls 0057e8c0 FUN_0057e8c0
 * calls 0078d6d0 FUN_0078d6d0
 * calls 005758b0 FUN_005758b0
 * calls 00586290 FUN_00586290
 * calls 005750d0 FUN_005750d0
 * calls 0056bb20 FUN_0056bb20
 * calls 00585b50 FUN_00585b50
 * calls 005251e0 FUN_005251e0
 * calls 00652b10 thunk_FUN_007c7250
 * calls 0056bd40 FUN_0056bd40
 */

undefined4 * __thiscall FUN_0078d9d0(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  void *pvVar12;
  byte *pbVar13;
  void *unaff_EBX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882556;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00586290(param_2);
  *(undefined1 *)(param_1 + 0x11) = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008b69b8;
  FUN_005750d0(param_1[4],"Scrollbar",1,0,0);
  FUN_005758b0();
  puVar4 = *(undefined4 **)(param_2 + 8);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar7 = FUN_0056bb20();
  if ((iVar7 != 2) && (iVar7 != 0xd)) {
    pbVar13 = (byte *)(puVar4 + 2);
    bVar6 = *(byte *)(puVar4 + 2);
    while (bVar6 != 0) {
      bVar6 = *pbVar13;
      if (('@' < (char)bVar6) && ((char)bVar6 < '[')) {
        bVar6 = bVar6 | 0x20;
      }
      *pbVar13 = bVar6;
      pbVar1 = pbVar13 + 1;
      pbVar13 = pbVar13 + 1;
      bVar6 = *pbVar1;
    }
  }
  piVar5 = (int *)*puVar4;
  param_1[0x12] = piVar5;
  (**(code **)(*piVar5 + 4))(0xb19b00b5,0,param_1,0);
  uVar8 = (uint)(*(char *)((int)puVar4 + 0x69) != '\0');
  if (*(char *)((int)puVar4 + 0x96) != '\0') {
    *(int *)(&stack0xffffffdc + uVar8 * 4) = (int)puVar4 + 0x96;
    uVar8 = uVar8 + 1;
  }
  FUN_0078d6d0(uVar8,&stack0xffffffdc,0);
  uVar10 = param_1[4];
  uVar9 = FUN_005af1c0("Header_text_shadow");
  FUN_005251e0(uVar10,uVar9);
  FUN_005bcc10(puVar4 + 2);
  uVar10 = param_1[4];
  uVar9 = FUN_005af1c0("Header_text_inner");
  FUN_005251e0(uVar10,uVar9);
  FUN_005bcc10(puVar4 + 2);
  uVar10 = param_1[4];
  uVar9 = FUN_005af1c0(&DAT_008b6988,0x16a259,1);
  FUN_00524920(uVar10,uVar9);
  FUN_00524920(param_1[4],0x3df39a82,0x16a259,1);
  FUN_00524920(param_1[4],0xfcd5b255,0x16a259,1);
  uVar10 = param_1[4];
  uVar9 = FUN_005af1c0("RankMode_Type");
  iVar7 = FUN_005251e0(uVar10,uVar9);
  FUN_0057e8c0(&DAT_00890978);
  *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
  uVar10 = param_1[4];
  uVar9 = FUN_005af1c0("Scroll_Text_1");
  iVar7 = FUN_005251e0(uVar10,uVar9);
  uVar10 = FUN_00585b50(*(undefined4 *)(iVar7 + 0x24));
  FUN_00575920(param_1,*(undefined4 *)(iVar7 + 0x74),0xb,"Scroll_Text_%d",uVar10);
  param_1[0x2c] = param_1 + 0x13;
  pcVar11 = (char *)puVar4[1];
  if (pcVar11 != (char *)0x0) {
    pcVar2 = pcVar11 + 1;
    do {
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    pcVar11 = pcVar11 + (1 - (int)pcVar2);
    if (0 < (int)pcVar11) {
      pvVar12 = _malloc((int)pcVar11 * 2);
      FUN_0056bd40(pvVar12,pcVar11,puVar4[1]);
      FUN_0059c1a0(pvVar12);
      thunk_FUN_007c7250(pvVar12);
      ExceptionList = unaff_EBX;
      return param_1;
    }
  }
  FUN_0059c1a0(0);
  ExceptionList = unaff_EBX;
  return param_1;
}


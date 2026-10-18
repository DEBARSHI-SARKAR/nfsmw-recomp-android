/* speed.exe 004ceb80 FUN_004ceb80; analysis pseudocode, not buildable source.
 */

int FUN_004ceb80(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 *puStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086c708;
  local_c = ExceptionList;
  if (param_3 == 0) {
    return 0;
  }
  iStack_24 = 0;
  ExceptionList = &local_c;
  puVar3 = (undefined4 *)FUN_004c03c0();
  uStack_10 = 0;
  piVar5 = (int *)(&DAT_009123e4)[param_1 * 0x5a];
  uStack_4 = 0;
  puStack_14 = puVar3;
  if (piVar5 != (int *)((&DAT_009123e4)[param_1 * 0x5a] + (&DAT_009123ec)[param_1 * 0x5a] * 8)) {
    do {
      iStack_20 = *piVar5;
      iStack_1c = piVar5[1];
      if ((int)(uint)*(byte *)(*(int *)(iStack_20 + 4) + 0xe) <= param_2) {
        iVar4 = FUN_004c07c0(puVar3,puVar3[1],&iStack_20);
        FUN_004cd140(1);
        puVar3[1] = iVar4;
        **(int **)(iVar4 + 4) = iVar4;
        iStack_24 = iStack_24 + 1;
        puVar3 = puStack_14;
      }
    } while ((param_3 != iStack_24) &&
            (piVar5 = piVar5 + 2,
            piVar5 != (int *)((&DAT_009123e4)[param_1 * 0x5a] + (&DAT_009123ec)[param_1 * 0x5a] * 8)
            ));
  }
  for (puVar1 = (undefined4 *)*puVar3; puVar1 != puVar3; puVar1 = (undefined4 *)*puVar1) {
    FUN_004cc5d0(puVar1[2],puVar1[3]);
  }
  puVar1 = (undefined4 *)*puVar3;
  *puVar3 = puVar3;
  uStack_4 = 0xffffffff;
  puVar3[1] = puVar3;
  while (puVar1 != puVar3) {
    puVar2 = (undefined4 *)*puVar1;
    FUN_005d0370(puVar1,0x10,0);
    puVar1 = puVar2;
  }
  FUN_005d0370(puVar3,0x10,0);
  ExceptionList = local_c;
  return iStack_24;
}


/* speed.exe 004cece0 FUN_004cece0; analysis pseudocode, not buildable source.
 * calls 004c0840 FUN_004c0840
 * calls 004c03f0 FUN_004c03f0
 * calls 004cab80 FUN_004cab80
 * calls 005d0370 FUN_005d0370
 * calls 004cd1e0 FUN_004cd1e0
 */

int FUN_004cece0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int local_20;
  int *local_1c [2];
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c728;
  local_c = ExceptionList;
  if (param_3 == 0) {
    return 0;
  }
  param_1 = param_1 * 0x74;
  local_20 = 0;
  ExceptionList = &local_c;
  puVar3 = (undefined4 *)FUN_004c03f0();
  local_10 = 0;
  piVar5 = *(int **)(&DAT_00913c54 + param_1);
  local_4 = 0;
  local_14 = puVar3;
  if (piVar5 != piVar5 + *(int *)(&DAT_00913c5c + param_1)) {
    do {
      local_1c[0] = (int *)*piVar5;
      if ((*local_1c[0] != 0) && ((int)(uint)*(byte *)(local_1c[0][1] + 0xe) <= param_2)) {
        iVar4 = FUN_004c0840(puVar3,puVar3[1],local_1c);
        FUN_004cd1e0(1);
        puVar3[1] = iVar4;
        **(int **)(iVar4 + 4) = iVar4;
        local_20 = local_20 + 1;
        puVar3 = local_14;
      }
    } while ((param_3 != local_20) &&
            (piVar5 = piVar5 + 1,
            piVar5 != (int *)(*(int *)(&DAT_00913c54 + param_1) +
                             *(int *)(&DAT_00913c5c + param_1) * 4)));
  }
  for (puVar1 = (undefined4 *)*puVar3; puVar1 != puVar3; puVar1 = (undefined4 *)*puVar1) {
    FUN_004cab80();
  }
  puVar1 = (undefined4 *)*puVar3;
  *puVar3 = puVar3;
  local_4 = 0xffffffff;
  puVar3[1] = puVar3;
  while (puVar1 != puVar3) {
    puVar2 = (undefined4 *)*puVar1;
    FUN_005d0370(puVar1,0xc,0);
    puVar1 = puVar2;
  }
  FUN_005d0370(puVar3,0xc,0);
  ExceptionList = local_c;
  return local_20;
}


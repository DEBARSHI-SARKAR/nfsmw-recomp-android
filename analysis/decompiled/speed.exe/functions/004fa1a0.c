/* speed.exe 004fa1a0 FUN_004fa1a0; analysis pseudocode, not buildable source.
 * calls 00784c50 FUN_00784c50
 * calls 00766930 FUN_00766930
 * calls 004f9e40 FUN_004f9e40
 * calls 004e5da0 FUN_004e5da0
 * calls 005d0370 FUN_005d0370
 * calls 005d51f0 FUN_005d51f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fa1a0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float *local_34;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086ddd0;
  local_c = ExceptionList;
  iVar3 = 0;
  local_2c = DAT_008ef998;
  if (0 < DAT_008ef998) {
    local_34 = (float *)&DAT_00914564;
    iVar5 = DAT_008ef998;
    ExceptionList = &local_c;
    do {
      local_20 = local_34[-1];
      local_24 = local_34[1];
      local_28 = -*local_34;
      if (_DAT_00890bf8 <= (float)(&DAT_009142c8)[iVar3]) {
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        local_4 = 0;
        FUN_004f9e40(0x80);
        local_4 = 1;
        FUN_00784c50(&local_28,0x41a00000,local_1c);
        iVar5 = local_18;
        if (local_18 != local_14) {
          do {
            cVar1 = FUN_00766930(0xeb626f77,&local_30);
            if (cVar1 != '\0') {
              iVar2 = *(int *)(*(int *)(local_30 + 8) + local_30 + 0x10);
              if ((iVar2 == 0) ||
                 (iVar2 = FUN_005d51f0(DAT_00930514,DAT_00930514 + DAT_0093051c * 8,iVar2),
                 iVar2 == 0)) {
                piVar4 = (int *)0x0;
              }
              else {
                piVar4 = *(int **)(iVar2 + 4);
              }
              cVar1 = (**(code **)(*piVar4 + 0x24))();
              if (cVar1 == '\0') {
                FUN_004e5da0(piVar4,iVar3);
              }
            }
            iVar5 = iVar5 + 4;
          } while (iVar5 != local_14);
        }
        local_4 = 0xffffffff;
        iVar5 = local_2c;
        if (local_18 != 0) {
          FUN_005d0370(local_18,(local_10 - local_18 >> 2) << 2,0);
          iVar5 = local_2c;
        }
      }
      iVar3 = iVar3 + 1;
      local_34 = local_34 + 4;
    } while (iVar3 < iVar5);
  }
  ExceptionList = local_c;
  return;
}


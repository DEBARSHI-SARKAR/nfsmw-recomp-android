/* speed.exe 00638320 FUN_00638320; analysis pseudocode, not buildable source.
 * calls 00621a00 FUN_00621a00
 * calls 005ff2e0 FUN_005ff2e0
 * calls 00654af0 FUN_00654af0
 * calls 00735620 FUN_00735620
 * calls 00755140 FUN_00755140
 * calls 00600420 FUN_00600420
 * calls 005e8b20 FUN_005e8b20
 * calls 005d59f0 FUN_005d59f0
 * calls 006e8df0 FUN_006e8df0
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_00638320(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *local_38;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878cd7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6b4c;
  local_38 = (int *)param_1[2];
  local_4 = 0;
  if (local_38 != (int *)0x0) {
    iVar5 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8);
    if ((iVar5 != 0) && (piVar1 = *(int **)(iVar5 + 4), piVar1 != (int *)0x0)) {
      local_38 = piVar1;
      iVar5 = FUN_005e8b20();
      if (iVar5 != 0) {
        local_38 = (int *)0x63839f;
        FUN_00600420();
      }
      local_24 = &local_38;
      local_38 = (int *)0x20d60dbf;
      iVar2 = piVar1[2];
      FUN_00621a00(&local_24);
      local_20 = local_24;
      local_1c = 0;
      local_18 = 0x14;
      local_14 = 0;
      local_10 = iVar2;
      FUN_00654af0();
      local_38 = (int *)0x6383f0;
      piVar6 = (int *)(**(code **)(*piVar1 + 0x20))();
      if (piVar6 != (int *)0x0) {
        local_38 = (int *)0x6383fd;
        cVar4 = (**(code **)(*piVar6 + 0x40))();
        if (cVar4 != '\0') {
          local_38 = (int *)0x638408;
          (**(code **)(*piVar6 + 0x50))();
        }
      }
      local_38 = (int *)&LAB_00403f80;
      piVar6 = (int *)FUN_005d59f0();
      if (piVar6 != (int *)0x0) {
        local_38 = (int *)0x1;
        (**(code **)(*piVar6 + 4))();
      }
      local_38 = piVar1;
      FUN_005ff2e0(0);
      local_38 = (int *)0x63843a;
      cVar4 = FUN_00735620();
      if (cVar4 != '\0') {
        local_38 = (int *)0x8;
        FUN_00755140(*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x10),0);
      }
      local_38 = (int *)0x638459;
      iVar5 = FUN_006e8df0();
      if (iVar5 == 1) {
        local_38 = (int *)0x638465;
        cVar4 = (**(code **)(*piVar1 + 0x24))();
        puVar3 = DAT_00920390;
        if (cVar4 == '\0') {
          *param_1 = &PTR_LAB_008a66f8;
          ExceptionList = local_c;
          return;
        }
        local_24 = DAT_00920390;
        local_4 = CONCAT31(local_4._1_3_,1);
        if (DAT_00920390 == (undefined4 *)0x0) {
          DAT_00920390 = DAT_00920390 + 4;
          *param_1 = &PTR_LAB_008a66f8;
          ExceptionList = local_c;
          return;
        }
        local_38 = (int *)0x63848c;
        DAT_00920390 = DAT_00920390 + 4;
        uVar7 = (**(code **)(*piVar1 + 0x20))();
        puVar3[1] = 0x10;
        *puVar3 = &PTR_FUN_008a7514;
        puVar3[2] = uVar7;
      }
      *param_1 = &PTR_LAB_008a66f8;
      ExceptionList = local_c;
      return;
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}


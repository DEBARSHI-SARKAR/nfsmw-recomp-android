/* speed.exe 0063bfa0 FUN_0063bfa0; analysis pseudocode, not buildable source.
 * calls 005ff2e0 FUN_005ff2e0
 * calls 00654af0 FUN_00654af0
 * calls 004b39c0 FUN_004b39c0
 * calls 00735620 FUN_00735620
 * calls 00755140 FUN_00755140
 * calls 005e8b20 FUN_005e8b20
 * calls 005d59f0 FUN_005d59f0
 * calls 006e8df0 FUN_006e8df0
 * calls 005d51f0 FUN_005d51f0
 * calls 006002c0 FUN_006002c0
 */

void __fastcall FUN_0063bfa0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  bool bVar8;
  int *piStack_38;
  undefined4 *puStack_28;
  undefined4 *local_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008795f7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a76d0;
  piStack_38 = (int *)param_1[2];
  local_4 = 0;
  if (piStack_38 != (int *)0x0) {
    local_24 = param_1;
    iVar4 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8);
    if ((iVar4 != 0) && (piVar1 = *(int **)(iVar4 + 4), piVar1 != (int *)0x0)) {
      piStack_38 = (int *)0x63c00e;
      piVar5 = (int *)(**(code **)(*piVar1 + 0x20))();
      if (piVar5 != (int *)0x0) {
        piStack_38 = (int *)0x63c01b;
        cVar3 = (**(code **)(*piVar5 + 8))();
        if (cVar3 == '\0') goto LAB_0063c12c;
        piStack_38 = (int *)0x63c02a;
        cVar3 = (**(code **)(*piVar5 + 0x40))();
        if (cVar3 != '\0') {
          piStack_38 = (int *)0x63c035;
          (**(code **)(*piVar5 + 0x50))();
        }
      }
      puStack_28 = &piStack_38;
      piStack_38 = (int *)0x20d60dbf;
      iVar4 = piVar1[2];
      FUN_004b39c0(&puStack_28);
      puStack_20 = puStack_28;
      uStack_1c = 0;
      uStack_18 = 0x14;
      uStack_14 = 0;
      iStack_10 = iVar4;
      FUN_00654af0();
      piStack_38 = piVar1;
      iVar4 = FUN_005e8b20();
      if (iVar4 != 0) {
        piStack_38 = (int *)0x63c098;
        FUN_006002c0();
      }
      piStack_38 = (int *)&LAB_00403f80;
      piVar5 = (int *)FUN_005d59f0();
      if (piVar5 != (int *)0x0) {
        piStack_38 = (int *)0x1;
        (**(code **)(*piVar5 + 4))();
      }
      piStack_38 = piVar1;
      FUN_005ff2e0(1);
      piStack_38 = (int *)0x63c0ca;
      cVar3 = FUN_00735620();
      if (cVar3 != '\0') {
        piStack_38 = (int *)0x9;
        FUN_00755140(*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10),0);
      }
      piStack_38 = (int *)0x63c0e9;
      iVar4 = FUN_006e8df0();
      if (iVar4 == 1) {
        piStack_38 = (int *)0x63c0f5;
        cVar3 = (**(code **)(*piVar1 + 0x24))();
        puVar2 = DAT_00920390;
        if (cVar3 != '\0') {
          puVar6 = DAT_00920390 + 4;
          puStack_28 = DAT_00920390;
          bVar8 = DAT_00920390 != (undefined4 *)0x0;
          local_4 = CONCAT31(local_4._1_3_,1);
          DAT_00920390 = puVar6;
          if (bVar8) {
            piStack_38 = (int *)0x63c11c;
            uVar7 = (**(code **)(*piVar1 + 0x20))();
            puVar2[1] = 0x10;
            *puVar2 = &PTR_FUN_008a7514;
            puVar2[2] = uVar7;
          }
        }
      }
    }
  }
LAB_0063c12c:
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}


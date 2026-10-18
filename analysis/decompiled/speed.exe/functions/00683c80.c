/* speed.exe 00683c80 FUN_00683c80; analysis pseudocode, not buildable source.
 * calls 00674bd0 FUN_00674bd0
 * calls 005d0370 FUN_005d0370
 * calls 00681bd0 FUN_00681bd0
 * calls 00675720 FUN_00675720
 */

int FUN_00683c80(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087b6f8;
  local_c = ExceptionList;
  local_20 = 0;
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_00674bd0();
  local_4 = 0;
  if (DAT_0092c510 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = (undefined *)(DAT_0092c510 + -200);
  }
  do {
    piVar5 = (int *)*piVar4;
    if (puVar7 == &DAT_0092c448) {
      *piVar4 = (int)piVar4;
      local_4 = 0xffffffff;
      piVar4[1] = (int)piVar4;
      while (piVar5 != piVar4) {
        piVar2 = (int *)*piVar5;
        FUN_005d0370(piVar5,0x14,0);
        piVar5 = piVar2;
      }
      FUN_005d0370(piVar4,0x14,0);
      ExceptionList = local_c;
      return local_20;
    }
    bVar3 = false;
    if (piVar5 != piVar4) {
      do {
        if (piVar5[2] == *(int *)(puVar7 + 0x18c)) {
          bVar3 = true;
          break;
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != piVar4);
    }
    iVar6 = 0;
    if ((!bVar3) ||
       ((iVar1 = *(int *)(*(int *)(puVar7 + 0x18c) * 0xd0 + 0x94 + DAT_009b09d8), iVar1 != 1 &&
        (iVar1 != 2)))) {
      iVar6 = FUN_00675720(piVar4,piVar4[1],puVar7 + 0x18c);
      FUN_00681bd0(1);
      piVar4[1] = iVar6;
      **(int **)(iVar6 + 4) = iVar6;
      iVar6 = *(int *)(puVar7 + 400);
    }
    local_20 = local_20 + iVar6;
    if (*(int *)(puVar7 + 200) == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = (undefined *)(*(int *)(puVar7 + 200) + -200);
    }
  } while( true );
}


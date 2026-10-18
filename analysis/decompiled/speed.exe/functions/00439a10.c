/* speed.exe 00439a10 FUN_00439a10; analysis pseudocode, not buildable source.
 * calls 00426230 FUN_00426230
 * calls 004023c0 FUN_004023c0
 * calls 00403af0 FUN_00403af0
 * calls 00401da0 FUN_00401da0
 * calls 0040e080 FUN_0040e080
 * calls 00403b50 FUN_00403b50
 * calls 00404cf0 FUN_00404cf0
 * calls 00403b70 FUN_00403b70
 * calls 00403b30 FUN_00403b30
 * calls 00437dc0 FUN_00437dc0
 * calls 0041ebd0 FUN_0041ebd0
 * calls 00403b10 FUN_00403b10
 * calls 00654af0 FUN_00654af0
 * calls 00426380 FUN_00426380
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00439a10(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int *unaff_EBX;
  uint uVar9;
  
  if ((((*(int *)(param_1 + 0x3a4) != 0) && (cVar1 = FUN_0041ebd0(), cVar1 != '\0')) &&
      (cVar1 = FUN_00437dc0(), cVar1 != '\0')) && (iVar2 = FUN_00426230(), iVar2 != 0)) {
    FUN_00403af0();
    piVar3 = (int *)FUN_00426380();
    if ((piVar3 != (int *)0x0) && (cVar1 = (**(code **)(*piVar3 + 0x5c))(), cVar1 == '\0')) {
      piVar4 = (int *)(**(code **)(*piVar3 + 0xac))();
      cVar1 = (**(code **)(*piVar4 + 0x58))();
      if (cVar1 != '\0') {
        (**(code **)(*piVar4 + 0x88))();
        (**(code **)(*piVar3 + 0x80))();
        cVar1 = FUN_0040e080();
        if (cVar1 != '\0') {
          FUN_00403b10();
          puVar5 = (undefined4 *)FUN_00403b30();
          FUN_00401da0(*puVar5);
          (**(code **)(*unaff_EBX + 4))();
        }
        puVar5 = (undefined4 *)FUN_00403b10();
        puVar6 = (undefined4 *)FUN_00403b30();
        FUN_00404cf0(*puVar6,*puVar5);
        piVar4 = (int *)(**(code **)(*piVar3 + 4))();
        (**(code **)(*piVar4 + 0x70))();
        FUN_004023c0("AIAction");
        FUN_00654af0();
        iVar2 = (**(code **)(*piVar3 + 0x50))();
        uVar7 = FUN_00403b70();
        uVar9 = 0;
        if (uVar7 != 0) {
          puVar5 = (undefined4 *)(param_1 + 100);
          do {
            if (9 < uVar9) {
              return 1;
            }
            iVar8 = FUN_00403b50();
            if (iVar2 == *(int *)(iVar8 + 4)) {
              *puVar5 = 0;
            }
            uVar9 = uVar9 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar9 < uVar7);
        }
        return 1;
      }
    }
  }
  return 0;
}


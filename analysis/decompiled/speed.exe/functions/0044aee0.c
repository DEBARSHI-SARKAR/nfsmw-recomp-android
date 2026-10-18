/* speed.exe 0044aee0 FUN_0044aee0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 004647c0 FUN_004647c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044aee0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar7;
  undefined4 *local_24;
  undefined1 local_20 [32];
  
  local_24 = &DAT_0090dba4;
  iVar5 = 0;
  do {
    FUN_004647c0(local_20,"car%d",iVar5 + 1);
    piVar4 = DAT_009885c8;
    uVar3 = FUN_005cc240(local_20);
    piVar4 = (int *)(**(code **)(*piVar4 + 8))(uVar3);
    puVar2 = local_24;
    uVar3 = extraout_ECX;
    if (piVar4 != (int *)0x0) {
      local_24[2] = iVar5;
      *local_24 = piVar4;
      (**(code **)(*piVar4 + 0x84))();
      uVar3 = extraout_ECX_00;
    }
    piVar4 = DAT_009885c8;
    local_24 = puVar2 + 4;
    iVar5 = iVar5 + 1;
  } while ((int)local_24 < 0x90dc24);
  uVar3 = FUN_005cc240(&DAT_00893734,uVar3);
  iVar5 = (**(code **)(*piVar4 + 8))(uVar3);
  if (iVar5 != 0) {
    _DAT_0090dc2c = 8;
    _DAT_0090dc24 = iVar5;
  }
  iVar7 = 9;
  piVar4 = &DAT_0090dc34;
  iVar5 = 7;
  do {
    FUN_004647c0(&local_24,"cop%d",iVar7 + -7);
    piVar1 = DAT_009885c8;
    uVar3 = FUN_005cc240(&local_24);
    iVar6 = (**(code **)(*piVar1 + 8))(uVar3);
    if (iVar6 != 0) {
      piVar4[2] = iVar7;
      *piVar4 = iVar6;
    }
    iVar7 = iVar7 + 1;
    piVar4 = piVar4 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


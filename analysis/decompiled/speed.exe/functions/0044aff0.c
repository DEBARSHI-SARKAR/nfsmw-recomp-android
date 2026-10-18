/* speed.exe 0044aff0 FUN_0044aff0; analysis pseudocode, not buildable source.
 * calls 0044aee0 FUN_0044aee0
 * calls 005cc240 FUN_005cc240
 * calls 004647c0 FUN_004647c0
 */

void __fastcall FUN_0044aff0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *local_24;
  undefined1 local_20 [32];
  
  puVar3 = &DAT_0090dbac;
  do {
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 4;
  } while ((int)puVar3 < 0x90dcac);
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x18);
  if ((iVar4 != 3) && (iVar4 != 0)) {
    if ((iVar4 != 1) && ((iVar4 == 2 || (iVar4 == 4)))) {
      FUN_0044aee0();
      return;
    }
    return;
  }
  if (*(int *)(param_1 + 0x114) != 4) {
    local_24 = &DAT_0090dba4;
    iVar4 = 0;
    do {
      FUN_004647c0(local_20,"car%d",iVar4 + 1);
      piVar2 = DAT_009885c8;
      uVar1 = FUN_005cc240(local_20);
      piVar2 = (int *)(**(code **)(*piVar2 + 8))(uVar1);
      if (piVar2 != (int *)0x0) {
        local_24[2] = iVar4;
        *local_24 = piVar2;
        (**(code **)(*piVar2 + 0x84))();
      }
      local_24 = local_24 + 4;
      iVar4 = iVar4 + 1;
    } while ((int)local_24 < 0x90dc24);
  }
  return;
}


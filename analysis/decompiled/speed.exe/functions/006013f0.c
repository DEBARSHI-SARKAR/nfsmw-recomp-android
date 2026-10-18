/* speed.exe 006013f0 FUN_006013f0; analysis pseudocode, not buildable source.
 * calls 005fc180 FUN_005fc180
 * calls 00454640 FUN_00454640
 * calls 005fc560 FUN_005fc560
 * calls 005eda20 FUN_005eda20
 * calls 005eb9e0 FUN_005eb9e0
 */

uint __fastcall FUN_006013f0(int param_1)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined **ppuVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int *local_8;
  int *local_4;
  
  bVar8 = *(int *)(DAT_0091e000 + 0x1960) == 0;
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  FUN_005eb9e0(&local_8,&local_4);
  piVar2 = local_8;
  bVar10 = false;
  bVar9 = local_8 != (int *)0x0;
  if (bVar9) {
    local_8 = (int *)(**(code **)(*local_8 + 0xe0))();
    FUN_005eda20("cost_to_state_in_pursuit",(float)(int)local_8);
    iVar5 = (**(code **)(*piVar2 + 0x114))();
    bVar10 = iVar5 == 2;
  }
  piVar2 = local_4;
  *(bool *)(DAT_0091e000 + 0x197c) = bVar10;
  if (local_4 != (int *)0x0) {
    local_4 = (int *)(**(code **)(*local_4 + 0x1c))();
    FUN_005eda20("cost_to_state",(float)(int)local_4);
    local_4 = (int *)(**(code **)(*piVar2 + 0x44))();
    iVar5 = (**(code **)(*piVar2 + 0x40))();
    local_4 = (int *)((int)local_4 + iVar5);
    FUN_005eda20("bounty_in_pursuit",(float)(int)local_4);
  }
  if (*(int *)(DAT_0091e000 + 0x1968) == 0) {
LAB_006014fb:
    bVar1 = false;
  }
  else {
    cVar3 = FUN_005fc180();
    if (cVar3 == '\0') goto LAB_006014fb;
    bVar1 = true;
  }
  if ((((bVar8) || (bVar1)) && (bVar9)) && (bVar10 != false)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x2c9) = uVar4;
  if ((bVar8) || (bVar1)) {
LAB_00601548:
    if ((bVar9) && (bVar10 == false)) {
      uVar4 = 1;
      goto LAB_0060155d;
    }
  }
  else if ((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
    cVar3 = FUN_005fc560();
    if (cVar3 != '\0') goto LAB_00601548;
  }
  uVar4 = 0;
LAB_0060155d:
  *(undefined1 *)(param_1 + 0x2c8) = uVar4;
  uVar6 = (uint)DAT_0091e009;
  if (DAT_0091e009 != 0) {
    ppuVar7 = &PTR_s_cops_damaged_00890eaf_1_008f5d4c;
    do {
      FUN_00454640(*ppuVar7);
      ppuVar7 = ppuVar7 + 1;
      uVar6 = DAT_008f5d48;
    } while ((int)ppuVar7 < 0x8f5d70);
  }
  return uVar6;
}


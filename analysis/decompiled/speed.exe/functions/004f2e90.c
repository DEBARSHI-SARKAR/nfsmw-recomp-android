/* speed.exe 004f2e90 FUN_004f2e90; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 004eb8e0 FUN_004eb8e0
 * calls 004e5970 FUN_004e5970
 * calls 006269b0 FUN_006269b0
 * calls 0045a430 FUN_0045a430
 * calls 004e4ea0 FUN_004e4ea0
 * calls 00454810 FUN_00454810
 * calls 006e8df0 FUN_006e8df0
 */

void __fastcall FUN_004f2e90(int param_1)

{
  bool bVar1;
  void **ppvVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d388;
  local_c = ExceptionList;
  bVar1 = false;
  uVar8 = 0x53bfc;
  piVar6 = DAT_00913db4;
  piVar9 = DAT_00913db4;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (DAT_00913db4 != DAT_00913db4 + DAT_00913dbc) {
    do {
      if (bVar1) goto LAB_004f2f51;
      if (*(int *)(*piVar9 + 0x228) == 0) {
        uVar11 = 0;
        uVar10 = 0;
        uVar3 = FUN_00452430(0,0);
        FUN_004e4ea0(uVar3,uVar10,uVar11);
        local_4 = 0;
        pcVar4 = (char *)FUN_00454810(0xeacb7696,0);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = (char *)FUN_006269b0(1);
        }
        if (*pcVar4 != '\0') {
          bVar1 = true;
        }
        local_4 = 0xffffffff;
        FUN_0045a430();
        piVar6 = DAT_00913db4;
      }
      piVar9 = piVar9 + 1;
    } while (piVar9 != piVar6 + DAT_00913dbc);
    ppvVar2 = ExceptionList;
    if (bVar1) {
LAB_004f2f51:
      uVar8 = 0xd3bfc;
      DAT_009142e4 = 1;
      goto LAB_004f2f66;
    }
  }
  ExceptionList = ppvVar2;
  DAT_009142e4 = 0;
LAB_004f2f66:
  iVar7 = 0;
  iVar5 = FUN_006e8df0();
  if (-(uint)(iVar5 != 1) != -2 && -1 < (int)(-(uint)(iVar5 != 1) + 2)) {
    do {
      piVar6 = (int *)FUN_004e5970(0,uVar8);
      (**(code **)(*piVar6 + 4))(uVar8);
      iVar5 = 0;
      do {
        if ((1 << ((byte)iVar5 & 0x1f) & 0x100U) != 0) {
          FUN_004eb8e0(iVar5);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x20);
      iVar7 = iVar7 + 1;
      iVar5 = FUN_006e8df0();
    } while (iVar7 < (int)(2 - (uint)(iVar5 != 1)));
    *(undefined1 *)(param_1 + 0x18) = 1;
    ExceptionList = local_c;
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  ExceptionList = local_c;
  return;
}


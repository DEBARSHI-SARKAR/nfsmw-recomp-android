/* speed.exe 0067f0d0 FUN_0067f0d0; analysis pseudocode, not buildable source.
 * calls 00452380 FUN_00452380
 * calls 00467740 FUN_00467740
 * calls 00454c30 FUN_00454c30
 * calls 0045a430 FUN_0045a430
 * calls 005cc240 FUN_005cc240
 * calls 004023c0 FUN_004023c0
 * calls 00452bd0 FUN_00452bd0
 * calls 0067d3c0 FUN_0067d3c0
 * calls 004546c0 FUN_004546c0
 */

int * __thiscall FUN_0067f0d0(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int local_34;
  undefined1 auStack_30 [12];
  int iStack_24;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  piVar6 = param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087b190;
  local_c = ExceptionList;
  iVar5 = param_3[1];
  iVar2 = *param_3;
  if (((iVar2 == DAT_0092c560) && (iVar5 == DAT_0092c564)) && (DAT_008f86f8 == 0)) {
LAB_0067f1e9:
    *param_2 = DAT_0091ddbc;
    ExceptionList = local_c;
    return param_2;
  }
  param_3 = (int *)param_3[2];
  ExceptionList = &local_c;
  FUN_0067d3c0(&local_34,&param_3);
  if (local_34 != *(int *)(param_1 + 0x16c)) {
    *param_2 = *(int *)(local_34 + 0x10);
    ExceptionList = local_c;
    return param_2;
  }
  if (*(char *)(param_1 + 0x15c) != '\0') {
    if (*(int *)(param_1 + 0x118) != DAT_0092c4f4) {
      if ((iVar2 == DAT_0092c650) && (iVar5 == DAT_0092c654)) {
        iVar5 = FUN_005cc240("SuspensionSpline");
        *param_2 = iVar5;
        ExceptionList = local_c;
        return param_2;
      }
      cVar4 = FUN_00467740(&DAT_0092c598);
      if (cVar4 != '\0') {
        FUN_004023c0("EngineSpline");
        ExceptionList = local_c;
        return param_2;
      }
    }
    if ((iVar2 == DAT_00926188) && (iVar5 == DAT_0092618c)) goto LAB_0067f1e9;
    cVar4 = FUN_00467740(&DAT_009261b0);
    if (cVar4 != '\0') {
      FUN_004023c0("InputNIS");
      ExceptionList = local_c;
      return param_2;
    }
  }
  if (((iVar2 == DAT_0092c5d8) && (iVar5 == DAT_0092c5dc)) && (*(int *)(param_1 + 0x140) == 6)) {
    iVar5 = FUN_005cc240("RBRemote");
    *param_2 = iVar5;
    ExceptionList = local_c;
    return param_2;
  }
  if (((iVar2 == DAT_009261b0) && (iVar5 == DAT_009261b4)) && (*(int *)(param_1 + 0x140) == 0)) {
    if (*(int *)(param_1 + 0x144) == 1) {
      FUN_004023c0("InputPlayerDrag");
      ExceptionList = local_c;
      return param_2;
    }
    FUN_004023c0("InputPlayer");
    ExceptionList = local_c;
    return param_2;
  }
  if (((iVar2 == DAT_0092c610) && (iVar5 == DAT_0092c614)) && (*(int *)(param_1 + 0x144) == 1)) {
    FUN_004023c0("DamageDragster");
    ExceptionList = local_c;
    return param_2;
  }
  if ((((iVar2 == DAT_0092c598) && (iVar5 == DAT_0092c59c)) &&
      (*(int *)(param_1 + 0x118) == DAT_0092c52c)) && (*(int *)(param_1 + 0x144) == 1)) {
    FUN_004023c0("EngineDragster");
    ExceptionList = local_c;
    return param_2;
  }
  if (((iVar2 == DAT_0092c650) && (iVar5 == DAT_0092c654)) &&
     (((*(int *)(param_1 + 0x118) == DAT_0092c52c && (iVar3 = *(int *)(param_1 + 0x140), 2 < iVar3))
      && ((iVar3 < 5 || (iVar3 == 6)))))) {
    FUN_004023c0("SuspensionSimple");
    ExceptionList = local_c;
    return param_2;
  }
  if ((iVar2 == DAT_0092c5e8) && (iVar5 == DAT_0092c5ec)) {
    piVar6 = &DAT_008f8890;
    iVar5 = DAT_008f8898;
    if (DAT_008f8898 != DAT_0091ddbc) {
      while ((*(int *)(param_1 + 0x140) != *piVar6 ||
             ((*(int *)(param_1 + 0x118) != piVar6[1] && (piVar6[1] != DAT_0091ddbc))))) {
        piVar1 = piVar6 + 5;
        piVar6 = piVar6 + 3;
        if (*piVar1 == DAT_0091ddbc) {
          *param_2 = DAT_008f8898;
          ExceptionList = local_c;
          return param_2;
        }
      }
      iVar5 = piVar6[2];
    }
    *param_2 = iVar5;
    ExceptionList = local_c;
    return param_2;
  }
  cVar4 = FUN_00467740(&DAT_0092c5c8);
  if ((cVar4 != '\0') &&
     ((*(int *)(param_1 + 0x140) == 0 ||
      (cVar4 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x24))(), cVar4 != '\0')))) {
    FUN_004023c0("EffectsPlayer");
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00452380(0,0,0);
  uStack_4 = 0;
  FUN_004546c0(auStack_30,piVar6[2]);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  if ((iStack_24 == 0) && (iStack_24 = FUN_00454c30(0), iStack_24 == 0)) {
    *param_2 = DAT_0091ddbc;
  }
  else {
    *param_2 = *(int *)(iStack_24 + 8);
  }
  uStack_4 = uStack_4 & 0xffffff00;
  FUN_00452bd0();
  uStack_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return param_2;
}


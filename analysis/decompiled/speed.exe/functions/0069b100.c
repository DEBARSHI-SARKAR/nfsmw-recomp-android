/* speed.exe 0069b100 FUN_0069b100; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 005d59f0 FUN_005d59f0
 * calls 0048cd20 FUN_0048cd20
 * calls 006ee9b0 FUN_006ee9b0
 * calls 00627400 FUN_00627400
 * calls 006718f0 FUN_006718f0
 * calls 006224e0 FUN_006224e0
 * calls 006e9c90 FUN_006e9c90
 * calls 006813b0 FUN_006813b0
 */

void __thiscall FUN_0069b100(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087c28e;
  pvStack_c = ExceptionList;
  if (param_2 == '\0') {
    ExceptionList = &pvStack_c;
    if (((char)param_1[7] != '\0') && (ExceptionList = &pvStack_c, param_1[4] != 0)) {
      ExceptionList = &pvStack_c;
      piVar3 = (int *)FUN_005d59f0();
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x1c))();
        (**(code **)(*piVar3 + 0x24))();
      }
      FUN_0048cd20();
      *(undefined1 *)(param_1 + 7) = 0;
      iVar2 = FUN_00627400();
      uStack_4 = 0;
      if (iVar2 != 0) {
        (**(code **)(param_1[-0x53] + 4))();
        FUN_006224e0();
      }
      uStack_4 = 0xffffffff;
      iVar2 = FUN_00627400();
      uStack_4 = 1;
      if (iVar2 != 0) {
        (**(code **)(*(int *)param_1[4] + 4))();
        FUN_006224e0();
      }
    }
    uStack_4 = 0xffffffff;
    if (param_1[6] != 0) {
      FUN_006e9c90();
      param_1[6] = 0;
    }
  }
  else {
    ExceptionList = &pvStack_c;
    if (((param_1[4] != 0) && (ExceptionList = &pvStack_c, (char)param_1[7] == '\0')) &&
       (ExceptionList = &pvStack_c, iVar2 = FUN_005d59f0(), iVar2 != 0)) {
      FUN_005cc240();
      (**(code **)(*(int *)param_1[-0x17] + 0x48))();
      FUN_006813b0();
      (**(code **)(*(int *)param_1[4] + 0x48))();
      FUN_006813b0();
      if (param_1 == (int *)0x194) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = param_1 + -0x4b;
      }
      cVar1 = FUN_006718f0(piVar3);
      *(char *)(param_1 + 7) = cVar1;
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0xc))();
      }
    }
    if (param_1[6] == 0) {
      FUN_005cc240();
      iVar2 = FUN_006ee9b0();
      param_1[6] = iVar2;
      ExceptionList = pvStack_c;
      return;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


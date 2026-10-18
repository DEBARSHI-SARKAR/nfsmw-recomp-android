/* speed.exe 006ea750 FUN_006ea750; analysis pseudocode, not buildable source.
 * calls 006253d0 FUN_006253d0
 * calls 00569bb0 FUN_00569bb0
 * calls 0062f820 FUN_0062f820
 * calls 004507c0 FUN_004507c0
 * calls 00447950 FUN_00447950
 * calls 0062d450 FUN_0062d450
 * calls 00460c50 FUN_00460c50
 * calls 00621e80 FUN_00621e80
 * calls 0044ff50 FUN_0044ff50
 * calls 00627400 FUN_00627400
 */

void __thiscall FUN_006ea750(int param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e87c;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x404) != '\0') {
    param_2 = 0.0;
  }
  ExceptionList = &local_c;
  *(float *)(param_1 + 100) = param_2 + *(float *)(param_1 + 100);
  cVar2 = FUN_00569bb0();
  if (cVar2 != '\0') {
    iVar3 = FUN_00627400(0xc);
    local_4 = 0;
    if (iVar3 != 0) {
      FUN_00621e80(0x161a918);
    }
    local_4 = 0xffffffff;
    iVar3 = FUN_00627400(0x10);
    local_4 = 1;
    if (iVar3 != 0) {
      FUN_006253d0(0xb,0);
    }
    local_4 = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x3e4) != '\0') {
    *(undefined1 *)(param_1 + 0x3e4) = 0;
    iVar3 = FUN_00627400(8);
    local_4 = 2;
    if (iVar3 != 0) {
      FUN_0062d450();
    }
    local_4 = 0xffffffff;
  }
  iVar3 = *(int *)(param_1 + 0x3e0);
  if (iVar3 == 0) {
    piVar1 = *(int **)(param_1 + 0x39c);
    if (piVar1 != (int *)0x0) {
      fVar4 = (float10)(**(code **)(*piVar1 + 0x28))();
      fVar5 = (float10)(**(code **)(*piVar1 + 0x24))();
      if (((float10)(float)fVar4 <= fVar5) || (0 < DAT_008ee348)) {
        cVar2 = FUN_00447950();
        if (cVar2 == '\0') {
          FUN_004507c0(param_2);
          FUN_0044ff50(param_2);
        }
        else {
          cVar2 = FUN_00447950();
          if (cVar2 != '\0') {
            FUN_0044ff50(0);
          }
        }
        goto LAB_006ea928;
      }
    }
    iVar3 = FUN_00460c50(param_1 + 0x354);
    if (iVar3 < 1) {
      *(undefined4 *)(param_1 + 0x2f4) = 7;
      (**(code **)(*(int *)(param_1 + 0x2c) + 4))();
    }
    else {
      iVar3 = FUN_00627400(0xc);
      local_4 = 3;
      if (iVar3 != 0) {
        FUN_0062f820(param_1 + 0x354);
      }
      local_4 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2f4) = 6;
    }
  }
  else if (*(float *)(iVar3 + 0x10) <= *(float *)(iVar3 + 0xc)) {
    *(undefined4 *)(param_1 + 0x2f4) = 7;
    (**(code **)(*(int *)(param_1 + 0x2c) + 4))();
  }
  else {
    *(float *)(iVar3 + 0xc) = param_2 + *(float *)(iVar3 + 0xc);
  }
LAB_006ea928:
  if ((DAT_008ee348 < 1) && (DAT_009260a4 != 0)) {
    (**(code **)(*(int *)(param_1 + 0x48) + 0x2c))();
  }
  ExceptionList = local_c;
  return;
}


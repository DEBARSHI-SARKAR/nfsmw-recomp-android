/* speed.exe 00560980 FUN_00560980; analysis pseudocode, not buildable source.
 * calls 0064c9a0 FUN_0064c9a0
 * calls 00660270 FUN_00660270
 * calls 00652ad0 _malloc
 * calls 00517f80 FUN_00517f80
 * calls 00527940 FUN_00527940
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0054fb00 FUN_0054fb00
 * calls 00559e90 FUN_00559e90
 * calls 00519390 FUN_00519390
 * calls 00660200 FUN_00660200
 * calls 00660400 FUN_00660400
 */

void FUN_00560980(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00871048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_0064c9a0();
  if (iVar2 != 0) {
    FUN_00660200(1,8,9);
  }
  FUN_00660400(param_1,9);
  uVar3 = FUN_00660270(param_2,0x20,9);
  uVar6 = 0;
  if (uVar3 != 0) {
    do {
      FUN_00660400(param_3[uVar6],9);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  FUN_00519390(param_1,uVar3,param_3);
  *(undefined1 *)(DAT_0091cb20 + 0x14) = 1;
  iVar2 = DAT_0091cb20;
  if ((*(char *)(DAT_0091cb20 + 0x1e) == '\0') || (((byte)DAT_0091cbac & 0xf0) == 0xb0)) {
    if (((*(int *)(DAT_0091cb20 + 0x40) < 8) ||
        ((9 < *(int *)(DAT_0091cb20 + 0x40) || (uVar3 != 0)))) &&
       (*(int *)(DAT_0091cb20 + 0xcc) != 0)) {
      if (*(char *)(*(int *)(DAT_0091cb20 + 0xcc) + 0x76) != '\0') {
        iVar1 = *(int *)(DAT_0091cb20 + 0x30);
        if ((iVar1 != 0) && (iVar1 != 0)) {
          thunk_FUN_007c7250(iVar1);
          *(undefined4 *)(iVar2 + 0x30) = 0;
        }
        pvVar4 = _malloc(0xc04);
        local_4 = 1;
        if (pvVar4 == (void *)0x0) {
          *(undefined4 *)(DAT_0091cb20 + 0x30) = 0;
          ExceptionList = local_c;
          return;
        }
        uVar5 = FUN_00517f80(param_1,uVar3,param_3);
        *(undefined4 *)(DAT_0091cb20 + 0x30) = uVar5;
        ExceptionList = local_c;
        return;
      }
      FUN_0054fb00(param_1,uVar3,*param_3,param_3[1],param_3[2]);
    }
    ExceptionList = local_c;
    return;
  }
  if (uVar3 == 0) {
    *(undefined1 *)(DAT_0091cb20 + 0x14) = 0;
    ExceptionList = local_c;
    return;
  }
  pvVar4 = _malloc(0xc04);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00517f80(param_1,uVar3,param_3);
  }
  *(undefined4 *)(DAT_0091cb20 + 0x30) = uVar5;
  local_4 = 0xffffffff;
  if ((((byte)DAT_0091cbac & 0xf0) != 0xb0) && (*(int *)(DAT_0091cb20 + 0xcc) == 0)) {
    FUN_00527940(0,0,0x91,0,0,0,0);
    ExceptionList = local_c;
    return;
  }
  FUN_00559e90();
  ExceptionList = local_c;
  return;
}


/* speed.exe 0053cfe0 FUN_0053cfe0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00573960 FUN_00573960
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 00586fa0 FUN_00586fa0
 * calls 00571e80 FUN_00571e80
 * calls 005b8400 FUN_005b8400
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_0053cfe0(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086fb4c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = _malloc(0x4c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x2c14ac23,0xd314729f,0);
    *puVar2 = &PTR_FUN_0089cadc;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  puVar2 = _malloc(0x4c);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0xa2515ebd,0xe5f757cb,0);
    *puVar2 = &PTR_FUN_0089cae4;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar2);
  puVar2 = _malloc(0x4c);
  local_4 = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00586fa0(0x9dd4bb38,0xc93fbfb5,0);
    *puVar2 = &PTR_FUN_0089caec;
    puVar4 = puVar2;
  }
  local_4 = 0xffffffff;
  FUN_00573960(puVar4);
  if (*(int *)(DAT_0091cf90 + 0x188) == 0) {
    uVar1 = FUN_00571e80(param_1[4]);
    if (*(char *)((int)param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined1 *)((int)param_1 + 0x119) = 1;
      *(undefined1 *)((int)param_1 + 0x11a) = 0;
      param_1[0x44] = 0;
    }
    (**(code **)(param_1[0xb] + 0x40))(uVar1);
  }
  else {
    *(undefined4 *)(DAT_0091cf90 + 0x188) = 0;
    if (*(char *)((int)param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined1 *)((int)param_1 + 0x119) = 1;
      *(undefined1 *)((int)param_1 + 0x11a) = 0;
      param_1[0x44] = 0;
    }
    (**(code **)(param_1[0xb] + 0x40))(0);
  }
  (**(code **)(*param_1 + 0xc))();
  if (param_1[0xe] != 0) {
    iVar3 = (**(code **)(param_1[0xb] + 0x24))(param_1[0xe]);
    if ((iVar3 == 1) && (param_1[4] != 0)) {
      iVar3 = FUN_00516af0(param_1[4]);
      if (iVar3 != 0) {
        iVar3 = FUN_005b8550(0x444969fe);
        if (iVar3 != 0) {
          iVar3 = FUN_005b1360(0x7ab70d67);
          if (iVar3 != 0) {
            FUN_005b8400(iVar3,0);
            *(undefined4 *)(iVar3 + 0x10) = 0;
          }
        }
      }
    }
  }
  ExceptionList = puVar2;
  return;
}


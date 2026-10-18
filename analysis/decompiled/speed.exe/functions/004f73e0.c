/* speed.exe 004f73e0 FUN_004f73e0; analysis pseudocode, not buildable source.
 * calls 004f4460 FUN_004f4460
 * calls 004ca430 FUN_004ca430
 * calls 004b8f80 FUN_004b8f80
 * calls 00664cc0 FUN_00664cc0
 */

void __fastcall FUN_004f73e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086d9bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00899a24;
  DAT_0091435c = 0;
  local_4 = 1;
  if (param_1[10] != 0) {
    FUN_00664cc0(param_1[10]);
  }
  if (param_1[0xb] != 0) {
    FUN_00664cc0(param_1[0xb]);
  }
  iVar1 = param_1[0xf];
  iVar2 = iVar1;
  if (0 < iVar1) {
    do {
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    param_1[0xf] = iVar2;
  }
  if (param_1[0xd] != 0) {
    (**(code **)(param_1[0xc] + 8))(param_1[0xd],param_1[0xe]);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  FUN_004b8f80(0,0,6,0);
  local_4 = local_4 & 0xffffff00;
  FUN_004f4460();
  *param_1 = &PTR_FUN_008983e8;
  local_4 = 2;
  FUN_004ca430(param_1);
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = pvStack_c;
  return;
}


/* speed.exe 00634b50 FUN_00634b50; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 006278f0 FUN_006278f0
 * calls 007f0fe0 FUN_007f0fe0
 * calls 00628410 FUN_00628410
 * calls 005d8660 FUN_005d8660
 * calls 006282e0 FUN_006282e0
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_00634b50(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00878b07;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005d8660(4);
  *param_1 = &PTR_FUN_008a7b50;
  param_1[9] = param_2;
  param_1[10] = 0x3f800000;
  puVar1 = param_1 + 0xb;
  local_4 = 0;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0xc] = param_1 + 1;
  FUN_005d7930(&LAB_00621e10,puVar1);
  *puVar1 = &PTR_FUN_008a6bf8;
  *puVar1 = &PTR_LAB_008a7bd4;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_008a7b9c;
  iVar4 = 0x100;
  puVar1 = param_1 + 0xd;
  do {
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[1] = DAT_0091ddbc;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  param_1[0x60e] = 0;
  if (DAT_009203c0 == 0) {
    FUN_00628410();
    param_1[6] = param_1 + 0xd;
    param_1[7] = param_1 + 0x40d;
    param_1[8] = param_1 + 0x50d;
    FUN_007f0fe0(param_1 + 0x40d,0,0x400);
    FUN_007f0fe0(param_1[8],0,0x400);
    *(undefined1 *)(param_1 + 0x60f) = 0;
    param_1[0x610] = 1;
    param_1[0x612] = 0;
    param_1[0x611] = 0;
  }
  pvVar2 = _malloc(0x20);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_006278f0(param_2);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x613] = uVar3;
  FUN_006282e0();
  DAT_009203c0 = DAT_009203c0 + 1;
  ExceptionList = pvStack_c;
  return param_1;
}


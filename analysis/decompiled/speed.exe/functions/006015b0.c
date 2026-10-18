/* speed.exe 006015b0 FUN_006015b0; analysis pseudocode, not buildable source.
 * calls 005e2650 FUN_005e2650
 * calls 00612220 FUN_00612220
 * calls 005de370 FUN_005de370
 * calls 00605140 FUN_00605140
 * calls 005e2580 FUN_005e2580
 * calls 00454810 FUN_00454810
 * calls 0045a430 FUN_0045a430
 * calls 006010e0 FUN_006010e0
 * calls 005e3980 FUN_005e3980
 * calls 006269b0 FUN_006269b0
 * calls 005ec420 FUN_005ec420
 * calls 00654af0 FUN_00654af0
 */

void __thiscall FUN_006015b0(undefined4 *param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *local_60;
  undefined1 *local_50 [8];
  undefined4 *local_30;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00876160;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 2) == '\x03') {
    if (param_2 != '\0') {
      uVar1 = *param_1;
      local_60 = &param_2;
      ExceptionList = &local_c;
      _param_2 = uVar1;
      FUN_005ec420(local_50);
      _param_2 = *(undefined4 *)(local_50[0] + 0x14);
      if ((*(byte *)((int)param_1 + 9) & 2) != 0) {
        _param_2 = param_1[3];
      }
      local_60 = (undefined1 *)0x0;
      param_1[4] = _param_2;
      *(undefined1 *)(param_1 + 2) = 4;
      FUN_005e2650(uVar1,0);
      local_50[0] = (undefined1 *)&local_60;
      local_60 = (undefined1 *)0x20d60dbf;
      uVar1 = *local_30;
      local_4 = 0;
      FUN_005de370(local_50);
      local_24 = local_50[0];
      local_20 = 0;
      local_1c = 0x18;
      local_18 = 0;
      local_10 = _param_2;
      local_14 = uVar1;
      FUN_00654af0();
      local_60 = (undefined1 *)0x0;
      FUN_005e2580(param_1[1],0);
      local_60 = (undefined1 *)(uint)*(ushort *)((int)param_1 + 10);
      local_4 = CONCAT31(local_4._1_3_,1);
      iVar2 = FUN_005e3980();
      if (iVar2 != 0) {
        local_60 = (undefined1 *)0x6016b5;
        FUN_006010e0();
      }
      local_60 = (undefined1 *)0x0;
      puVar3 = (undefined4 *)FUN_00454810(0x8e1904c7);
      if (puVar3 == (undefined4 *)0x0) {
        local_60 = (undefined1 *)0x4;
        puVar3 = (undefined4 *)FUN_006269b0();
      }
      local_60 = (undefined1 *)*puVar3;
      FUN_00612220();
      local_60 = (undefined1 *)0x6016e2;
      FUN_00605140();
      local_4 = local_4 & 0xffffff00;
      local_60 = (undefined1 *)0x6016ef;
      FUN_0045a430();
      local_4 = 0xffffffff;
      local_60 = (undefined1 *)0x601700;
      FUN_0045a430();
      ExceptionList = local_c;
      return;
    }
    *(undefined1 *)(param_1 + 2) = 2;
  }
  return;
}


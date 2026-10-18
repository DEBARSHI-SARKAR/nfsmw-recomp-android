/* speed.exe 004d1330 FUN_004d1330; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d1330(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (DAT_008f86f8 != 0) {
    if (DAT_008f8700 != 0) {
      FUN_00700140();
    }
    _DAT_00911fa4 = 0;
    thunk_FUN_007ec59c();
    puVar1 = (undefined4 *)(DAT_00911fa8 + 0x70);
    DAT_00911fa0 = 2;
    *(undefined4 *)(DAT_00911fa8 + 0x74) = *puVar1;
    *puVar1 = 1;
    FUN_004d12d0();
    puVar1 = (undefined4 *)FUN_004b8700(0x24,"EAXS_StreamManager");
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = &PTR_FUN_00896ae8;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined1 *)(puVar1 + 4) = 0;
      *(undefined1 *)((int)puVar1 + 0x11) = 0;
      puVar1[1] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
    }
    *(undefined4 **)(param_1 + 0x80) = puVar1;
    FUN_004c7d20(2);
    if ((DAT_00911fe8 & 0x20000) == 0) {
      DAT_00911fe8 = 0;
      DAT_00911ff0 = 0;
      _DAT_00911fec = 0;
      DAT_00911ff4 = 0;
    }
    FUN_004d10f0();
    (**(code **)(**(int **)(param_1 + 0x5c) + 4))();
    (**(code **)(**(int **)(param_1 + 0x58) + 4))();
    FUN_004f1ec0(0);
    FUN_004f1f60(0);
    _DAT_00912274 = param_2;
    _DAT_00912278 = param_3;
    thunk_FUN_007ec59c();
    if (DAT_008f8700 != 0) {
      FUN_00700140();
    }
  }
  return;
}


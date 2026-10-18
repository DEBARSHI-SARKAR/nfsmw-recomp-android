/* speed.exe 004d133a FUN_004d133a; analysis pseudocode, not buildable source.
 * calls 0064cef0 thunk_FUN_007ec59c
 * calls 004f1ec0 FUN_004f1ec0
 * calls 00700140 FUN_00700140
 * calls 004b8700 FUN_004b8700
 * calls 004d12d0 FUN_004d12d0
 * calls 004f1f60 FUN_004f1f60
 * calls 004d10f0 FUN_004d10f0
 * calls 004c7d20 FUN_004c7d20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d133a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *unaff_EBX;
  bool in_ZF;
  
  if (!in_ZF) {
    if (DAT_008f8700 != unaff_EBX) {
      FUN_00700140();
    }
    _DAT_00911fa4 = unaff_EBX;
    thunk_FUN_007ec59c();
    puVar1 = (undefined4 *)(DAT_00911fa8 + 0x70);
    DAT_00911fa0 = 2;
    *(undefined4 *)(DAT_00911fa8 + 0x74) = *puVar1;
    *puVar1 = 1;
    FUN_004d12d0();
    puVar1 = (undefined4 *)FUN_004b8700(0x24,"EAXS_StreamManager");
    if (puVar1 == unaff_EBX) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = &PTR_FUN_00896ae8;
      puVar1[2] = unaff_EBX;
      puVar1[3] = unaff_EBX;
      *(char *)(puVar1 + 4) = (char)unaff_EBX;
      *(char *)((int)puVar1 + 0x11) = (char)unaff_EBX;
      puVar1[1] = unaff_EBX;
      puVar1[5] = unaff_EBX;
      puVar1[6] = unaff_EBX;
      puVar1[7] = unaff_EBX;
      puVar1[8] = unaff_EBX;
    }
    *(undefined4 **)(param_1 + 0x80) = puVar1;
    FUN_004c7d20(2);
    if (((uint)DAT_00911fe8 & 0x20000) == 0) {
      DAT_00911fe8 = unaff_EBX;
      _DAT_00911fec = unaff_EBX;
      DAT_00911ff0 = unaff_EBX;
      DAT_00911ff4 = unaff_EBX;
    }
    FUN_004d10f0();
    (**(code **)(**(int **)(param_1 + 0x5c) + 4))();
    (**(code **)(**(int **)(param_1 + 0x58) + 4))();
    FUN_004f1ec0(unaff_EBX);
    FUN_004f1f60(unaff_EBX);
    _DAT_00912274 = param_3;
    _DAT_00912278 = param_4;
    thunk_FUN_007ec59c();
    if (DAT_008f8700 != unaff_EBX) {
      FUN_00700140();
    }
  }
  return;
}


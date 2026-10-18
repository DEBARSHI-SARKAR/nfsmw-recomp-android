/* speed.exe 005e5890 FUN_005e5890; analysis pseudocode, not buildable source.
 * calls 005e2580 FUN_005e2580
 * calls 00454810 FUN_00454810
 * calls 0045a430 FUN_0045a430
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e5890(undefined2 *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  float *pfVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008752b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e2580(*(undefined4 *)(param_1 + 2),0,0);
  local_4 = 0;
  puVar2 = (undefined4 *)FUN_00454810(0x52dc742c,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(4);
  }
  *(undefined4 *)(param_1 + 4) = *puVar2;
  *param_1 = 0;
  puVar3 = (undefined2 *)FUN_00454810(0x6ce23062,0);
  if (puVar3 == (undefined2 *)0x0) {
    puVar3 = (undefined2 *)FUN_006269b0(4);
  }
  param_1[1] = *puVar3;
  pfVar4 = (float *)FUN_00454810(0xc3710777,0);
  if (pfVar4 == (float *)0x0) {
    pfVar4 = (float *)FUN_006269b0(4);
  }
  fVar1 = *pfVar4 * _DAT_008a0294;
  *(undefined4 *)(param_1 + 8) = 0;
  local_4 = 0xffffffff;
  *(float *)(param_1 + 6) = fVar1;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}


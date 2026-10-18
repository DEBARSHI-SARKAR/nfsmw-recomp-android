/* speed.exe 00647fa0 FUN_00647fa0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 006e8de0 FUN_006e8de0
 * calls 00647dd0 FUN_00647dd0
 */

void __fastcall FUN_00647fa0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float10 fVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879ec8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a73c8;
  local_4 = 0;
  puVar1 = (undefined4 *)FUN_005d29d0(0x18,0);
  *puVar1 = 0xc945bc1f;
  puVar1[1] = puVar1;
  puVar1[2] = param_1[2];
  fVar3 = (float10)FUN_006e8de0();
  puVar1[4] = (float)(fVar3 + (float10)(float)param_1[3]);
  puVar1[5] = 0;
  uVar2 = FUN_00647dd0(0xc945bc1f,puVar1,0,1,0,0);
  puVar1[3] = uVar2;
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}


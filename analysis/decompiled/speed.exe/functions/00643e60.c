/* speed.exe 00643e60 FUN_00643e60; analysis pseudocode, not buildable source.
 * calls 006e8d20 FUN_006e8d20
 * calls 005d0370 FUN_005d0370
 * calls 006e8de0 FUN_006e8de0
 * calls 00642f60 FUN_00642f60
 * calls 00633f40 FUN_00633f40
 */

void __fastcall FUN_00643e60(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00879c5f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a73e0;
  local_4 = 0;
  uStack_3 = 0;
  if (param_1[6] == 0) {
    iVar3 = FUN_006e8d20();
    if (iVar3 == 4) goto LAB_00643f2a;
    fVar4 = (float10)FUN_006e8de0();
    puVar1 = DAT_00920390;
    if (fVar4 < (float10)(float)param_1[5]) goto LAB_00643f2a;
    puVar2 = DAT_00920390 + 8;
    if (DAT_00920390 != (undefined4 *)0x0) {
      iVar3 = param_1[3];
      puVar2 = DAT_00920390 + 1;
      DAT_00920390 = DAT_00920390 + 8;
      *puVar2 = 0x20;
      local_4 = 2;
      *puVar1 = &PTR_FUN_008a7c20;
      puVar1[2] = iVar3;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar2 = DAT_00920390;
      if (iVar3 != 0) {
        FUN_00633f40(iVar3,0);
        puVar2 = DAT_00920390;
      }
    }
    DAT_00920390 = puVar2;
    uVar5 = param_1[4];
  }
  else {
    uVar5 = param_1[4];
  }
  local_4 = 0;
  FUN_00642f60(uVar5);
  if (param_1[2] != 0) {
    FUN_005d0370(param_1[2],0x18,0);
  }
LAB_00643f2a:
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}


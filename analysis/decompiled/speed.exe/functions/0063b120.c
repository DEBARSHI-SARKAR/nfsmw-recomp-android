/* speed.exe 0063b120 FUN_0063b120; analysis pseudocode, not buildable source.
 * calls 0041cb10 FUN_0041cb10
 * calls 00486610 FUN_00486610
 * calls 006e8da0 FUN_006e8da0
 * calls 005d51f0 FUN_005d51f0
 * calls 00620c60 FUN_00620c60
 * calls 00620b40 FUN_00620b40
 * calls 004023c0 FUN_004023c0
 * calls 006300b0 FUN_006300b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0063b120(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008794ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a75a8;
  local_4 = 0;
  if (((((param_1[0xb] != 0) && (iVar4 = FUN_005d51f0(), iVar4 != 0)) &&
       (piVar3 = *(int **)(iVar4 + 4), piVar3 != (int *)0x0)) &&
      (((float)param_1[4] < _DAT_00890968 == ((float)param_1[4] == _DAT_00890968) &&
       ((float)param_1[3] < _DAT_00890968 == ((float)param_1[3] == _DAT_00890968))))) &&
     ((fVar1 = (float)param_1[4], fVar2 = (float)param_1[3], fVar1 / fVar2 <= _DAT_00894d58 &&
      ((fVar5 = (float10)FUN_006e8da0(), fVar5 + fVar5 <= (float10)(fVar1 / fVar2) &&
       ((float)param_1[5] < (float)param_1[4])))))) {
    (**(code **)(*piVar3 + 0x3c))();
    if (param_1[2] != DAT_0091ddbc) {
      iVar4 = (**(code **)(*piVar3 + 0x40))();
      if ((iVar4 == 0) || (iVar4 = FUN_00620c60(), iVar4 == 0)) goto LAB_0063b2fc;
      FUN_00620b40();
      FUN_00486610();
    }
    FUN_006300b0(param_1[3],param_1[5],param_1[4]);
    FUN_004023c0("Explosion");
    FUN_0041cb10();
  }
LAB_0063b2fc:
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}


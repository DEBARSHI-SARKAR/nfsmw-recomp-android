/* speed.exe 00647020 FUN_00647020; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 006e8de0 FUN_006e8de0
 * calls 00644480 FUN_00644480
 * calls 005d51f0 FUN_005d51f0
 * calls 00645a40 FUN_00645a40
 */

void __fastcall FUN_00647020(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879e68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7390;
  local_4 = 0;
  if (param_1[3] != 0) {
    iVar3 = FUN_005d51f0(DAT_00920eac,DAT_00920eac + DAT_00920eb4 * 8,param_1[3]);
    if (iVar3 != 0) {
      piVar1 = *(int **)(iVar3 + 4);
      if (piVar1 != (int *)0x0) {
        iVar3 = param_1[2];
        iVar4 = FUN_005cc240(&DAT_008a7f28);
        if (iVar3 == iVar4) {
          iVar3 = param_1[4];
        }
        if (iVar3 != DAT_0091ddbc) {
          iVar3 = (**(code **)(*piVar1 + 0x28))(iVar3);
          if (iVar3 != 0) {
            uVar2 = *(undefined4 *)(iVar3 + 0x10);
            fVar5 = (float10)FUN_006e8de0();
            FUN_00644480((float)fVar5,uVar2);
            FUN_00645a40(DAT_00920460,(float)fVar5,0,2);
          }
        }
        *param_1 = &PTR_LAB_008a66f8;
        ExceptionList = local_c;
        return;
      }
      *param_1 = &PTR_LAB_008a66f8;
      ExceptionList = local_c;
      return;
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}


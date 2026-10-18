/* speed.exe 0063c210 FUN_0063c210; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_0063c210(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7704;
  local_4 = 0;
  if (((param_1[2] != 0) &&
      (iVar1 = FUN_005d51f0(DAT_00930514,DAT_00930514 + DAT_0093051c * 8,param_1[2]), iVar1 != 0))
     && (piVar3 = *(int **)(iVar1 + 4), piVar3 != (int *)0x0)) {
    piVar2 = (int *)FUN_005d59f0(&LAB_00620fe0);
    if (piVar2 == (int *)0x0) {
      iVar1 = (**(code **)(*piVar3 + 0x20))();
      if (iVar1 != 0) {
        (**(code **)(*piVar3 + 0x20))();
        piVar3 = (int *)FUN_005d59f0(&LAB_004040e0);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x80))();
        }
      }
    }
    else {
      (**(code **)(*piVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}


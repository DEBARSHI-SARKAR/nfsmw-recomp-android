/* speed.exe 00638f00 FUN_00638f00; analysis pseudocode, not buildable source.
 * calls 00744d40 FUN_00744d40
 * calls 00744d70 FUN_00744d70
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_00638f00(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878eb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6e28;
  local_4 = 0;
  if (param_1[2] != 0) {
    iVar3 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[2]);
    if (iVar3 != 0) {
      piVar1 = *(int **)(iVar3 + 4);
      if (piVar1 != (int *)0x0) {
        cVar2 = (**(code **)(*piVar1 + 0x24))();
        if (cVar2 != '\0') {
          uVar4 = (**(code **)(*piVar1 + 0x70))();
          iVar3 = FUN_00744d40(uVar4);
          if (iVar3 != 0) {
            FUN_00744d70(0);
          }
        }
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


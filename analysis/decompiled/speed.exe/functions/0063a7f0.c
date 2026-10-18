/* speed.exe 0063a7f0 FUN_0063a7f0; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 00479f80 FUN_00479f80
 */

void __fastcall FUN_0063a7f0(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a715c;
  local_4 = 0;
  if (param_1[2] != 0) {
    iVar3 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[2]);
    if (iVar3 != 0) {
      piVar1 = *(int **)(iVar3 + 4);
      if (piVar1 != (int *)0x0) {
        cVar2 = (**(code **)(*piVar1 + 0x24))();
        if (cVar2 != '\0') {
          FUN_00479f80(piVar1);
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


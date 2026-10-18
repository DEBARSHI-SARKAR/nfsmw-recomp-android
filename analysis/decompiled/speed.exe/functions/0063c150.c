/* speed.exe 0063c150 FUN_0063c150; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_0063c150(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a76ec;
  local_4 = 0;
  if (param_1[2] != 0) {
    iVar2 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[2]);
    if ((iVar2 != 0) && (*(int **)(iVar2 + 4) != (int *)0x0)) {
      iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0x2c))();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_005d59f0(&LAB_006200d0);
        if (piVar3 != (int *)0x0) {
          cVar1 = (**(code **)(*piVar3 + 0x40))();
          if (cVar1 != '\0') {
            (**(code **)(*piVar3 + 0x50))();
          }
        }
        *param_1 = &PTR_LAB_008a66f8;
        ExceptionList = local_c;
        return;
      }
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}


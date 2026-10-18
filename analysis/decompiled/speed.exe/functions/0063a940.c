/* speed.exe 0063a940 FUN_0063a940; analysis pseudocode, not buildable source.
 * calls 004b89d0 FUN_004b89d0
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0063a940(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float10 fVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008793b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a718c;
  local_4 = 0;
  if ((((param_1[2] != 0) &&
       (iVar3 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[2]), iVar3 != 0))
      && (piVar1 = *(int **)(iVar3 + 4), piVar1 != (int *)0x0)) &&
     (((iVar3 = (**(code **)(*piVar1 + 0x20))(), iVar3 != 0 &&
       (piVar4 = (int *)FUN_005d59f0(&LAB_00404020), piVar4 != (int *)0x0)) &&
      ((cVar2 = (**(code **)(*piVar4 + 0x2c))(), cVar2 != '\0' &&
       (fVar6 = (float10)(**(code **)(*piVar4 + 0x1c))(),
       fVar6 < (float10)_DAT_00890968 != (fVar6 == (float10)_DAT_00890968))))))) {
    uVar5 = (**(code **)(*piVar1 + 0x70))();
    iVar3 = FUN_004b89d0(uVar5);
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 0xb0) = 1;
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}


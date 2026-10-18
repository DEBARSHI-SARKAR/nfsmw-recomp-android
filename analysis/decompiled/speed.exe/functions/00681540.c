/* speed.exe 00681540 FUN_00681540; analysis pseudocode, not buildable source.
 * calls 00681340 FUN_00681340
 * calls 00401a20 FUN_00401a20
 * calls 0067bc20 FUN_0067bc20
 * calls 00668520 FUN_00668520
 * calls 005d29d0 FUN_005d29d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00681540(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087b542;
  local_c = ExceptionList;
  if (DAT_0092617c < 0x800) {
    ExceptionList = &local_c;
    iVar1 = FUN_00681340(*(undefined4 *)(param_1 + 0x24));
    if ((((iVar1 != 0) && (0 < *(int *)(iVar1 + 4))) && (iVar1 = iVar1 + 0x10, iVar1 != 0)) &&
       ((param_2 != 0 && (iVar1 != 0)))) {
      FUN_00668520(local_18);
      fVar4 = (float10)FUN_00401a20(local_18);
      if (fVar4 < (float10)_DAT_00890968 == (fVar4 == (float10)_DAT_00890968)) {
        iVar2 = FUN_005d29d0(0xf4,0);
        local_4 = 0;
        if (iVar2 != 0) {
          uVar3 = FUN_0067bc20(param_1,iVar1,param_2,param_3);
          ExceptionList = local_c;
          return uVar3;
        }
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}


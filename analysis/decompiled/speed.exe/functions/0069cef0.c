/* speed.exe 0069cef0 FUN_0069cef0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069cef0(int param_1,float param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined4 unaff_retaddr;
  
  if ((*(int *)(param_1 + 0x7c) != 0) &&
     (piVar1 = (int *)FUN_005d59f0(&LAB_00404010), piVar1 != (int *)0x0)) {
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x7c) + 0x90))();
    iVar2 = (**(code **)(*piVar1 + 4))();
    if (iVar2 == 0) {
      if ((_DAT_008aac64 < (float)fVar3) &&
         ((param_3 == _DAT_00890968 || (_DAT_00890968 < param_2)))) {
        (**(code **)(*piVar1 + 0xc))(2);
      }
    }
    else if ((((float)fVar3 < _DAT_008aacec) && (_DAT_00890968 < param_3)) &&
            (param_2 == _DAT_00890968)) {
      (**(code **)(*piVar1 + 0xc))(0);
    }
    iVar2 = (**(code **)(*piVar1 + 4))();
    if (iVar2 == 0) {
      (**(code **)(*(int *)(param_1 + 0x48) + 0x18))(param_3);
      (**(code **)(*(int *)(param_1 + 0x48) + 0x1c))(unaff_retaddr);
    }
  }
  return;
}


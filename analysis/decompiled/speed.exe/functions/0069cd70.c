/* speed.exe 0069cd70 FUN_0069cd70; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 00401ae0 FUN_00401ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069cd70(int param_1,float param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_005d59f0(&LAB_00404010);
  if (((piVar1 != (int *)0x0) && (param_2 <= _DAT_00890968)) && (param_3 <= _DAT_00890968)) {
    iVar2 = (**(code **)(*piVar1 + 4))();
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x7c) + 0x90))();
    if (iVar2 < 1) {
      uVar4 = 0x41200000;
      fVar3 = -fVar3;
    }
    else {
      if ((float10)_DAT_008aac1c <= fVar3) {
        return;
      }
      uVar4 = 0x41000000;
    }
    iVar2 = *(int *)(param_1 + 0x48);
    fVar3 = (float10)FUN_00401ae0((float)fVar3,0,uVar4);
    (**(code **)(iVar2 + 0x1c))((float)((float10)_DAT_0089096c - fVar3 * (float10)_DAT_00891050));
  }
  return;
}


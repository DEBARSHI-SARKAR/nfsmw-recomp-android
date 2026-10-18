/* speed.exe 00669860 FUN_00669860; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 */

void __thiscall FUN_00669860(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x74))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x74))();
    iVar1 = *piVar2;
    fVar3 = (float10)FUN_006e8de0(0,2);
    (**(code **)(iVar1 + 0x34))(param_2,(float)fVar3);
  }
  return;
}


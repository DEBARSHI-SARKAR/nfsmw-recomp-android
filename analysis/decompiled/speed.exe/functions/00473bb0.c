/* speed.exe 00473bb0 FUN_00473bb0; analysis pseudocode, not buildable source.
 * calls 00468fa0 FUN_00468fa0
 * calls 00473ac0 FUN_00473ac0
 * calls 00444fe0 FUN_00444fe0
 * calls 005d59f0 FUN_005d59f0
 */

void __thiscall FUN_00473bb0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      (**(code **)(*(int *)(param_1 + 0x18) + 8))(*(int *)(param_1 + 0x40));
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  }
  else {
    FUN_00473ac0();
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_00444fe0(local_50,*(int *)(param_1 + 0x2c));
      if (*(int *)(param_1 + 0x40) != 0) {
        piVar1 = (int *)FUN_005d59f0(&LAB_004039c0);
        if (piVar1 != (int *)0x0) {
          piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x40) + 4))();
          piVar2 = (int *)(**(code **)(*piVar2 + 0x54))();
          iVar3 = (**(code **)(*piVar1 + 0x3c))();
          fStack_58 = *(float *)(iVar3 + 4);
          fStack_54 = *(float *)(iVar3 + 8);
          fStack_5c = 0.0;
          (**(code **)(*piVar2 + 0xa0))(&fStack_5c,0);
          pfVar4 = (float *)(**(code **)(*piVar2 + 0x20))();
          fStack_5c = fStack_5c + *pfVar4;
          fStack_58 = fStack_58 + pfVar4[1];
          fStack_20 = fStack_54 + pfVar4[2];
          fStack_1c = -fStack_5c;
          fStack_18 = fStack_58;
        }
      }
      FUN_00468fa0(param_2,local_50,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34))
      ;
    }
  }
  return;
}


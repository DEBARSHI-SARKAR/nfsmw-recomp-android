/* speed.exe 004f16f0 FUN_004f16f0; analysis pseudocode, not buildable source.
 * calls 004e3940 FUN_004e3940
 * calls 004e3e40 FUN_004e3e40
 * calls 004ea380 FUN_004ea380
 * calls 004e3780 FUN_004e3780
 */

void __thiscall FUN_004f16f0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x5c) + param_2 * 4);
  if (*piVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x1b8);
    *(int *)(param_1 + 0x1b8) = iVar2 + 0x60;
    *piVar1 = *(int *)(param_1 + 0x60) + iVar2;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x5c) + param_2 * 4) + 4))
              (param_1,param_2,param_3,param_4);
  }
  FUN_004e3e40(param_4,*(undefined4 *)(*(int *)(param_1 + 0x5c) + param_2 * 4));
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_4 * 0x60 + *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 4) + 0x5c) + 0x1c
          ) = *(int *)(*(int *)(iVar2 + 8) + iVar2 + param_2 * 4) + iVar2;
  FUN_004ea380();
  FUN_004e3940();
  FUN_004e3780();
  return;
}


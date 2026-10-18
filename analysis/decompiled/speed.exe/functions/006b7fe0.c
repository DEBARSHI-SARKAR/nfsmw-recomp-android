/* speed.exe 006b7fe0 FUN_006b7fe0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __thiscall FUN_006b7fe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    cVar1 = (**(code **)(*(int *)(param_1 + 100) + 0x10))();
    if (cVar1 != '\0') {
      piVar2 = (int *)FUN_005d59f0(&LAB_004039e0);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x10))(param_2,param_3);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  return;
}


/* speed.exe 006a3bd0 FUN_006a3bd0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __thiscall FUN_006a3bd0(int param_1,int param_2)

{
  int *piVar1;
  float10 fVar2;
  
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 8);
  if (*(int *)(param_1 + 0x104) != 0) {
    piVar1 = (int *)FUN_005d59f0(&LAB_00404060);
    *(int **)(param_1 + 0x100) = piVar1;
    if (piVar1 != (int *)0x0) {
      fVar2 = (float10)(**(code **)(*piVar1 + 0x3c))();
      *(float *)(param_2 + 0xc) = (float)fVar2;
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x100) + 0x44))();
      *(float *)(param_2 + 0x10) = (float)fVar2;
    }
  }
  return;
}


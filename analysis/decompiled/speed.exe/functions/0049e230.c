/* speed.exe 0049e230 FUN_0049e230; analysis pseudocode, not buildable source.
 * calls 00491350 FUN_00491350
 * calls 00491360 FUN_00491360
 */

void __thiscall FUN_0049e230(int *param_1,uint param_2)

{
  int iVar1;
  
  param_1[2] = param_1[2] + 1;
  if ((uint)param_1[1] < param_2) {
    if (*param_1 != 0) {
      (*(code *)PTR_FUN_008ee4d4)(*param_1,param_1[1]);
    }
    param_1[1] = param_2;
    iVar1 = (*(code *)PTR_FUN_008ee4d0)(param_2,"ScratchBuffer::mBuffer");
    *param_1 = iVar1;
  }
  return;
}


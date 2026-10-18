/* speed.exe 00686410 FUN_00686410; analysis pseudocode, not buildable source.
 * calls 00684a10 FUN_00684a10
 * calls 00674b20 FUN_00674b20
 * calls 006863b0 FUN_006863b0
 */

void __thiscall FUN_00686410(int param_1,uint param_2)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = param_2;
  cVar2 = (char)param_2;
  if (cVar2 != *(char *)(param_1 + 0xb0)) {
    FUN_00674b20(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 4));
    *(int *)(*(int *)(param_1 + 0xc0) + 4) = *(int *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
    *(int *)(*(int *)(param_1 + 0xc0) + 8) = *(int *)(param_1 + 0xc0);
    *(char *)(param_1 + 0xb0) = cVar2;
    FUN_006863b0();
    param_2 = DAT_0092c5f0;
    FUN_00684a10(&param_2,uVar1);
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      param_2 = (uint)*(byte *)(param_1 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00686492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x40) + 0x18))();
      return;
    }
  }
  return;
}


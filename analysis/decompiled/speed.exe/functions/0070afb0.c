/* speed.exe 0070afb0 FUN_0070afb0; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 */

void __thiscall FUN_0070afb0(int param_1,undefined4 *param_2,void *param_3)

{
  FID_conflict__memcpy
            (param_3,(void *)((int)param_3 + 4),
             (*(int *)(param_1 + 8) - ((int)param_3 + 4) >> 2) << 2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  *param_2 = param_3;
  return;
}


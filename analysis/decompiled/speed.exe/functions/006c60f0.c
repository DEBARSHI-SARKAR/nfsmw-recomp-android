/* speed.exe 006c60f0 FUN_006c60f0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006c60f0(int param_1)

{
  float fVar1;
  float fStack_1c;
  
  if (DAT_009829f0 != (int *)0x0) {
    fStack_1c = *(float *)(*DAT_009829f0 + 0x18);
    (**(code **)(**(int **)(param_1 + 0x48) + 0xd0))
              (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xe0c));
  }
  if (DAT_009829f4 != (int *)0x0) {
    fStack_1c = *(float *)(*DAT_009829f4 + 0x18);
    (**(code **)(**(int **)(param_1 + 0x48) + 0xd0))
              (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xe34));
  }
  if (DAT_009829f8 != (int *)0x0) {
    fStack_1c = *(float *)(*DAT_009829f8 + 0x18);
    (**(code **)(**(int **)(param_1 + 0x48) + 0xd0))
              (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xe5c));
  }
  if (DAT_0098854c != DAT_008f8310) {
    DAT_0098854c = DAT_008f8310;
    DAT_00988548 = *DAT_009b392c * _DAT_008933d4 * DAT_00925970 * _DAT_008adfdc + DAT_00988548;
  }
  fStack_1c = DAT_00988548;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x78))
            (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x1b4));
  if (DAT_00982a20 != 0) {
    fVar1 = *(float *)(*(int *)(&DAT_00919648 + *(int *)(DAT_00982a20 + 4) * 0x70) + 0x290);
    if (*(float *)(*(int *)(&DAT_00919648 + *(int *)(DAT_00982a20 + 4) * 0x70) + 0x290) ==
        _DAT_00890968) {
      fVar1 = _DAT_00890cd4;
    }
    if (_DAT_00890968 <= _DAT_008fae40) {
      fVar1 = _DAT_008fae40;
    }
    fVar1 = _DAT_008af2b8 * fVar1;
    fStack_1c = _DAT_00890968;
    if ((_DAT_00890968 < fVar1) && (fStack_1c = fVar1, _DAT_0089096c < fVar1)) {
      fStack_1c = _DAT_0089096c;
    }
    (**(code **)(**(int **)(param_1 + 0x48) + 0x88))
              (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xe84),
               &fStack_1c);
  }
  return;
}


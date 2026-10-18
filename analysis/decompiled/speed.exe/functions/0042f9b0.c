/* speed.exe 0042f9b0 FUN_0042f9b0; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 005d59f0 FUN_005d59f0
 */

void __thiscall FUN_0042f9b0(int param_1,int param_2)

{
  int iVar1;
  int *_Dst;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (param_2 == 0) {
    if (iVar1 != 0) goto LAB_0042f9e2;
  }
  else if ((iVar1 == 0) || (*(int *)(param_2 + 4) != *(int *)(iVar1 + 4))) {
LAB_0042f9e2:
    iVar1 = FUN_005d59f0(&LAB_004040e0);
    if (iVar1 != 0) {
      for (_Dst = *(int **)(param_1 + 0x1c); (_Dst != *(int **)(param_1 + 0x20) && (*_Dst != iVar1))
          ; _Dst = _Dst + 1) {
      }
      FID_conflict__memcpy(_Dst,_Dst + 1,(*(int *)(param_1 + 0x20) - (int)(_Dst + 1) >> 2) << 2);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -4;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


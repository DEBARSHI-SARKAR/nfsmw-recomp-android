/* speed.exe 004ce820 FUN_004ce820; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 004cdba0 FUN_004cdba0
 */

void __thiscall FUN_004ce820(int param_1,uint param_2)

{
  void *_Dst;
  uint uVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - iVar2 >> 2;
  }
  if (uVar1 < param_2) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar2 >> 2;
    }
    FUN_004cdba0(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
    return;
  }
  if (((iVar2 != 0) &&
      (pvVar3 = *(void **)(param_1 + 8), param_2 < (uint)((int)pvVar3 - iVar2 >> 2))) &&
     (_Dst = (void *)(iVar2 + param_2 * 4), _Dst != pvVar3)) {
    pvVar3 = FID_conflict__memcpy(_Dst,pvVar3,0);
    *(void **)(param_1 + 8) = pvVar3;
  }
  return;
}


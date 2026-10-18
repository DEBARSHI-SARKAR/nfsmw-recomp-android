/* speed.exe 0085c950 FUN_0085c950; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 0085c120 FUN_0085c120
 * calls 0085bda0 FUN_0085bda0
 */

void FUN_0085c950(void)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int iVar3;
  void *_Dst;
  undefined4 local_4;
  
  piVar1 = (int *)(unaff_EBX + 400);
  iVar3 = 0;
  if (0 < *(int *)(unaff_EBX + 400)) {
    local_4 = (void *)(unaff_EBX + 0x248);
    _Dst = (void *)(unaff_EBX + 0x198);
    do {
      if ((*(byte *)((int)_Dst + 0xae) & 1) != 0) {
        FUN_0085c120();
        if (iVar3 != *piVar1 + -1) {
          FID_conflict__memcpy(_Dst,local_4,((*piVar1 - iVar3) + -1) * 0xb0);
        }
        *piVar1 = *piVar1 + -1;
        uVar2 = FUN_0085bda0(unaff_EBX + 0x74);
        *(undefined4 *)(unaff_EBX + 0xd4) = uVar2;
        iVar3 = iVar3 + -1;
        _Dst = (void *)((int)_Dst + -0xb0);
        local_4 = (void *)((int)local_4 + -0xb0);
      }
      iVar3 = iVar3 + 1;
      local_4 = (void *)((int)local_4 + 0xb0);
      _Dst = (void *)((int)_Dst + 0xb0);
    } while (iVar3 < *piVar1);
  }
  return;
}


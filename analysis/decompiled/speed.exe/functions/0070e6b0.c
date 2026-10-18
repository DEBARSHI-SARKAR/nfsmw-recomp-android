/* speed.exe 0070e6b0 FUN_0070e6b0; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 004b1ce0 FUN_004b1ce0
 * calls 00706b20 FUN_00706b20
 * calls 004ccab0 FUN_004ccab0
 * calls 00706b60 FUN_00706b60
 * calls 004b2210 FUN_004b2210
 * calls 004b21b0 FUN_004b21b0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0070e6b0(void *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  void *_Dst;
  uint uVar5;
  void *local_4;
  
  local_4 = param_1;
  if ((*(int *)((int)param_1 + 0x2c) != 0) && (cVar2 = FUN_004b21b0(), cVar2 != '\0')) {
    FUN_004b2210();
  }
  iVar1 = *(int *)((int)param_1 + 0x7c);
  if ((iVar1 != 0) && (*(int *)((int)param_1 + 0x80) - iVar1 >> 2 != 0)) {
    pvVar4 = *(void **)((int)param_1 + 0x80);
    piVar3 = (int *)FUN_00706b20(&local_4,iVar1,pvVar4,&LAB_0070e680);
    _Dst = (void *)*piVar3;
    if (_Dst != pvVar4) {
      FUN_00706b60(&local_4,(int)_Dst + 4,pvVar4,_Dst,&LAB_0070e680);
      _Dst = local_4;
    }
    if (_Dst != *(void **)((int)param_1 + 0x80)) {
      pvVar4 = FID_conflict__memcpy(_Dst,*(void **)((int)param_1 + 0x80),0);
      *(void **)((int)param_1 + 0x80) = pvVar4;
    }
    for (uVar5 = 0;
        (iVar1 = *(int *)((int)param_1 + 0x7c), iVar1 != 0 &&
        (uVar5 < (uint)(*(int *)((int)param_1 + 0x80) - iVar1 >> 2))); uVar5 = uVar5 + 1) {
      iVar1 = *(int *)(iVar1 + uVar5 * 4);
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0x18) = 0;
      }
    }
  }
  iVar1 = *(int *)((int)param_1 + 0x7c);
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)((int)param_1 + 0x84) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)((int)param_1 + 0x7c) = 0;
  *(undefined4 *)((int)param_1 + 0x80) = 0;
  *(undefined4 *)((int)param_1 + 0x84) = 0;
  iVar1 = *(int *)((int)param_1 + 0x88);
  if (iVar1 != 0) {
    FUN_004ccab0();
    FUN_004b1ce0(iVar1);
  }
  *(undefined4 *)((int)param_1 + 0x88) = 0;
  *(uint *)((int)param_1 + 0x28) = *(uint *)((int)param_1 + 0x28) & 0xffffffe3;
  return;
}


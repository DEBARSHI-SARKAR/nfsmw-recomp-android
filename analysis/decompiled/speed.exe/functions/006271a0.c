/* speed.exe 006271a0 FUN_006271a0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

void * __fastcall FUN_006271a0(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x14))();
  pvVar2 = _malloc(iVar1 << 2);
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (0 < iVar1) {
    do {
      *(undefined4 *)((int)pvVar2 + iVar3 * 4) = *(undefined4 *)(param_1[8] + iVar3 * 4);
      iVar3 = iVar3 + 1;
      iVar1 = (**(code **)(*param_1 + 0x14))();
    } while (iVar3 < iVar1);
  }
  return pvVar2;
}


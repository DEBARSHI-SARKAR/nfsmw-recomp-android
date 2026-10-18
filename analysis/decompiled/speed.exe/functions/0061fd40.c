/* speed.exe 0061fd40 FUN_0061fd40; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 006101e0 FUN_006101e0
 * calls 0061fb40 FUN_0061fb40
 */

void FUN_0061fd40(void)

{
  size_t _Size;
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  
  iVar1 = FUN_0061fb40(&stack0x00000004);
  pvVar3 = *(void **)(iVar1 + 8);
  puVar2 = (undefined4 *)
           FUN_006101e0(&stack0x00000004,*(undefined4 *)(iVar1 + 4),pvVar3,&stack0x00000008);
  if ((void *)*puVar2 != pvVar3) {
    _Size = (*(int *)(iVar1 + 8) - (int)pvVar3 >> 2) * 4;
    pvVar3 = FID_conflict__memcpy((void *)*puVar2,pvVar3,_Size);
    *(void **)(iVar1 + 8) = (void *)((int)pvVar3 + _Size);
  }
  return;
}


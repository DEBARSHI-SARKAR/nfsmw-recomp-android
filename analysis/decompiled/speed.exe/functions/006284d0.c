/* speed.exe 006284d0 FUN_006284d0; analysis pseudocode, not buildable source.
 */

void FUN_006284d0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    *(undefined4 *)((int)&DAT_0091f41c + iVar1) = *(undefined4 *)((int)&DAT_008f6d84 + iVar1);
    *(undefined4 *)((int)&DAT_0091f420 + iVar1) = *(undefined4 *)((int)&DAT_008f6d88 + iVar1);
    *(undefined4 *)((int)&DAT_0091f424 + iVar1) = *(undefined4 *)((int)&DAT_008f6d8c + iVar1);
    *(undefined4 *)((int)&DAT_0091f428 + iVar1) = *(undefined4 *)((int)&DAT_008f6d90 + iVar1);
    iVar2 = iVar1 + 0x34;
    *(undefined4 *)((int)&DAT_0091f42c + iVar1) = *(undefined4 *)((int)&DAT_008f6d94 + iVar1);
    *(undefined4 *)((int)&DAT_0091f430 + iVar1) = *(undefined4 *)((int)&DAT_008f6d98 + iVar1);
    iVar1 = iVar2;
  } while (iVar2 < 0x3dc);
  return;
}


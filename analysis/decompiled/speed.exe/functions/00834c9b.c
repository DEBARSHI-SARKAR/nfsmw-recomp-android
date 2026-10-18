/* speed.exe 00834c9b FUN_00834c9b; analysis pseudocode, not buildable source.
 * calls 00831beb FUN_00831beb
 */

void FUN_00834c9b(int param_1)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  byte *pbVar3;
  int *unaff_EBX;
  int *unaff_EDI;
  uint local_8;
  
  *unaff_EBX = 0;
  *unaff_EDI = 0;
  local_8 = (*(byte *)(in_EAX + 7) + 7) / 8;
  iVar2 = FUN_00831beb();
  iVar2 = iVar2 + local_8 * param_1;
  pbVar3 = (byte *)(*(byte *)(in_EAX + 6) * local_8 + iVar2);
  if ((local_8 < 5) && (local_8 != 0)) {
    iVar2 = iVar2 - (int)pbVar3;
    bVar1 = 0x18;
    do {
      *unaff_EBX = *unaff_EBX + ((uint)pbVar3[iVar2] << (bVar1 & 0x1f));
      *unaff_EDI = *unaff_EDI + ((uint)*pbVar3 << (bVar1 & 0x1f));
      pbVar3 = pbVar3 + 1;
      local_8 = local_8 - 1;
      bVar1 = bVar1 - 8;
    } while (local_8 != 0);
  }
  return;
}


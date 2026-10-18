/* speed.exe 005f1720 FUN_005f1720; analysis pseudocode, not buildable source.
 * calls 005ef060 FUN_005ef060
 */

void __fastcall FUN_005f1720(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar1 = iVar2 + (uint)*(ushort *)(param_1 + 0x1a) * 8;
  FUN_005ef060(iVar2,iVar1,iVar1 - iVar2 >> 3);
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  return;
}


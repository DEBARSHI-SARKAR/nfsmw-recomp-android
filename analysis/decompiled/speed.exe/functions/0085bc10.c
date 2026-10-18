/* speed.exe 0085bc10 FUN_0085bc10; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0085bc10(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 400)) {
    puVar2 = (ushort *)(param_2 + 0x244);
    do {
      uVar1 = *(ushort *)(param_2 + 0x2c);
      *puVar2 = uVar1;
      if ((iVar3 != 0) && (*(int *)(param_2 + 0x178) != 1)) {
        *puVar2 = uVar1 & 0xfffe;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x58;
    } while (iVar3 < *(int *)(param_2 + 400));
  }
  return;
}


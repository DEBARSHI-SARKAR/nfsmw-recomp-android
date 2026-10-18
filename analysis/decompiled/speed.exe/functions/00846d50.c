/* speed.exe 00846d50 FUN_00846d50; analysis pseudocode, not buildable source.
 * calls 00852430 GetTickCount
 */

undefined4 FUN_00846d50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar2 = 0;
  if (0 < in_EAX) {
    DVar3 = GetTickCount();
    iVar2 = DVar3 + in_EAX * 1000;
  }
  *(undefined4 *)(unaff_ESI + (unaff_EDI * 5 + 0x244) * 4) =
       *(undefined4 *)(&DAT_0090d360 + unaff_EDI * 4);
  iVar4 = *(int *)(unaff_ESI + 0x1c) + 1;
  *(int *)(unaff_ESI + 0x1c) = iVar4;
  iVar1 = unaff_ESI + unaff_EDI * 0x14;
  *(int *)(iVar1 + 0x914) = iVar4;
  *(undefined4 *)(iVar1 + 0x91c) = param_2;
  *(int *)(iVar1 + 0x918) = iVar2;
  *(undefined4 *)(iVar1 + 0x920) = param_1;
  return *(undefined4 *)(iVar1 + 0x914);
}


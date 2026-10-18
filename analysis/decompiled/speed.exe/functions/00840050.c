/* speed.exe 00840050 FUN_00840050; analysis pseudocode, not buildable source.
 * calls 00852430 GetTickCount
 */

undefined4 * FUN_00840050(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 0x1d20);
  if (0x1f < iVar2) {
    return (undefined4 *)0x0;
  }
  *(int *)(unaff_EDI + 0x1d20) = iVar2 + 1;
  puVar1 = (undefined4 *)(unaff_EDI + 0x1a20 + iVar2 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[1] = param_1;
  puVar1[4] = param_2;
  puVar1[5] = param_3;
  DVar3 = GetTickCount();
  puVar1[2] = DVar3;
  *puVar1 = *(undefined4 *)(unaff_EDI + 0x1d30);
  *(int *)(unaff_EDI + 0x1d30) = *(int *)(unaff_EDI + 0x1d30) + 1;
  puVar1[3] = 0xffffffff;
  return puVar1;
}


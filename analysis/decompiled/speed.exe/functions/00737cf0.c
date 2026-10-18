/* speed.exe 00737cf0 FUN_00737cf0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00737cf0(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 local_4;
  
  local_4 = 0;
  uVar1 = 0;
  if ((param_2 < 0x4d) && (iVar2 = *(int *)(param_1 + 0x1628), iVar2 <= *(int *)(param_1 + 0x162c)))
  {
    puVar4 = (uint *)(param_1 + 0xb84 + iVar2 * 4 + param_2 * 0x14);
    do {
      uVar3 = *puVar4 & 0xfffffffc;
      *puVar4 = *puVar4 & 0xfffffffc | (uint)(param_3 != '\0');
      if ((iVar2 == *(int *)(param_1 + 0x1628)) && (uVar3 != 0)) {
        local_4 = *(undefined4 *)(uVar3 + 8);
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
      uVar1 = local_4;
    } while (iVar2 <= *(int *)(param_1 + 0x162c));
  }
  return uVar1;
}


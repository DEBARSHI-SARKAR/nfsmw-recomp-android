/* speed.exe 0085b3b0 FUN_0085b3b0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0085b3b0(int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  
  iVar3 = param_1 * 2;
  param_2 = param_2 + iVar3;
  iVar5 = in_EAX + iVar3;
  puVar6 = (undefined2 *)(param_3 + iVar3);
  uVar4 = 0;
  if (0 < param_1) {
    do {
      puVar1 = (ushort *)(param_2 + -2);
      puVar2 = (ushort *)(iVar5 + -2);
      param_2 = param_2 + -2;
      iVar5 = iVar5 + -2;
      uVar4 = ((uint)*puVar1 - (uint)*puVar2) - uVar4;
      puVar6 = puVar6 + -1;
      *puVar6 = (short)uVar4;
      uVar4 = uVar4 >> 0x10 & 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


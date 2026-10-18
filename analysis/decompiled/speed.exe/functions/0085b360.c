/* speed.exe 0085b360 FUN_0085b360; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0085b360(int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  undefined2 *puVar5;
  
  iVar3 = in_EAX * 2;
  param_1 = param_1 + iVar3;
  param_2 = param_2 + iVar3;
  puVar5 = (undefined2 *)(param_3 + iVar3);
  uVar4 = 0;
  if (0 < in_EAX) {
    do {
      puVar1 = (ushort *)(param_2 + -2);
      puVar2 = (ushort *)(param_1 + -2);
      param_2 = param_2 + -2;
      param_1 = param_1 + -2;
      uVar4 = (uint)*puVar2 + *puVar1 + uVar4;
      puVar5 = puVar5 + -1;
      *puVar5 = (short)uVar4;
      uVar4 = uVar4 >> 0x10;
      in_EAX = in_EAX + -1;
    } while (in_EAX != 0);
  }
  return;
}


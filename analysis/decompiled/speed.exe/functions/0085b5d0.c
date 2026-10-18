/* speed.exe 0085b5d0 FUN_0085b5d0; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_0085b5d0(int param_1,ushort *param_2,byte *param_3)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  
  iVar3 = (in_EAX + 1) / 2;
  iVar4 = iVar3;
  if ((-1 < param_1) && (iVar4 = param_1, iVar3 < param_1)) {
    uVar1 = param_1 - iVar3;
    puVar5 = param_2;
    for (uVar2 = uVar1 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar5[0] = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
    }
    for (uVar2 = (uint)((uVar1 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    param_2 = param_2 + uVar1;
    iVar4 = param_1 - uVar1;
  }
  if (in_EAX / 2 != iVar3) {
    *param_2 = (ushort)*param_3;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    iVar4 = iVar4 + -1;
  }
  if (0 < iVar4) {
    do {
      iVar4 = iVar4 + -1;
      *param_2 = CONCAT11(*param_3,param_3[1]);
      param_3 = param_3 + 2;
      param_2 = param_2 + 1;
    } while (iVar4 != 0);
  }
  return iVar3;
}


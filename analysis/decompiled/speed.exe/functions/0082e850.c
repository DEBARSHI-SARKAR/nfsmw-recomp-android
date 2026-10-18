/* speed.exe 0082e850 FUN_0082e850; analysis pseudocode, not buildable source.
 */

void FUN_0082e850(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar3 = param_1 + 0xc;
  iVar4 = param_2;
  if (uVar3 <= param_3) {
    while (-1 < iVar4) {
      uVar2 = *(uint *)(uVar3 + 4);
      if ((uVar2 >> 0x1a & 7) == (uVar1 >> 0x1a & 7)) {
        if (((uVar2 & 0x7f00) == 0x100) && ((uVar2 & 0x700000) == 0x400000)) {
          *(uint *)(uVar3 + 4) = *(uint *)(uVar3 + 4) | 0x8000;
          return;
        }
        if (param_2 == 0) {
          return;
        }
        iVar4 = 0;
LAB_0082e8b4:
        *(uint *)(uVar3 + 4) = uVar2 | 0x8000;
      }
      else if (iVar4 == 0) goto LAB_0082e8b4;
      uVar3 = uVar3 + 0xc;
      if (param_3 < uVar3) {
        return;
      }
    }
  }
  return;
}


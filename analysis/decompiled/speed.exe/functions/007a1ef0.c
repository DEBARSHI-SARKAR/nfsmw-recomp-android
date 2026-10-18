/* speed.exe 007a1ef0 FUN_007a1ef0; analysis pseudocode, not buildable source.
 * calls 006da9b0 FUN_006da9b0
 */

void __thiscall FUN_007a1ef0(uint *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)param_1[3]) {
    iVar3 = 0;
    do {
      bVar1 = true;
      bVar2 = (byte)iVar4;
      if (((param_4 & 4) != 0) && ((*param_1 & 1 << (bVar2 & 0x1f)) == 0)) {
        bVar1 = false;
      }
      if (((param_4 & 1) != 0) && ((param_1[2] & 1 << (bVar2 & 0x1f)) != 0)) {
        bVar1 = false;
      }
      if ((((param_4 & 2) == 0) || ((param_1[1] & 1 << (bVar2 & 0x1f)) == 0)) && (bVar1)) {
        FUN_006da9b0(param_1[4] + iVar3,param_3,0,4,0);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar4 < (int)param_1[3]);
  }
  return;
}


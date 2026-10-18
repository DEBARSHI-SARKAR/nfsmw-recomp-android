/* speed.exe 007247e0 FUN_007247e0; analysis pseudocode, not buildable source.
 * calls 007244f0 FUN_007244f0
 * calls 00460000 FUN_00460000
 * calls 0045f9f0 FUN_0045f9f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_007247e0(int param_1,undefined4 param_2,float param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar2 = FUN_0045f9f0(param_1 + 0xc,param_1 + 0x14,param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = FUN_0045f9f0(param_1 + 0xc,param_1 + 0x14,param_2,0);
    if ((iVar2 != 0) && (cVar1 = FUN_007244f0(param_1 + 0x24), cVar1 != '\0')) {
      return (float10)_DAT_00890968;
    }
    iVar3 = (int)*(char *)(param_1 + 10);
    iVar2 = 0;
    if (0 < iVar3) {
      iVar4 = param_1 + 0x24;
      do {
        iVar2 = iVar2 + 1;
        fVar5 = (float10)FUN_00460000(param_2,iVar4,param_1 + 0x24 + (iVar2 % iVar3) * 8);
        if (fVar5 < (float10)param_3) {
          param_3 = (float)fVar5;
        }
        iVar3 = (int)*(char *)(param_1 + 10);
        iVar4 = iVar4 + 8;
      } while (iVar2 < iVar3);
    }
  }
  return (float10)param_3;
}


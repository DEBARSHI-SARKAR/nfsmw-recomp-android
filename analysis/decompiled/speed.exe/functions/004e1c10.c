/* speed.exe 004e1c10 FUN_004e1c10; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004e1c10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = *(int *)(param_2 + 0x18);
  if ((iVar2 != 0) && ((*(int *)(param_1 + 0x24) < 1 || (iVar2 == *(int *)(param_1 + 0x24))))) {
    fVar3 = (float)iVar2 * _DAT_00897f2c;
    iVar1 = (int)ROUND(fVar3);
    fVar4 = (float)iVar2 * _DAT_00897f34;
    if (*(int *)(param_1 + 0xc) < (int)ROUND(fVar4) + iVar1) {
      return 0;
    }
    FUN_0081bccb();
    *(int *)(param_1 + 0x10) = (int)ROUND(fVar3);
    *(int *)(param_1 + 0x14) = iVar1;
    *(int *)(param_1 + 0x18) = (int)ROUND(fVar4);
    *(int *)(param_1 + 0x28) = param_2;
    FUN_0081bcd9();
    return 1;
  }
  return 0;
}


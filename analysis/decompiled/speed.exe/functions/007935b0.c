/* speed.exe 007935b0 FUN_007935b0; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 * calls 0083e3b0 FUN_0083e3b0
 * calls 0056e340 FUN_0056e340
 * calls 0078b8c0 FUN_0078b8c0
 */

int FUN_007935b0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0078b8c0(param_1,param_2,param_3);
  iVar1 = FUN_0083e3b0(*(undefined4 *)((int)((ulonglong)uVar4 >> 0x20) + -0x10 + (int)uVar4 * 4));
  if (param_2 != 1) {
    return iVar1;
  }
  if (iVar1 != 0) {
    uVar2 = FUN_0056e340();
    iVar3 = FUN_00460d20(iVar1 + 0xc,uVar2);
    if (iVar3 == 0) {
      return iVar1;
    }
  }
  return 0;
}


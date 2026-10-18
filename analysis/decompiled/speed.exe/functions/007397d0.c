/* speed.exe 007397d0 FUN_007397d0; analysis pseudocode, not buildable source.
 * calls 00460c20 FUN_00460c20
 */

int __thiscall FUN_007397d0(char *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = param_3;
  iVar1 = param_4 + param_3 * 5;
  iVar4 = *(int *)(param_1 + iVar1 * 4 + 4);
  if (iVar4 == -1) {
    return 0;
  }
  if (*param_1 != '\0') {
    param_3._3_1_ = SUB41(iVar2,3);
    param_3._0_3_ = (uint3)CONCAT11((char)param_4 + 'A',0x5f);
    if (*(ushort *)(param_1 + 2) != 0xffff) {
      param_2 = FUN_00460c20(*(int *)(DAT_009b09d4 + 0xc) + (uint)*(ushort *)(param_1 + 2) * 4,
                             param_2);
    }
    uVar3 = FUN_00460c20(*(undefined4 *)(param_1 + iVar1 * 4 + 4),param_2);
    iVar4 = FUN_00460c20(&param_3,uVar3);
  }
  return iVar4;
}


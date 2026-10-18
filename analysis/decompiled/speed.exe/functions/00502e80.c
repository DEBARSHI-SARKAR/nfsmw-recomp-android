/* speed.exe 00502e80 FUN_00502e80; analysis pseudocode, not buildable source.
 * calls 004fb210 FUN_004fb210
 */

int __thiscall FUN_00502e80(int param_1,uint param_2)

{
  int iVar1;
  
  if (((((&DAT_0091a0dc)[param_2 & 0x1fff] != '\0') && (*(int *)(param_1 + 0x14) != 0)) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x74), iVar1 != 0)) &&
     (((iVar1 = FUN_004fb210(param_2,iVar1,*(undefined4 *)(param_1 + 0x18),0,8), iVar1 != 0 &&
       (iVar1 = *(int *)(iVar1 + 4), iVar1 != 0)) && (*(int *)(iVar1 + 0x70) != 0)))) {
    if (*(int *)(iVar1 + 0x3c) == 0) {
      return iVar1;
    }
    if (*(int *)(iVar1 + 0x74) != 0) {
      return iVar1;
    }
  }
  return 0;
}


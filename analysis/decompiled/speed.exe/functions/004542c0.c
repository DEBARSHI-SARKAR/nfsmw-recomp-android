/* speed.exe 004542c0 FUN_004542c0; analysis pseudocode, not buildable source.
 * calls 004532c0 FUN_004532c0
 * calls 00453a20 FUN_00453a20
 */

int __thiscall FUN_004542c0(int *param_1,undefined4 param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_3 == '\0') {
    uVar1 = FUN_00453a20(param_2);
    if ((uVar1 < (uint)param_1[1]) &&
       (((iVar2 = *param_1 + uVar1 * 0xc, (*(byte *)(iVar2 + 0xb) & 0x10) != 0 ||
         (*(int *)(iVar2 + 4) != iVar2)) && (iVar2 = FUN_004532c0(param_1,uVar1), iVar2 != 0)))) {
      return iVar2;
    }
    *param_3 = '\x01';
    iVar2 = FUN_004532c0(*(int *)(param_1[5] + 8) + 0xc,0xffffffff);
    return iVar2;
  }
  iVar2 = *(int *)(param_1[5] + 8);
  piVar3 = (int *)(iVar2 + 0xc);
  uVar1 = FUN_00453a20(param_2);
  if ((uVar1 < *(uint *)(iVar2 + 0x10)) &&
     ((iVar2 = *piVar3 + uVar1 * 0xc, (*(byte *)(iVar2 + 0xb) & 0x10) != 0 ||
      (*(int *)(iVar2 + 4) != iVar2)))) {
    iVar2 = FUN_004532c0(piVar3,uVar1);
    return iVar2;
  }
  return 0;
}


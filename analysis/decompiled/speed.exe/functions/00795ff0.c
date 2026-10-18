/* speed.exe 00795ff0 FUN_00795ff0; analysis pseudocode, not buildable source.
 * calls 00844710 FUN_00844710
 * calls 00794f80 FUN_00794f80
 * calls 00460d20 FUN_00460d20
 * calls 00460c70 FUN_00460c70
 * calls 0056e340 FUN_0056e340
 */

undefined4 __thiscall
FUN_00795ff0(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_40 [16];
  
  if (param_3 == (int *)0x0) {
    param_3 = (int *)(param_1 + 8);
  }
  if (((-1 < *param_3) && (-1 < param_2)) && (param_2 < param_3[0x83])) {
    uVar1 = FUN_0056e340();
    iVar2 = FUN_00460d20(param_3 + param_2 * 0x23 + 0x86,uVar1);
    if (iVar2 == 0) {
      return 0;
    }
    puVar3 = local_40;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    FUN_00460c70(local_40,param_3 + (param_2 + 4) * 0x23);
    iVar2 = FUN_00794f80(local_40,param_4,param_5);
    uVar1 = FUN_00844710(*(undefined4 *)(iVar2 + 0x3c));
    return uVar1;
  }
  return 0xffffffff;
}

